    #include <bits/stdc++.h>

    using namespace std;

    string ltrim(const string &);
    string rtrim(const string &);



    /*
    * Complete the 'minDeletions' function below.
    *
    * The function is expected to return an INTEGER.
    * The function accepts INTEGER_ARRAY arr as parameter.
    */

//    int CeilIndex(std::vector<int>& v, int l, int r, int key) 
//     { 
//         while (r - l > 1) { 
//             int m = l + (r - l) / 2; 
//             if (v[m] >= key) 
//                 r = m; 
//             else
//                 l = m; 
//         } 
    
//         return r; 
//     } 
  
//     int LongestIncreasingSubsequenceLength(vector<int>& v) 
//     { 
//         if (v.size() == 0) 
//             return 0; 
    
//         vector<int> tail(v.size(), 0); 
//         int length = 1; // always points empty slot in tail 
    
//         tail[0] = v[0]; 
//         for (size_t i = 1; i < v.size(); i++) { 
    
//             // new smallest value 
//             if (v[i] < tail[0]) 
//                 tail[0] = v[i]; 
    
//             // v[i] extends largest subsequence 
//             else if (v[i] > tail[length - 1]) 
//                 tail[length++] = v[i]; 
    
//             // v[i] will become end candidate of an existing 
//             // subsequence or Throw away larger elements in all 
//             // LIS, to make room for upcoming grater elements 
//             // than v[i] (and also, v[i] would have already 
//             // appeared in one of LIS, identify the location 
//             // and replace it) 
//             else
//                 tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i]; 
//         } 
    
//         return length; 
//     } 
  
    int LongestIncreasingSubsequenceLength(vector<int> arr){
        vector<int> parent(arr.size());
        vector<int> increasingSub(arr.size());
        int length = 0;
        for(int i = 0;i< arr.size();i++){
            int low = 1;
            int high = length;
            while (low <= high)
            {
                int mid = (int)ceil((low + high)/2);
                if(arr[increasingSub[mid]] < arr[i])
                    low = mid+1;
                else
                    high = mid-1;
            }
            int pos = low;
            parent[i] = increasingSub[pos-1];
            increasingSub[pos] = i;
            if(pos>length){
                length = pos;
            }
        }
        return length;
    }

    int minDeletions(vector<int> arr) {
        int x = LongestIncreasingSubsequenceLength(arr);
        return (arr.size() -x -1);
    }

    int main()
    {
        ofstream fout(getenv("OUTPUT_PATH"));

        string arr_count_temp;
        getline(cin, arr_count_temp);

        int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

        vector<int> arr(arr_count);

        for (int i = 0; i < arr_count; i++) {
            string arr_item_temp;
            getline(cin, arr_item_temp);

            int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

            arr[i] = arr_item;
        }

        int result = minDeletions(arr);

        fout << result << "\n";

        fout.close();

        return 0;
    }

    string ltrim(const string &str) {
        string s(str);

        s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
        );

        return s;
    }

    string rtrim(const string &str) {
        string s(str);

        s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
        );

        return s;
    }

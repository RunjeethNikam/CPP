#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'splitIntoTwo' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int splitIntoTwo(vector<int> arr) {
    vector<int> r1(arr.size(), 0), r2(arr.size(), 0);
    int sm = 0;
    for(auto i = 0;i<arr.size();i++){
        r1[i] = sm + arr[i];
        sm = r1[i];
    }
    sm = 0;
    for(int i = arr.size()-1;i>= 0;i--){
        r2[i] = sm + arr[i];
        sm = r2[i];
    }
    int count = 0;
    for(int i = 0;i<arr.size()-1;i++){
        if(r1[i] < r2[i+1]){
            count++;
        }
    }
    
    return count;
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

    int result = splitIntoTwo(arr);

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

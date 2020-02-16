#include<bits/stdc++.h>
using namespace std;
#define lli long long int
class LinkedList{
    public:
    list<lli> lt;
    list<lli>::iterator mid;
    void push_front(lli data){
        if(lt.size() == 0){
            lt.push_front(data);
            mid = lt.begin();
        }
        else{
            lt.push_front(data);
            if(lt.size()&1){
                mid--;
            }
        }
    }
    void push_back(lli data){
        if(lt.size() == 0){
            lt.push_back(data);
            mid = lt.begin();
        }
        else{
            lt.push_back(data);
            if(lt.size()%2 == 0){
                mid++;
            }
        }
    }
    void print(){
        auto it = lt.begin();
        while(it!= lt.end()){
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
    }
    void Mid(){
        if(lt.size()){
            cout<<*mid<<" ";
        }
        cout<<endl;
    }
    void pop_front(){
        if(lt.size()){
            if(lt.size()&1){
                mid++;
                
            }
            lt.pop_front();
        }
        else{
            cout<<"empty"<<endl;;
        }
    }
    void pop_back(){
        if(lt.size()){
            if(lt.size()%2 == 0){
                mid--;
                
            }
            lt.pop_back();
        }
        else{
            cout<<"empty"<<endl;;
        }
    }
    void deleteMid(){
        if(lt.size()&1){
            auto temp = mid;
            mid++;
            lt.erase(temp);
        }
        else{
            auto temp = mid;
            mid--;
            lt.erase(temp);
        }
    }
};

int main(int argc, char const *argv[])
{
    freopen("/home/home/cpp/inputf.in", "r", stdin);
    freopen("/home/home/cpp/outputf.in", "w", stdout);
    ios_base::sync_with_stdio(0);    
    LinkedList lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);
    lt.push_back(6);
    // lt.deleteMid();
    // lt.deleteMid();
    // lt.deleteMid();
    lt.Mid();
    lt.print();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void f(int *p, int *q){
    p = q;
    *p = 2;
    // cout<<*p<<*q<<endl;
}
int i = 0, j = 1;
void swap(char *x, char *y){
    char *t = x;
}

struct point
{
};
class A{
    int b;
    public:
    A(int a){
        this->b = a;
    }
    void show(){
        cout<<this->b<<endl;
    }
};
class B{
    A a;
    int b;
    public:
    void show(){
        a.show();
    }
    B(int a):this->a(a){}

};
int main(int argc, char const *argv[])
{
    // cout<<sizeof(void *)<<endl;
    // int arr[3][2] = {{1,5},{6,3},{8,3}};
    // cout<<*(*(arr + 1) + 1)<<endl;
    // f(&i, &j);
    // cout<<i<<j<<endl;
    // cout<<sizeof(A);
    B b(9);
    b.show();

    return 0;
}

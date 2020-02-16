#include<bits/stdc++.h>
using namespace std;
// class Test{
//     static int i;
//     int j, k;
//     void function(){
//         cout<<0<<endl;
//         int k;
//     }
// };
// int Test::i;



// class Base1{
//     public:
//         Base1(){
//             cout<<"Base1's constructor called"<<endl;
//         }
// };  
// class Base2{
//     public:
//         Base2(){
//             cout<<" Base2's constructor called"<<endl;
//         }
// };

// class Derived: public Base1, public Base2{
//     public:
//         Derived(){
//             cout<<"Devived"<<endl;
//         }
// };


// class Test{
//     private:
//     int x;
//     public:
//     Test(){

//     }
//     Test(int i){ // conversion constructor
//         x = i;
//     }
//     void show(){
//         cout<<" x = "<<x<<endl;
//     }
// };


// class base{
//     int arr[10];
// };
// class b1: public base{ // if we use virtual keyword then we can
// // save memory

// };
// class b2: public base{

// };
// class derived: public b1, public b2{

// };


// class P{
//     public:
//     void print(){
//         cout<<"Inside p::";
//     }
// };
// class Q: public P{
//     public:
//     void print(){
//         cout<<" Inside Q:";
//     }
// };
// class R : public Q{
//     // since Q overwrites the p 
//     // when ever we call print() the overridden version is shown
// };


// class Base{
//     public:
//     Base(){
//         fun();
//     }
//     virtual void fun(){
//         cout<<"\nBase Function\n";
//     }
// };
// class Derived: public Base{
//     public:
//     Derived(){
//         fun();
//     }
//     virtual void fun(){
//         cout<<"Derived Function";
//     }
// };



// int x = 10;
// void fun(){
//     int x = 2;
//     {
//         int x = 1;
//         cout<<::x<<endl; // :: is the global specifier 
//     }
// }


    // class Point{
    //     private:
    //     int x, y;
    //     public:
    //     Point(int i, int j);
    // };
    // Point::Point(int i = 0, int j = 0){
    //     x = i;
    //     y = j;
    // }


    // class Point{
    //     private:
    //     int x;
    //     int y;
    //     public:
    //     Point(int i, int j); // normal 
    //     Point(const Point &t); // copy constructor
    // };
    // Point::Point(int i = 0, int j = 0){
    //     x = i;
    //     y = j;
    //     cout<<"Normal Constructor called\n";
    // }
    // Point::Point(const Point &t){
    //     y = t.y;
    //     cout<<"copy constructor called\n";
    // }


int main(int argc, char const *argv[])
{
    Point *t1, *t2;
    // t1 = new Point(10, 20);
    // t2 = new Point(*t1);
    // Point t3 = *t1;
    // Point t3;
    // Point t4 = t3;// copy const.
    // t4 = t3; // normal const.




    // fun();


    // Base *pBase = new Derived();
    // delete pBase;



    // cout<<sizeof(derived);
  
    // R r;
    // r.print();
  
    // cout<<sizeof(Test);// static data members do not contribute
    // in size of an object so int j contributes only.
    // also all function also do not contribute to the size.
    // any variable inside function do not affect the size of the 
    // object.


    // Test o;
    // o = 5; // here conversion constructor is called.
    // o.show();



    // Derived d;// first the base is called from left to right
    // then the derived.
    return 0;
}

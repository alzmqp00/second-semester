#include <iostream>
using namespace std;
int main(){
    int *p1,*p2;
    p1=new int;
    *p1=42;
     p2=p1;
    cout <<"*p1="<<*p1<<"\n*p2="<<*p2<<endl;
    *p2=53;
     cout <<"*p1="<<*p1<<"\n*p2="<<*p2<<endl;
     int *p3;
    p1=new int;   
    *p1=88;
    cout <<"*p1="<<*p1<<"\n*p2="<<*p2<<endl;

     return 0;
}
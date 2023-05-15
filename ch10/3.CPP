#include <iostream>
using namespace std;
typedef int* IntPtr;
int main( )
{
    int a[10];  
    int index=10;
    IntPtr p;
    for(int i=0;i<index;i++){
        a[i]=i;
    }
    p=a;
    for(int i=0;i<index;i++){
        cout<<*(p+i)<<" ";
    }
    cout <<"\n+1:\n";
    for(int i=0;i<index;i++){
        *(p+i)+=1;
         cout<<*(p+i)<<" ";
    }
    return 0;
}


#include <iostream>
using namespace std;

typedef int* IntPtr;
void fillarr(int a[],int n);
int search(int a[],int n,int target);

int main( )
{
    int size;
    cout <<"Enter size"<<endl;
    cin >> size;
    IntPtr a;
    a=new int [size];
    int target;
    cout <<"Enter target"<<endl;
    cin >>target;
    fillarr(a,size);
    int location=search(a,size,target);
    if (location==-1){
        cout <<target<<" is not in the array"<<endl;  
    }
    else {
        cout <<target<<" is in the array"<<endl; 
    }

}

void fillarr(int a[],int n){
    cout <<"Enter "<<n<<" element"<<endl;
    for(int i=0;i<n;i++){
        cin >> a[i];

    }
}
int search(int a[],int n,int target){
    int index=-1;
    for (int i=0;i<n;i++){
        if (a[i]==target){
            index=i;
            break;
        }
    }
    return index;
}
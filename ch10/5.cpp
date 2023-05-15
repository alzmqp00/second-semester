#include <iostream>
using namespace std;
int *doubler(int[],int);
int main(){
    int size=5;
    int *a=new int[size] {1, 2, 3, 4, 5};
    int *b=doubler(a,size);
    cout <<"a:"<<endl;
    for (int i=0;i<size;i++){
        cout <<*(a+i)<<" ";
    }
    cout <<endl;
    cout <<"b:"<<endl;
     for (int i=0;i<size;i++){
        cout <<*(b+i)<<" ";
    }
    delete[] a;
    delete[] b;
    return 0;
}
int *doubler(int a[],int size){
    int *temp=new int[size];
    for (int i=0;i<size;i++){
        temp[i]=a[i]*2;
    }
    return temp;
}
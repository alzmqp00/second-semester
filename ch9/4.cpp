#include<iostream>
#include<string>
using namespace std;
int main(){
    cout <<"Enter your first and last name"<<endl;
    string f;
    string l;
    cin >> f;
    cin >>l;
    cout <<"your last name is spelled:\n";
    for(int i=0;i<l.length();i++){
        cout <<l[i]<<" ";
            
        
    }
    cout <<endl;
     for(int i=0;i<l.length();i++){
       
        cout <<"- ";       
    }
    cout <<endl;
    cout <<"Good day "<<f<<endl;
       
}
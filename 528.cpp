#include <iostream>
using namespace std;
class shape{
    protected:
    double area;
    double volume;
    string type;
    int b_=1,w_=1,h_=1,r_=1,high_=1;

    public:
    void showarea(){
        cout <<"Area = "<<area<<endl;
        cout <<"Volume = "<<volume;      
    }
       

};
class Circle :
public shape{

    public:
    void set(){
        int r,h;
        cin >>r;
        cin >>h;
        cin.ignore();
        r_=r;
        h_=h;
    }
   double Area(){
    area=r_*r_*3.1415926;
    return area;
   }
    double Volume(){
    volume=r_*r_*3.1415926*h_;
    return volume;
   }
    void show(){
        cout <<"The Circle's radius is "<<r_<<", high is "<<h_<<"."<<endl;
    }
};
class Triangle :
public shape{

    public:
    void set(){
        int b,w,h;
        cin >>b;
        cin >>w;
        cin >>h;
        cin.ignore();
        w_=w;
        h_=h;
        b_=b;
    }
    double Area(){
    area=0.5*h_*b_;
    return area;
   }
    double Volume(){
    volume=0.5*w_*h_*b_;
    return volume;
   }
    void show(){
        cout <<"The Triangle's bottom is "<<b_<<", width is "<<w_<<", high is "<<h_<<"."<<endl;
    }
 
};
class Rectangle :
public shape{
    public:
    void set(){
        int h,w,high;
        cin >>w;
        cin >>h;
        cin >>high;
        cin.ignore();
        w_=w;
        h_=h;
        high_=high;
    }
    double Area(){
    area=h_*w_;
    return area;
   }
    double Volume(){
    volume=w_*h_*high_;
    return volume;
   }
    void show(){
        cout <<"The Rectangle's width is "<<w_<<", height is "<<h_<<", high is "<<high_<<"."<<endl;
    }
};
int main(){

    string a;
    cin >> a;
    if (a=="circle"){
        Circle c;
        c.set();      
        c.show(); 
        c.Area();
        c.Volume();
        c.showarea();
    }

    if (a=="triangle"){
        Triangle c;
        c.set();      
        c.show(); 
        c.Area();
        c.Volume();
        c.showarea();
    }
    if (a=="rectangle"){
        Rectangle c;
        c.set();      
        c.show(); 
        c.Area();
        c.Volume();
        c.showarea();
    }
    return 0;
}

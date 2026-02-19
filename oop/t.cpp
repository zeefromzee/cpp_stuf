#include <iostream>
using namespace std;

class Time{
    private:
    double hour, minute, second;

    public:
    // setter function 
    void Setdata(double a, double b, double c){
        hour = a;
        minute = b;
        second = c;
        }

    void DisplayData(){
        cout << "The hour is: "<< hour << endl;
        cout << "The minutes are: " << minute << endl;
        cout << "The seconds are: " << second << endl;    
    }
    void AddTime(Time t1, Time t2){
        hour = t1.hour + t2.hour;
        minute = t1.minute + t2.minute;
        second = t1.second +t2.second;

        cout<< endl;
        cout<<"The required addition for hour is: " << hour << endl; 
        cout<<"The required addition for minutes is: " << minute << endl; 
        cout<<"The required addition for seconds is: " << second << endl;  

    }

};

int main(){
    Time t1, t2, t3; 

    t1.Setdata(6,7, 8);
    t1.DisplayData();
    
    cout<<endl;

    t2.Setdata(5,2,5);
    t2.DisplayData();
    t3.AddTime(t1,t2);
    
}
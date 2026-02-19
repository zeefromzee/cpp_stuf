#include <iostream>
using namespace std;

class Time{

    private:
        int hour;
        int minutes;
        int second;

    public:
    //setter function
    void SetData(int a, int b, int c){
        hour = a;
        minutes = b;
        second = c;
    }

    // getter function:
    void print(){
        cout << "The hour is: "<< hour <<endl;
        cout<< "The minutes are: "<< minutes << endl;
        cout << "The seconds are: " << second <<endl;
    
    }

};

void Time :: SetData(int a, int b, int c){
        hour = a;
        minutes = b;
        second = c;

} 

int main(){
    Time t1, t2;
    t1.SetData(12,45,32);
    t2.SetData(1,5,45);
    
    t1.print();
    cout<<endl;
    t2.print();
}
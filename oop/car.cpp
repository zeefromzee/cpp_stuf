# include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

    public:
    Car(string x, string y, int z){
        brand= x;
        model=y;
        year=z;
    }
    
    void Displaydata(){
        cout << "The Brand is: " << brand << endl;
        cout << "The model is: " << model << endl;
        cout << "The year : " << year << endl;
    } 

};

int main(){
    Car car1("BMW", "x5", 1999);
    Car car2("Ford", "Mustang", 1999);
    cout << "Car 1: " << endl;
    car1.Displaydata();
    
    cout << "Car 2:" << endl;
    car2.Displaydata();
    

}
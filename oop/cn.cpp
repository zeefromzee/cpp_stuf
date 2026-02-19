// two obj for which take value of img part and complex part
// add those two obj (real +real)

#include <iostream>
using namespace std;

class Complex{
    private:
    double real, img;

    public:
    // setter function 
    void Setdata(double a, double b){
        real = a;
        img = b;
        }

    void DisplayData(){
        cout << "The real part is: "<< real << endl;
        cout << "The imaginary part is: " << img << endl;    
    }
    void AddTime(Complex c1, Complex c2){
        real = c1.real + c2.real;
        img = c1.img + c2.img;

        cout<< endl;

        cout<<"The required addition for real part is: " << real << endl; 
        cout<<"The required addition for imaginary part is: " << img << endl; 
    }

};

int main(){
    Complex c1, c2, c3; 
    c1.Setdata(5,6);
    c1.DisplayData();
    cout << endl;
    c2.Setdata(9, 10);
    c2.DisplayData();

    c3.DisplayData();
    
}
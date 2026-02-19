# include <iostream>
using namespace std;

class Rectangle{
    private:
    double width, height;

    public:
    // setter function:
    void set_values(double, double);
    //getter function: 
    double area();

};

void Rectangle :: set_values (double a, double b){
    width = a;
    height = b;
}

double Rectangle :: area(){
        double a = width*height;
        return a ;
    }

int main(){
    Rectangle r1, r2;
    r1.set_values(50, 70);
    r2.set_values(90, 10);

    cout << "The first area is: " << r1.area() << endl;
    cout << endl;
    cout << "The second area is: "<<r2.area()<< endl;
}
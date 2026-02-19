# include <iostream>
using namespace std;
# define pi 3.14
class circle{
    // the data types created are:
    private:
    double radius;
    
    public:
    circle(double rad): radius (rad){}
    
    float area(){
        float area= pi*radius*radius;
        return area;
    }

    float circumference(){
        float circumference = 2*pi*radius;
        return circumference;
    }


};

int main(){
    circle c1(55);
    c1.area();
    c1.circumference();
    cout << "The required area is: " << c1.area()<<endl;
    cout << "The required circumference is: " << c1.circumference()<<endl;
    cout << endl;

}
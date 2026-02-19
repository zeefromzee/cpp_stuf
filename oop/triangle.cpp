# include <iostream>
using namespace std;

class Triangle{
    private:
    double l1 = 0;
    double l2 = 0;
    double l3 = 0;

    public:
    // setter function:
    void SetData(double a,  double b, double c){
        l1 = a;
        l2 = b;
        l3 = c;    
    }

    // Function to determine the type of triangle:
    void type(){
        if (l1==l2 && l2==l3){
            cout << "It is an Equilateral Triangle" << endl;
        }
        else if(l2==l3 || l1==l2 || l3==l1){
            cout << "The triangle is an isosceles triangle" << endl;
        }
        else {
            cout << "The triangle is a scalene tiangle" << endl;
        }
    }

    // Getter function:
    void GetData(){
        cout << "The lengths are: "<< "\t"<<l1<<"\t"<<l2<<"\t"<<l3<<endl;
    }
};

int main(){
    Triangle t1;
    t1.SetData(66,77,77);
    t1.type();
    t1.GetData();

}

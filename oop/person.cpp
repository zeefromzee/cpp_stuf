#include <iostream>
using namespace std;

class Person{

    private:
    string name;
    int age;
    string country;

    public:
    // setter function :
    void SetData(string a, int b, string c){
        name = a;
        age = b;
        country = c;
    }

    // Getter function:
    void DisplayData(){
        cout<< "The name is: "<< name << endl;
        cout << "The age is: " << age << endl;
        cout << "The country is: " << country << endl;
    }
};

int main(){
    Person P1;
    P1.SetData("zee", 19, "India");
    P1.DisplayData();

}
# include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    void display();
};

void student::display(){
        cout << name << endl;
}

int main(){
    student s1;
    s1.name = "zee";
    s1.display();
    
}
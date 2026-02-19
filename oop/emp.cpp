# include <iostream>
using namespace std;

class Employee{
    private:
        double Employee_ID = 0;
        double Salary = 0;
        float percentage = 0; // This determines the performance of the employee based on their required percentage off of the work that they've done in a required time period
        string Name;

    public:
        void SetData(string a, double b, double c, float d){
            Name = a;
            Employee_ID = b;
            Salary = c;
            percentage = d;
        }

        void GetData(){
            
        }



};
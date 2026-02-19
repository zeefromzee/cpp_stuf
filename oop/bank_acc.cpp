# include <iostream>
using namespace std;

class Bank{
    private:
    double Acc_No = 0;
    int Balance = 0;

    public:
    // setter function:
    void SetData(double a, int b){
        Acc_No = a;
        Balance = b;
    }

    // function to deposit money:
    int deposit(){
        int a;
        cout << "How much money do you wish to deposit: ";
        cin >> a;
        Balance += a;
        return Balance;
    }

    // Function to withdraw money:
    int withdraw(){
        int b;
        cout << "Your current Balance is: " << Balance << endl;
        cout << "How much would you like to withdraw: ";
        cin >> b;
        Balance -= b;
        return Balance;
    }
    
    // Getter function:
    void GetData(){
        cout << "The Account Number is: " << Acc_No << endl;
        cout << "The required Balance is: " << Balance << endl;
    }
};

int main(){
    Bank b;
    b.SetData(55555, 555);
    b.GetData();
    b.deposit();
    b.GetData();
    b.withdraw();
    b.GetData();
}
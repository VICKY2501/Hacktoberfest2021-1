#include<iostream>
#include<math.h>
using namespace std;

class Bank{
    public:
    int balance;
    float roi;
Bank()  //constructor
{
    cout<<"Enter initial balance\n";
    cin>>balance;
    cout<<"Enter rate of interest\n";
    cin>>roi;
}
void Deposit()
{
    int x;
  cout<<"Enter Amount to be deposited\n";
  cin>>x;
  balance=balance+x;

}

void Withdraw()
{
    int y;
    cout<<"Enter amount to be withdrawn\n";
    cin>>y;
    if(y>balance)
    {
        cout<<"INVALID AMOUNT\n";
    }
    else{
    balance=balance-y;}
}
void Compound()
{
    int t;
    cout<<"enter time period\n";
    cin>>t;
    float interst=balance*pow(1+(roi/100),t)-balance;
    cout<<"interest for this time period= ";
    cout<<interst<<endl;
}
void GetBalance()
{
    cout<<"Balance= ";
    cout<<balance<<endl;
}
void menu(){
    cout<<"Choose what to do next \n";
    cout << "\n\n1.Deposit Money\n2.Withdraw Money\n3.Calculate Compound Interest\n4.Balance\n5.Destructor\nEnter the Number : " << endl;
    }
    ~Bank()
    { 
        cout << "Destructor called (quit)" << endl; 
    }

};

int main()
{
    Bank SBI;
    SBI.menu();
    int number;
    cin >> number;

    while(number != 5){
    switch (number)
    {
    case 1 :
        
        SBI.Deposit();
        break;
    case 2 :

        SBI.Withdraw();
        break;
    case 3:

        SBI.Compound();
        break;
    case 4:

        SBI.GetBalance();
        break;
    case 5:

        cout << "You have quit the system succesfully";
        return 0;

    default:
        cout << "Invalid operation!! Please try again" << endl;
        break;
    }
        cin >> number;
        
    }
    cout << "You have quit the system succesfully" << endl;
    
    return 0;
}
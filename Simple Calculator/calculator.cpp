#include<iostream>
using namespace std;

int main(){
    double a,b;
    char op;
    while (true){
        cout<< "\n\nSimple Calculator" << endl;
        cout<< "Enter the first number:";
        cin>> a ;
        cout<< "\nEnter the operator(+,-,*,/):";
        cin>> op;
        cout<<"\nEnter the second number:";
        cin>> b ;

        switch(op){
            case '+':
            cout<<"The answer is:"<<a+b<<endl;
            break;

            case '-':
            cout<<"The answer is:"<<a-b<<endl;
            break;
            case '*':
            cout<<"The answer is:"<<a*b<<endl;
            break;

            case '/':
            if (b!=0){
                cout<<"The answer is:"<<a/b<<endl;
            }
            else{
                cout<<"Divider cannot be 0"<<endl;
            }
            break;
            

            default:
            cout<<"Invalid input....please try again";
            break;
        }
    }
    return 0;
}

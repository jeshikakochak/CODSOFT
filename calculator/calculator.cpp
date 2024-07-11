#include<iostream>
using namespace std;

int main()
{
    double a,b;
    char c;

    cout<<"first value\n";
    cin>>a;
    cout<<"second value\n ";
    cin>>b;
    cout<<"enter choice\n";
    cin>>c;

    switch(c)
    {
        case '+':
        cout<<"addition="<<a+b;
        break;

        case '-':
        cout<<"subtraction="<<a-b;
        break;

        case '*':
        cout<<"multiplication= "<<a*b;
        break;

        case '/':
        cout<<"division= "<<a/b;
        break;

        default:
        cout<<"wrong input ";
        
    }
    
}
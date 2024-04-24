#include <iostream>
using namespace std;
int main()
{
int num1, num2;
char x;
while(true )
{
    cout<<"\t\tC A L C U L A T O R"<<endl;
    cout<<"Insert number one"<<endl;
    cin>>num1;
    cout<<"Insert number two"<<endl;
    cin>>num2;
    cout<<"Press a for addition"<<endl;
    cout<<"Press b for subtraction"<<endl;
    cout<<"Press c for multiplication"<<endl;
    cout<<"Press d for division"<<endl;
    cin>>x;
    if(x=='a')
        cout<<"The answer is "<<num1 + num2<<endl;
    else if(x=='b')
        cout<<"The answer is "<<num1 - num2<<endl;
    else if(x=='c')
        cout<<"The answer is "<<num1 * num2<<endl;
    else if(x=='d')
        cout<<"The answer is "<<num1 / num2<<endl;
    else
        cout<<"INVALID";
}
    return 0;
}

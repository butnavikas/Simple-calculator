#include<iostream>
using namespace std;
//simple calculator using switch and do while loop
int main(){
    // declaring inputs
    int x, y;
    char o;
    char choice;
    do{
        // taking inputs from user
    cout<<"enter first no.:"<<endl;
    cin>>x;
    cout<<"enter operator + - * / % :"<<endl;
    cin>>o;
    cout<<"enter second no.:"<<endl;
    cin>>y;
// switch statement for operations
switch (o)
{
case '+':
    cout<<"your sum is :"<<x+y<<endl;
    break;
case '-':
    cout<<"your difference is :"<<x-y<<endl;
    break;
case '*':
    cout<<"your product is :"<<x*y<<endl;
    break;
case '/':
if(y==0){
    cout<<"invalid"<<endl;
}
else{ 
    cout<<"your division is :"<<x/y<<endl;
}
break;
case '%':
if(y==0){
    cout<<"invalid"<<endl;
}
else{
    cout<<"your modulo is :"<<x%y<<endl;
}
    break;

default:
cout<< "invalid operator"<<endl;
    break;
}
//asking user to whether continue or not
cout<<"do you want to perform another operation type y for yes and n for no"<<endl;
cin>>choice;
}
while (choice=='y' || choice=='Y');
cout<<"thankyou for using , Good byee"<<endl;
   return 0;
} 
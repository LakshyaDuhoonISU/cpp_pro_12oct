//program to demonstrate use of void function
#include<iostream>
#include<string>
using namespace std;

void print(string m) //function with void return type with string m as parameter
{
    cout<<"Message is: "<<m<<endl; //printing the message
    return;
}

int main()
{
    string msg;
    print("Hello world");
    return 0;
}

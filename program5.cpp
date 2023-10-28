//program to demonstrate use of void function
#include<iostream>
#include<string>
using namespace std;

void print(string m); //forward declaration

int main()
{
    string msg;
    print("Hello world");
    return 0;
}

void print(string m)
{
    cout<<"Message is: "<<m<<endl;
}
//program to demonstrate the use of class
#include<iostream>
#include<string>
using namespace std;

class Student //name of the class (first letter should be a capital letter)
{
    private: //access specifier for class data members
        int roll; //data members of the class
        string n;
    
    public: //access specifier for class member functions
        void setData(int r, string name="ABC") //parameters for class function setData(), string name has a default argument "ABC"
        {
            roll=r; //setting the data given by the user in the data members
            n=name;
        }

        void getData() //member function without any parameters
        {
            cout<<roll<<endl; //printing the values of data members of the class
            cout<<n<<endl;
            cout<<endl;
        }

        void getDetails() //member function to get details from the user 
        {
            cout<<"Enter roll no: ";
            cin>>roll;
            cout<<"Enter name of student: ";
            cin>>n;
        }
}; //end of class

int main()
{
    Student s1,s2,s3; //creating objects s1 and s2 for the class Student
    s1.setData(1); //calling the member function of the class with arguments 1 and "ABC"
    s2.setData(2,"XYZ");
    s3.getDetails();
    s1.getData(); //calling the member function of the class with no arguments 
    s2.getData();
    s3.getData();
    return 0;
}

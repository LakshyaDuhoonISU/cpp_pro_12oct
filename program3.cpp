//program to demonstrate the use of class-object array
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
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student obj[n];
    for (int i=0;i<n;i++)
    {
        obj[i].getDetails();
    }
    cout<<"Details of students: "<<endl;
    for (int i=0;i<n;i++)
    {
        obj[i].getData();
    }
    return 0;
}
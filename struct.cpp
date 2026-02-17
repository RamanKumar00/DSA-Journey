#include<iostream>
using namespace std;
struct student{
    int roll;
    int age;
    string name;

    void studentDetails(){
        cout<<"name is: "<<name<<endl;
        cout<<"age  is: "<<age<<endl;
        cout<<"roll is: "<<roll<<endl;
    }
};
int main()
{
    student raman;
    raman.roll = 82;
    raman.age = 21;
    raman.name = "Raman";
    // cout<< raman.name << endl<<raman.age <<endl << raman.roll; --> instead of writing these just create a function and call it.
    raman.studentDetails();
    return 0;
}
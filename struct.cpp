#include<iostream>
using namespace std;
struct student{
    int roll;
    int age;
    string name;
};
int main()
{
    student raman;
    raman.roll = 82;
    raman.age = 21;
    raman.name = "Raman";
    cout<< raman.name << endl<<raman.age <<endl << raman.roll;
    return 0;
}
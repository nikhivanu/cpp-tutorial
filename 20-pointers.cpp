#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    // prints out memory address of where age is stored
    cout << &age << endl;

    // dereferencing a pointer
    cout << "Value stored at address above: ";
    cout << *pAge << endl;

    return 0;
}
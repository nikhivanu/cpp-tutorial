#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int age; 
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    // if you want to get a string
    // Reference: https://stackoverflow.com/a/12691486
    cin.ignore();
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Hello " << name << endl;
}
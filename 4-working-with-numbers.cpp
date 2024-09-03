#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << 5 * 7 << endl;
    cout << 10 % 3 << endl;
    cout << 4 + 5 * 10 << endl;

    int wnum = 5; 
    double dnum = 5.5;
    wnum++;
    wnum+=80;
    cout << 10/3 << endl; //will get an integer number back 
    cout << 10.0/3.0 << endl; //gets real answer
    cout << wnum << endl;

    cout << pow(2,5) << endl;

    cout << round(4.6) << endl;
    cout << floor(4.6) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(3,10) << endl;
}
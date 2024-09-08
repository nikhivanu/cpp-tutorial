#include <iostream>
#include <cmath>

using namespace std; 


void sayHello(string name, int age);

int main(){
    int num; 
    num = 4;
    sayHello("mike", 45);
    sayHello("neo", 10);
    sayHello("tom", 32);
}

void sayHello(string name, int age){
    cout << "Hello " << name << " you are " <<age << endl;
}
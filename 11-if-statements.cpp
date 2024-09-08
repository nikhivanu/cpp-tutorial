#include <iostream>
#include <cmath>

using namespace std; 

int getMax(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1= >= num3){
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else{
        result = num3;
    }
}

int main(){
    /*bool isMale = true;
    bool isTall = false;
    if(isMale && isTall){
        cout << "you are a tall male";
    }
    else if(isMale){
        cout << "you are not a tall male";
    }
    else{
        cout << "you are not male";
    }*/

    cout << getMax(2, 5, 4);
    return 0;


}

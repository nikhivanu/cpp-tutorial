#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Giraffe Academy\n";

    string phrase = "Giraffe Academy";
    cout << phrase.length() << endl; 

    cout << phrase[2] << endl;

    phrase[0] = 'B';
    cout << phrase << endl;

    //find function (chars to be found, start searching from this index)
    cout << phrase.find("ffe", 0) << endl;

    //substring function (starting index, length)
    cout << phrase.substr(8, 3) << endl;

    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl;
}
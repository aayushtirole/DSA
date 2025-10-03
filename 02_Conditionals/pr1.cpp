#include<iostream>
using namespace std;

int main(){
    
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    if ( ch >= 'a' && ch <= 'z'){
        cout << "This is lower case";
    }else if ( ch >='A' && ch <= 'Z'){
        cout << "this is upper case ";
    }else if (ch >= '0' && ch <= '9'){
        cout << "This is a number";
    }else {
        cout << "This is neither a letter or nor a number ";
    }
    return 0;
}
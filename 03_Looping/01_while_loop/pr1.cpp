//checking number is prime is not prime 
#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cout << "Enter your number";
    cin >> n;

    int i = 2;

    while(i < n ){

        if(n%i ==0){
            cout << "Not Prime" << endl;
        }
        i++;
    }

    return 0;
}
//find a sum of all even numbers 

#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the number ";
    cin >> n;

    int sum = 0;

    int i =2;

    while ( i <= n ){

        sum = sum + i;
        i = i + 2;
    }

    cout << "Sum of all even number is : " << sum ;
    
    
    return 0;
}
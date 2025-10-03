// while loop -- jab tak  

#include<iostream>
using namespace std;

int main(){
    
    int n;
    int sum;
    cin >> n;
    

    int i = 1;
    sum = 0;

    while (i <=n)
    {
        sum = sum + i;
        cout << sum;
        i++;
    }
    cout << "value of sum is : " << sum ;
    
    return 0;
}
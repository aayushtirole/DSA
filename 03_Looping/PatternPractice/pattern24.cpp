#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    
    while(i<=n){
        int space =1;
        while (space<= n-i){
            cout<< "  "; //two spaces
            space++;
        }

        int j =1; 
        while(j <=i){
            cout<< j << " ";
            j++;
        }

        j = i-1;
        while (j >=1){
            cout<<j<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    
    while(i<=n){
        //print space ,1st triangle
        int space =1;
        while (space<= n-i){
            cout<< "  "; //two spaces
            space++;
        }

        //print second triangle
        int j =1; 
        while(j <=i){
            cout<< j << " ";
            j++;
        }
        
        //print second triangle
        
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
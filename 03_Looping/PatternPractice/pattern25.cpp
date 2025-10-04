#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    
    while(i<=n){

        //print first triangle
        int j =1; 
        while(j <=n-i+1){
            cout<< j << " ";
            j++;
        }

        //Print second triangle 
        //starts (i-2)*2 time
        j =1;
        while(j<= (i-1)*2){
            cout<<"* ";
            j++;
        }

        //part3:nnumber from n-i+1 to 1
        j = n - i + 1;
        while(j >=1){
            cout<< j << " ";
            j--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
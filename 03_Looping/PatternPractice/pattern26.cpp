//diamond 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    //Upper Part
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
        while(j <=2*i-1){
            cout<<"* ";
            j++;
        }
        
    
        i++;
        cout<<endl;
    }

    //lower part 
    i =n-1;
    while (i >=1){
    
    int space =1;
        while (space<= n-i){
            cout<< "  "; //two spaces
            space++;
        }

        //print second triangle
        int j =1; 
        while(j <=2*i-1){
            cout<<"* ";
            j++;
        }
        i--;
        cout<<endl;
    }
    return 0;
}
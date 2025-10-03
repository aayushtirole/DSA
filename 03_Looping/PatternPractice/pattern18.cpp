#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row =1;
    while(row <=n){
    
        //space print karne ke liye 
        int space = n- row;
        while(space){
            cout<< " " ;
            space--;
        }

        //star print krne ke liye 
        int col =1;
        while(col <=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
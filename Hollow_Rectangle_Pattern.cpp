#include<iostream>
using namespace std;

int main(){
    int row , col;
    cout<<"Enter the No of Rows and Column:- ";
    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for (int j=1; j<=col; j++){
            if (i==1 || i==row){
                cout<<"*";
            }
            else if(j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n:- ";
    cin>>n;
    int array[n];


    for(int i=0; i<n; i++){
        cout<<"Enter the elements:- ";
        cin>>array[i];
    }

    cout<<"The Given array is:- ";
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}

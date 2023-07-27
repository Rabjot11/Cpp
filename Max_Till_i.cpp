#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n:- ";
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cout<<"Enter elment"<<i<<":- ";
        cin>>arr[i];
    }

    int mx =-999999;//assuming 999999 minimuim value
    for(int i= 0; i<n; i++){

        mx = max(mx , arr[i]);
         cout<<"The max element is:- "<<mx<<endl;
    }
    return 0;
}
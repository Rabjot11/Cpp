#include<iostream>
#include<climits>
using namespace std;


int main(){
    
    int n;
    cout<<"Enter n:- ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter Element "<<i<<":- ";
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i =0; i<n; i++){
        maxNo= max(maxNo, arr[i]);
        minNo= min(minNo, arr[i]);
    }

    cout<<"The Max no :- "<<maxNo<<" "<<"The Min no :- "<<minNo<<endl;
    return 0;

}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:- ";
    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++){
        cout<<"Enter the element"<<i<<":- ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int curr = 0;
        cout<<"Sum of the element from "<<i<<" to "<<n<<":- ";
    for( int j=i; j<n; j++){
        curr +=arr[j];
        cout<<curr<<" ";
    }
    cout<<endl;
    }
    return 0;
}
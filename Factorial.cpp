#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact1=1;
    for(int i=2; i<=n; i++){
        fact1 = fact1*i;
        }
    cout<<fact1<<endl;
}

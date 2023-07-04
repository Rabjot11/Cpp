#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit= n%10;
        int power=pow(lastdigit,3);
        sum=sum+power;
        n=n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Non Armstrong Number"<<endl;
    }
    return 0;
}

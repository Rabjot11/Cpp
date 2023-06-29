#include<iostream>
using namespace std;

int main(){

    int saving;
    cout<<"Enter your Saving:-";
    cin>>saving;
    
    if(saving>6000){

        cout<<"Buy a Ssd";

    } else if(saving>3000){

        cout<<"Buy a Gaming Controller";

    } else if(saving>2000){

        cout<<"Buy a Ram Chip";

    } else{

        cout<<"SAVE SOME MONEY!!";
        
    }

}
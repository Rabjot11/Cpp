#include <bits/stdc++.h>
#include<iostream>
using namespace std ;

int bintodec(int n){
    int ans = 0;
    int x=1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n/=10;

    }
    return ans;
}
int octtodec(int n){
    int ans = 0;
    int x=1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n/=10;

    }
    return ans;
}
int hextodec(string n){
    int ans = 0;
    int x=1;
    int s =n.size();
    for(int i=s-1; i>=0; i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+= x*(n[i]-'0');
        }
        else if(n[i]>= 'A' && n[i <='F']){
            ans+= x*(n[i]-'a'+ 10);
        }
        x*=16

    }
    return ans;
}

int main(){
    int opp;
    switch (opp)
    {
        case '1':
        int n;
        cin>>n;
        cout<<"Enter the Binary:- ";
        break;
        
        case '2':
        string n;
        cin>> n;
        break;

        
        
    cout<<"option 1 :- Binary to decimal"<<endl
    <<"option 2:- Binary to oct"<<endl;
    char op;
    
    cin>>op;
    switch (op)
    {
        case '1':
        cout<<bintodec(n)<<endl;
        break;
        
        case '2':
        cout<<octtodec(n)<<endl;
        break;

        case '3':
        cout<<hextodec(n)<<endl;
        break;
        
        }
        return 0;
    }
}


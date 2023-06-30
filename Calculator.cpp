#include<iostream>
using namespace std;

int main(){


    bool flag=true;
    while(flag){
        double num1;
        cout<<"Enter the num1 : ";
        cin>>num1;
        double num2;
        cout<<"Enter the num2 : ";
        cin>>num2;
        char operation;
        cout<<"Enter the operator: ";
        cin>>operation;
        double total;


        if(operation == '+'){
            
            total = num1 + num2;
            cout<<"The sum of num1 & num2 is"<<total<<endl;
        }else if(operation == '-'){
            
            total = num1 - num2;
            cout<<"The difference of num1 & num2 is "<<total<<endl;
        }else if(operation == '*'){
            
            total = num1 * num2;
            cout<<"The product of num1 & num2 is "<<total<<endl;
        }else if(operation == '/'){
            
            total = num1 / num2;
            cout<<"The division of num1 & num2 is "<<total<<endl;
        }else{
            
            cout<<"Invalid operator"<<endl;

        }

        cout<<"Wanna re-run? y/n: "; 
        string x;
        cin>>x;
        if(x=="y"){
            flag=true;
        }else {
            flag=false;
        }
        
    }
    return 0;

}
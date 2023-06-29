#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:-";
    cin>>n;

    int i;
    int sum;
    
    for(i=0;i<=n;i++)
    {
        sum = 0;
        sum = sum+i;
        cout<<sum<<", ";
        }
    
    return 0;
}
#include<iostream>
using namespace std;
//to calculate the power of a number using a loop

int main()
{
    int n, i, pow;
    cout<<"enter the number:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>pow;

    int num = n;
    for(i=1;i<pow;i=i+1)
    {
        num = num*n;
    }

    cout<<num;


}
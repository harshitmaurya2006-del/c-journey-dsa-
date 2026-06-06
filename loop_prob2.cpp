#include<iostream>
using namespace std;
//to find sum of n natural numbers 
   int main()
   {
    int n, i, sum=0;
    cout<<"Enter the number:";
    cin>>n;

    for(i=1;i<=n;i=i+1)
    {
        sum = sum+i; //do i*i for sum n square number like n=3, 1+4+9=14
    }
    
    cout<<"the sum of n natural number";
    cout<<sum;

   }
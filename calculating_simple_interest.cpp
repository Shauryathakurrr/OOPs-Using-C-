#include<iostream>
using namespace std;
int main()
{
    float p , r, t ,si;
    cout<<"Enter the principal amount : ";
    cin>>p;
    cout<<"enter the rate of interest : ";
    cin>>r;
    cout<<"enter the time in years : ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"The simple interest is : "<<si<<endl;
}
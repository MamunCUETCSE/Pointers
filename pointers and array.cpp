#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    cout<<a<<endl;//points to the first address of int a[]
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        cout<<&a[i]<<endl;//returns address of a[i];
        cout<<a[i]<<endl;
        cout<<(a+i)<<endl;//returns adress (a+i)
        cout<<*(a+i)<<endl;
    }
}

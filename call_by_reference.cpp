#include<bits/stdc++.h>
using namespace std;
void Increment(int a)
{

    a=a+1;
    cout<<a<<endl;
}
void pointers(int *p)
{
    *p=(*p)+1;
}
int main()
{
    int a=10;
    Increment(a);//call by variable/value which copies just variable a in increment
    cout<<a<<endl;//return value of local to main function
    Increment(10); //function call by value
    pointers(&a);//function call by reference which passes the address of a
    cout<<a<<endl;
}

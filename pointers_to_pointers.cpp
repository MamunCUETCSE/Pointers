#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x=10;
    int *p;
    p=&x;
    cout<<p<<" " <<*p<<endl;
    int **q;
    q=&p;
    cout<<q<<" "<<(*q)<<" "<<(*(*q))<<endl;
    int ***r;
    r=&q;
    cout<<r<<" "<<(*r)<<" "<<(*(*r))<<" "<<(***r);
}

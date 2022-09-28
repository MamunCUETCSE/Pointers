#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int *p=&x;//same as p=&x
    cout<<"Address of p "<<&p<<endl;
    cout<<"Address of x "<<p<<endl;
    cout<<"value of p "<<(*p)<<endl;
    p=p+1;//point to next integer address//after 4 byte of p
    cout<<p<<endl;
    cout<<*(p+1)<<endl;//jehetu next location e kono value nai so garbage return korbe;


}

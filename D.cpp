#include<iostream>
using namespace std;
int main()
{    int aa,ab,ac,ba,bb,bc;
     int a=0,b=0;
    cin>>aa>>ab>>ac;
    cin>>ba>>bb>>bc;
    if(aa>ba) 
        a++;
    if(aa<ba) 
        b++;
    if(ab>bb) 
        a++;
    if(ab<bb) 
        b++;
    if(ac>bc) 
        a++;
    if(ac<bc) 
        b++;
    cout<<a<<" "<<b<<'\n';
    return 0;
}

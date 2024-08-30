#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    float a,b,c,d;
    while (n--)
    {
        cin>>a>>b>>c;
        d=c/(a*b);
        if(d>0.5)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    
    return 0;
}

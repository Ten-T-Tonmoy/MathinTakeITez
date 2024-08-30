#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int n;
    cin>>n;
    double ar[n];
    float a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(a>=1000){
            ar[i]=(a*b)*0.9;
        }
        else
            ar[i]=a*b;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<fixed<<setprecision(6)<<ar[i]<<endl;
    }
    
    return 0;
}

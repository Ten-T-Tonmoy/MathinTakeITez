#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    int ar[t];
    for (int i = 0; i < t; i++)
    {
        cin>>ar[i];
    }
    int odd=0,even=0;
    int n,m;

    for (int i = 0; i < t; i++)
    {
        if(ar[i]%2==0){
            n=i;
            odd++;
        }
    }
    for (int i = 0; i < t; i++)
    {
        if(ar[i]%2!=0){
            m=i;
            even++;
        }
    }
    if(odd==1){
        cout<<n+1;
    }
    else if(even==1){
        cout<<m+1;
    }
    
    
    return 0;
}

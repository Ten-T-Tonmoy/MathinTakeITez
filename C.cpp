#include<iostream>
using namespace std;
typedef long long ll;
int main()
{   int n;
    ll jog=0;
    cin>>n;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        jog+=ar[i];
    }
    cout<<jog;
    return 0;
}

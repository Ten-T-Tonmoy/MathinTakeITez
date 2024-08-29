#include<iostream>
using namespace std;
int main()
{   int n,jog=0;
    cin>>n;
    int ar[n];
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

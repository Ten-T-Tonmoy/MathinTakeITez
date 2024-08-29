#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int a,b;
    while (n--)
    {
        cin>>a>>b;
        if(a>b)
        cout<<'>'<<endl;
        else if (a<b)
        cout<<'<'<<endl;
        else
        cout<<'='<<endl;
    }
    return 0;
}

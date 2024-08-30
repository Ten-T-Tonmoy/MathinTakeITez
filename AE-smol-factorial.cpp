#include<iostream>
using namespace std;
int main()
{   int n;
    int temp;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for (int i = 0; i < n; i++)
    {   temp=ar[i];
        for (int j = 1; j < temp; j++)
        {
            ar[i]*=j;
        }
        cout<<ar[i]<<endl;
    }
    
    
    
    return 0;
}

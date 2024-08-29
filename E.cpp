#include<iostream>
using namespace std;
int main()
{      int n;
    cin>>n;
    int sum1=0,sum2=0;
    int arr[50][50];
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>arr[i][j];
            if(i==j)
            {sum1+=arr[i][j];
            }
            if(i+j==n-1)
            {sum2+=arr[i][j];
            }
        }
        
    }
    sum1-=sum2;
    if(sum1>0)
        cout<<sum1<<endl;
    else
        {
        sum1=0-sum1;
        cout<<sum1<<endl;
    }
    return 0;
}

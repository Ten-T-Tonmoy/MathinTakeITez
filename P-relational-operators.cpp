#include<iostream>
using namespace std;
int main()
//P-relational operator
{   int n;
    cin>>n;
    int ar[2];
    while (n--)
    {
        cin>>ar[0]>>ar[1];
        if(ar[0]==ar[1])
        cout<<"="<<endl;
        else if(ar[0]<ar[1])
        cout<<"<"<<endl;
        else
        cout<<">"<<endl;
    }
    return 0;
}

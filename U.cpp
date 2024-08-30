#include<iostream>
using namespace std;
int main()
{  long long a,b;
    cin>>a>>b;
    long long c=a+b;
    if(c%2!=0){
        cout<<"IMPOSSIBLE";
    }
    else
        cout<<(c/2);

    return 0;
}

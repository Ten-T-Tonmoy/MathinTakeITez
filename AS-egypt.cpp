#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int a,b,c;
while(a!=0 && b!=0 && c!=0){
    cin>>a>>b>>c;
    int temp=sqrt(a*a+b*b);
    if(c!=0){
        if(c==temp)
        cout<<"right\n";
        else
        cout<<"wrong\n";
    }
}
return 0;
}

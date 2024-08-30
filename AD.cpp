#include<iostream>
using namespace std;
int main()
{   string num;
    cin>>num;
    int i =(num.length()-1);
    
    while(i>=0){
        cout<<num[i];
        i--;
    }
    return 0;
}

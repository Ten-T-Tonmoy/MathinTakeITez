#include<bits/stdc++.h>
using namespace std;

int main()
{   string hajj;
    int n=0;
    while(cin>>hajj){
        if(hajj[0]=='*')
        break;

        else if(hajj=="Hajj")
        cout<<"Case "<<++n<<": Hajj-e-Akbar\n";

        else
        cout<<"Case "<<++n<<": Hajj-e-Asghar\n";

    }
    return 0;
}

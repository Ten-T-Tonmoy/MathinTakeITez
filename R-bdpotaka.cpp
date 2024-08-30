#include<bits/stdc++.h>
using namespace std;

const double PI =3.14159;
int main()
{
    int t;
    cin>>t;

    while(t--) {
        double l;
        cin>>l;
        double red= PI*l*l/25;

       cout<<fixed<<setprecision(2)<<red<<" "<<3*l*l/5-red;
    }

    return 0;
}

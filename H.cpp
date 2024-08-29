#include <bits/stdc++.h>

using namespace std;

int main(){
    long long ar[5];
    for (int i=0; i<5; i++) {
        cin>>ar[i];
    }
    sort(ar,ar+5);
    long long a=ar[0]+ar[1]+ar[2]+ar[3];
    long long b=ar[1]+ar[2]+ar[3]+ar[4];
    cout<<a<<" "<<b;
    
    
    return 0;
}

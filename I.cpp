#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int cont=0;
    sort(arr,arr+(n));
    for (int i=0; i<n; i++) {
        if(arr[i]==arr[n-1])
        cont++;
    }
    cout<<cont;
    return 0;
}

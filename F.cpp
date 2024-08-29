#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    double pos=0.0000;
    double neg=0.0000;
    double zero=0.0000;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else {
            zero++;
        }
    }
    float tot=pos+neg+zero;
    cout<<fixed<<setprecision(6)<<pos/tot<<endl;
    cout<<setprecision(6)<<neg/tot<<endl;
    cout<<setprecision(6)<<zero/tot;
    return 0;
}

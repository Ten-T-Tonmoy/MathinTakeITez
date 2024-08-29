#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin>>t;
    string t1={t[0],t[1]};
    string t2={t[3],t[4]};
    string t3={t[6],t[7]};
    if(stoi(t1)==12 && t[8]=='A'){
        cout<<"00"<<':'<<t2<<':'<<t3;
    }
    else{
    if(t[8]=='P' && stoi(t1)!=12){
        cout<<(12+stoi(t1))<<':'<<t2<<':'<<t3;
    }
    else
    cout<<t1<<':'<<t2<<':'<<t3;
    }
    return 0;
}

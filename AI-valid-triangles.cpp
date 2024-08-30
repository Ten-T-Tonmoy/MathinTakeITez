#include<iostream>
using namespace std;
int main()
{   int n;
    int ar[3];
    cin>>n;
    int a,b,c;
    while (n--)
    {   
        cin>>ar[0]>>ar[1]>>ar[2];
        a=ar[0];
        b=ar[1];
        c=ar[2];
       if(a==0 || b==0 || c==0 || b+c+a!=180)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
    }
    
    return 0;
}

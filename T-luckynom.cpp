#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int cont = 0;
    while (n!=0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            cont += 1;
        }
        n /= 10;
    }
    if (cont == 4 || cont == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

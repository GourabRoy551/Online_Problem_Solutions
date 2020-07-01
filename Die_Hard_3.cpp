#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        int max=a>b?a:b;
        int g = gcd(a,b);

        if(c<max)
        {
            if(c%g==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

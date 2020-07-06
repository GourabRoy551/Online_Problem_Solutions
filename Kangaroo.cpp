#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int a = a1 - a2;
    int b = b2 - b1;

    if(b!=0 && a%b==0 && a/b>0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

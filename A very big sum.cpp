#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n=0,s=0,x=0;
    cin >> n;
    for(long long i=0;i<n;i++)
    {
        cin >>x;
        s+=x;
    }
    cout << s << endl;
    return 0;
}

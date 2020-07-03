#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=0,x=0,y=0,a[100][100];
    cin >> n;

    for(unsigned long long i=0;i<n;i++)
    {
        for(unsigned long long j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(i=j)
                x+=a[i][j];
            if(i+j==n-1)
                y+=a[i][j];
        }
    }
    cout << abs(y-x) << endl;
    return 0;
}

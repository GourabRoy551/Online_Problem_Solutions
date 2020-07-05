#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin >> a[i];

    int minV=a[0],maxV=a[0],sum=a[0];

    for(int i=1;i<5;i++)
    {
        minV = min(minV, a[i]);
        maxV = max(maxV, a[i]);

        sum+=a[i];
    }
    cout << sum-maxV << " " << sum-minV << endl;

    return 0;
}

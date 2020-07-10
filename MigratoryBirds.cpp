#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>vec(5,0);

    int t;

    while(n-->0)
    {
        cin >> t;
        ++vec[t-1];
    }

    t=0;
    for(int i=1;i<5;i++)
    {
        if(vec[i]>vec[t])
            t=i;
    }

    cout << t+1 << endl;
    return 0;
}

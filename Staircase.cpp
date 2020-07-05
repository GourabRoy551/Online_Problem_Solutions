#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(j==0)
            {
                for(int t=0; t<n-i; t++)
                {
                    cout << " ";
                }
            }
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}

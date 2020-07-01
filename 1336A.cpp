#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ent;
    int l = 0;
    cin >> ent;

    l = ent.length();

    for(int i=0;i<l;i++)
    {
        if(ent[i] == 'H' || ent[i] == 'Q' || ent[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a=0, b=0, x, y;
    cin >> t;

    while(t--)
    {
        cin >> x >> y;
        if(x>y)
            b++;
        else if(x<y)
            a++;
    }
    if(b>a)
        cout << "Mishka" << endl;
    else if(b<a)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}

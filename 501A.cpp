#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int w,x,y,z,ans1,ans2;
    w=(3*a)/10;
    x=a-((a/250)*c);
    y=(3*b)/10;
    z=b-((b/250)*d);

    ans1 = max(w,x);
    ans2 = max(y,z);

    if(ans1>ans2)
        cout << "Misha" << endl;
    else if(ans1<ans2)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;

    return 0;
}

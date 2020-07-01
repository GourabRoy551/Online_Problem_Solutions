#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int x,y,z,k=0,i;

    i=min(a,min(b,c));
    i=n/i;

    for(x=i; x>=0; x--)
    {
        for(y=0; y<=i; y++)
        {
            z=abs((n-(a*x+b*y))/c);
            if((a*x+b*y+c*z)==n)
            {
                k=max(k,x+y+z);
            }
        }
    }
    cout<<k<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n=0,x=0,positive=0,negative=0,zero=0;
    cin>>n;
    for(unsigned long long i=0; i<n; i++)
    {
        cin>>x;
        if(x>0)
        {
            positive++;
        }
        else if(x<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    cout<<fixed<<setprecision(6)<<positive/n<<"\n"<<negative/n<<"\n"<<zero/n;
    return 0;
}

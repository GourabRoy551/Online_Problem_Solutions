#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n=0,k=0,temp=0,c=0;
    cin>>n>>k;

    vector <unsigned long long> v;
    for(unsigned long long i=0; i<n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for(unsigned long long i=0; i<v.size(); i++)
    {
        for(unsigned long long j=i+1; j<v.size(); j++)
        {
            if((v[i]+v[j])%k==0)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

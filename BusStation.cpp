#include<bits/stdc++.h>
using namespace std;

int main()
{
    int max=0,sum=0,n;
    cin>>n;
    int values[100000];

    for (int i = 0; i < n; i++ )
    {
         cin>>values[i];
         sum = sum + values[i];
        if ( values[i] > max )
            max = values[i];
    }

    int p=0,j,count=0;

    vector<int>final;

    for(int i=0;i<n;i++)
    {
        p+=values[i];
        j=0;

        if(p>=max && sum%p == 0)
        {
            int flag = 0;
            while(j<n)
            {
                int g=p;
                while(g!=0)
                {
                    g = g-values[j++];
                    if(g<0)
                        flag=1;
                }
            }
            if(flag == 0)
            {
                final.push_back(p);
                count++;
            }
        }
    }

    sort(final.begin(),final.end());

    for(j=0;j<count;j++)
        cout << final[j] << " " ;

    return 0;
}

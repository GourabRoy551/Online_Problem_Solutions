#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,temp,x=0,count=0;
 cin >> n;

 for(int i=0;i<n;i++)
 {
     cin >> temp;

     if(temp>=x)
     {
         if(temp==x)
            count++;
         else{
            x=temp;
            count=1;
         }
     }
 }
 cout << count << endl;
 return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n;
    int chest=0,bices=0,back=0;

    cin >>  n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
    {
        if(i%3==0)
            chest+=arr[i];
        else if(i%3==1)
            bices+=arr[i];
        else
            back+=arr[i];
    }

    if(chest>bices && chest>back)
    {
        cout << "chest" << endl;
    }
    else if(bices>chest && bices>back)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }

    return 0;
}

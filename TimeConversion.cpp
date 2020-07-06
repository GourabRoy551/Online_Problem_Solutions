#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "";
    cin >> s;

    int len = s.length();
    int hh=0,mm=0,ss=0;

    hh=(s[0]-'0')*10+(s[1]-'0');
    mm=(s[3]-'0')*10+(s[4]-'0');
    ss=(s[6]-'0')*10+(s[7]-'0');

    if(hh<12&&s[8]=='P')
        hh+=12;
    if(hh==12&&s[8]=='A')
        hh=0;

    cout << setfill('0') << setw(2) << hh << ":" << setw(2) << mm << ":" << setw(2)<<ss;
    return 0;
}

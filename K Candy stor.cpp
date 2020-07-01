#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll T[1234][1234];
const int mod = 1e9;
void nCrTable(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            if(i==0 || j==0){
                T[i][j] = 1;
                continue;
            }
            T[i][j] = (T[i-1][j]+T[i][j-1])%mod;
        }
    }
}

ll fun(ll n,ll r){
    return T[n-r][r];
}

int main(){
    nCrTable();
    ll t;
    cin>>t;
    while(t--){
        ll n,r;
        cin>>n>>r;
        cout<<fun(n+r-1,r)<<endl;
    }
    return 0;
}

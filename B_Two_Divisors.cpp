#include<bits/stdc++.h>
#define ll long long
#define out(x) cout<<x<<"\n";
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        ll lc=(a*b)/__gcd(a,b);
        if(lc==b){
            lc = lc*b/a;
        }
        out(lc)
    }
    return 0;
}
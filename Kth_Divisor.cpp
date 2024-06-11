#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k; cin>>n>>k;
    vector<ll> ans;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ans.push_back(i);
            if( i != n/i) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    if(k > ans.size()) cout<<-1<<endl;
    else cout<< ans[k-1] << endl;
    return 0;
}

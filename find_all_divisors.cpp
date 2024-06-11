#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll limit=sqrt(n);
    vector<int> ans;
    for(int i=1;i<=limit;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i != n/i) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    cout<<"Number of divisors is "<<ans.size()<<endl;
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
    return 0;
}

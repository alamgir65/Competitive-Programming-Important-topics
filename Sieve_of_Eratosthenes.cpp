#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sieve(int n){
    bool check[n+2];
    int cnt=0;
    memset(check,false,sizeof(check));
    for(int i=2;i*i<=n;i++){
        if(!check[i]){
            for(int j=i*i;j<=n;j+=i){
                check[j]=true;
            }
        }
    }
    vector<int> prime;
    for(int i=2;i<=n;i++) if(!check[i]) cnt++,prime.push_back(i);
    cout<<"Number of prime : "<<cnt<<endl;
    for(auto x:prime) cout<<x<<" ";
    cout<<'\n';
}
int main(){
    int n; cin>>n;
    sieve(n);
    return 0;
}

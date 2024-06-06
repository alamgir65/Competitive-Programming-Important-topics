#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll b,int p){
    ll res=1;
    while(p>0){
        if(p%2==1){
            res *= b;
            p--;
        }
        else{
            b *= b;
            p/=2;
        }
    }
    return res;
}
int main(){
    int b,p; cin>>b>>p;
    ll res=power(b,p);
    cout << res << endl;
    return 0;
}

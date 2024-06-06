// Problem link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1640&mosmsg=Submission+received+with+ID+29546132
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int primeFact(int n){
    int cnt=0;
    for(int i=2;i*i <= n;i++){
        if(n%i == 0){
            cnt++;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) cnt++;
    return cnt;
}
int main(){
    while(true){
        int t; cin>>t;
        if(t==0) break;
        cout<<t<<" : "<<primeFact(t)<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void primeFact(int n){

    for(int i=2;i*i<=n;i++){
        int cnt=0;
        if(n%i==0){
            while(n%i==0){
                n/=i;
                cnt++;
            }
            cout<<i<<"^"<<cnt<<", ";
        }
    }
    if(n>1) cout<<n<<"^"<<1<<endl;
}
int main(){
    int n; cin>>n;
    primeFact(n);
    return 0;
}

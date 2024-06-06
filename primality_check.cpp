#include<bits/stdc++.h>
#define ll long long
#define print(flag) (flag)? cout<<"YES\n" : cout<<"NO\n";
using namespace std;
// buteforces O(N)
bool check1(int n){
    if(n<2) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
// O(sqrt(N))
bool check2(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
// Better solution than others two 
bool check3(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n; cin>>n;
    print(check1(n))
    print(check2(n))
    print(check3(n))
    return 0;
}

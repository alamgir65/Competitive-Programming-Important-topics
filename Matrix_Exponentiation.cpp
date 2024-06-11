#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define N 101
int M[N][N],I[N][N];
// int n;

void mul(int A[][N],int B[][N],int n){
    int R[N][N];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            R[i][j]=0;
            for(int k=0;k<n;k++){
                R[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j]=R[i][j];
        }
    }
}

void power(int M[][N],int n,int p){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) I[i][j]=1;
            else I[i][j]=0;
        }
    }

    while(p){
        if(p%2==1){
            mul(I,M,n);
            p--;
        }else{
            mul(M,M,n);
            p/=2;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=I[i][j];
        }
    }
}
int main(){
    int n,p; cin>>n>>p;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }
    power(M,n,p);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

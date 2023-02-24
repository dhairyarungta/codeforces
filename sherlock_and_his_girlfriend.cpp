#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for (int i =a;i<b;i++)
#define loop(x,n) for (int x = 0;x<n;++x)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()

using namespace std;

const int M = 1e6;
int primes[M]={0};

void sieve(int n ){
    for (int i = 2;i*i<=n;i++){
        for (int j =i*i;j<=n;j+=i){
            if(j%i==0)
                primes[j]=1;
        }
    }   

}


void precal(){

}

void solve (){
    int n;
    cin>>n;

    if(n==1){
        cout<<1<<"\n";
        cout<<1<<"\n";
        return;
    }

    if(n==2){
        cout<<1<<"\n";
        cout<<1<<" "<<1<<"\n";
        return;

    }
    sieve(n+1);
    cout<<2<<"\n";
    for (int i =2;i<=n+1;i++){
        primes[i]==0?cout<<1:cout<<2;
        if(i!=n+1)cout<<" ";
    }
    cout<<"\n";
}

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    precal();
    int t =1;
    // cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}
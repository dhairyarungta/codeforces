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

void precal(){

}

void solve (){
    int a , b;
    cin>> a>>b;

    int div = gcd(a,b);
    int c = a/div;
    int d = b/div;

    //find prime factors of c,d
    //if prime factors are 2,3,5 then ok otherwise no solution available
    // long long k = c*d;
    int total = 0;
    int k=c;
    while(k%2==0){
        total++;
        k/=2;
    }
    while(k%3==0){
        total++;
        k/=3;
    }

    while(k%5==0){
        total++;
        k/=5;
    }
    if(k!=1){
        cout<<-1<<endl;
        return;

    }

    k = d;
    while(k%2==0){
        total++;
        k/=2;
    }
    while(k%3==0){
        total++;
        k/=3;
    }

    while(k%5==0){
        total++;
        k/=5;
    }


    if(k==1){
        cout<<total<<endl;

    }
    else {
        cout<<-1<<endl;
    }

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
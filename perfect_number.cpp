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
bool checkprefectnum(int n){
    int cur = 0;
    while(n>0){
        cur+=n%10;
        n/=10;
    }
    if(cur==10)return true;
    else return false;
}

void solve (){
    int k;
    cin>>k;
    int count= 0;

    for (int i =1;i<=100000000;i++){
        // cout<<i<<" ";
        if(checkprefectnum(i)){
            count++;
        }
        if(count==k){
            cout<<i<<"\n";
            break;
        }
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
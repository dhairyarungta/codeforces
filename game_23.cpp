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
    int n, m;
    cin>>n>>m;
    
    int k = m/n;
    if(m%n !=0){
        cout<<-1<<"\n";
        return;
    }
        int moves= 0;
    while(k!=1){
        if(k%2==0){
            k/=2;
            moves++;
            }
        else if(k%3==0){
            k/=3;
            moves++;
        }
        else {
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<moves<<"\n";


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
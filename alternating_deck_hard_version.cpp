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

void solve(){
    ll n;
    cin>>n;
    ll wa=1, ba=0, wb=0, bb=0;
    ll step  = 2;
    ll next ;
    for (int i = 2;i<=n;){
        if(step%4==2 || step%4 ==3){
            if(i+step-1<=n){
                next = i+step;
            }
            else next = n+1;
            wb += (next-i)/2;
            bb+=(next-i+1)/2;

            i = next;
            step++;
        }
        else{
            if(i+step-1<=n){
                next = i+step;
            }
            else next = n+1;

            wa +=(next-i+1)/2;
            ba +=(next-i)/2;
            i = next;
            step++;
        }
    }
    cout<<wa<<" "<<ba<<" "<<wb<<" "<<bb<<"\n";

}

// void solve (){
//     ll n;
//     cin>>n;
//     ll wa=1, ba=0, wb=0, bb=0;


//     ll count = n-1;
//     ll step = 2;


//     while(count>0){
//       if(step%4==2 || step%4 ==3){
//         //bob
//         count-=step;

//       }  
//       else{

//       }
//     }
// }

int main(){
    fast_io;
    cout<<fixed;
    cout<< setprecision(10);
    precal();
    int t =1;
    cin>> t ;
    for (int i =1;i<=t;i++){
        // cout<< "Case #"<<i<<": ";
        solve();
    }

    return 0;

}
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
    int n ;
    cin>>n;
    vector<int> a(n);
    fr(i,0,n)cin>>a[i];

    int left = 0, right = n-1;
    int alice= 0, bob=0;
    int t =0;
    int tl = 0,tr=0;
    while(left<right){
        // int curLeft= a[left];
        // int curRight = a[right];
        
        tl++;tr++;
        a[left]--;
        a[right]--;
        if(a[left]==0){
            left++;
            alice++;
            tl=0;
        }
        if(a[right]==0)
        {right--;
        bob++;
        tr=0;
        }
    }
    if(alice+bob==n){
        ;
    }
    else if(right==left && tl==tr){
        alice++;
    }
    else{
        if(tl>tr)alice++;
        else bob++;
    }
    cout<<alice<<" "<<bob<<"\n";
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
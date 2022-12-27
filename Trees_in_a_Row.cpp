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
    int n , k;
    cin>>n>>k;
    vector<int>a(n);
    fr(i,0,n) cin>>a[i];

    int minChanges =INT_MAX;
    int curCount = 0;
    int a1;

    for (int i =1;i<=1000;i++){
        curCount=0;
        for (int j =0;j<n;j++){
        int tempHeight = i+((j)*k);
        if(tempHeight!=a[j]){
            curCount++;
        }
        }
        if(curCount<minChanges){
            a1 =i;
            minChanges=curCount;
        }
    }
    cout<<minChanges<<"\n";
    int temp=a1;
    for (int i =0;i<n;i++){
        if(temp>a[i]){
            cout<<"+"<<" "<<i+1<<" "<<abs(temp-a[i])<<"\n";
        }
        else if(temp<a[i]){
            cout<<"-"<<" "<<i+1<<" "<<abs(temp-a[i])<<"\n";
        }

        temp+=k;
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
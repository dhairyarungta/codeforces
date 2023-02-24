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
    int n;
    cin>>n;
    vector<int> x(n);
    for (auto &i :x)cin>>i;
    vector<int> y(n);
    for (auto &i :y)cin>>i;


    vector<int> dif(n);
    for (int i =0;i<n;i++){
        dif[i]= y[i]-x[i];
    }

    sort(all(dif));

    int i =0,j=n-1;
    int count = 0;

    while(i<j){
        if(dif[i]+dif[j]<0){
            i++;
        }
        else {
            count++;
            i++;
            j--;
            
        }
    }

    cout<<count<<"\n";
}

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
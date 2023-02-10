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
    int n ,m;
    cin>>n>>m;
    vector<vector<char>>vec(n);
    // easier to take input as vector<string> vec(n);

    for (int i =0;i<n;i++){
        for (int j = 0;j<m;j++){
            char temp;
            cin>>temp;
            vec[i].push_back(temp);
        }
    }
    int numchanges = 0;
    for(int i =0;i<m-1;i++){
        if(vec[n-1][i]!='R'){
            numchanges++;
        }
        
    }
    for (int i =0;i<n-1;i++){
        if(vec[i][m-1]!='D')
        numchanges++;
    }
    cout<<numchanges<<"\n";


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
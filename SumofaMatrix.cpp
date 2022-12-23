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
    int r , c;
    cin>> r>>c;
    vector<vector<int> >a(r),b(r);
    for(int i =0;i<r;i++){
        for (int j =0;j<c;j++){
            int num ;
            cin>> num;
            a[i].push_back(num);
        }
    }
    for(int i =0;i<r;i++){
        for (int j =0;j<c;j++){
            int num ;
            cin>> num;
            b[i].push_back(num);
        }
    }

    for(int i =0;i<r;i++){
        for (int j =0;j<c;j++){
            cout<< a[i][j]+b[i][j]<<" ";
        }
        cout << "\n";
    }






}

void solve (){

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
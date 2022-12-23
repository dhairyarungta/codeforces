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
int calCombinations(int n , int r, int **arr){
    if (n==r || r==0 || n==0)
        return 1;

    if (arr[n][r]!=-1)
        return arr[n][r];

    arr[n][r]=calCombinations(n-1,r,arr)+ calCombinations(n-1,r-1,arr);
    return arr[n][r];
}
void solve (){
    int  n , r;
    cin>> n>>r;
    int **arr = new int*[n+1];
    for (int i =0;i<=n;i++){
        arr[i]= new int[r+1];

    }
    for (int i =0;i<=n;i++)
        for (int j = 0;j<=r;j++){
            arr[i][j]=-1;
        }
    cout <<calCombinations(n,r, arr)<<'\n';
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
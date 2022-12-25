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
    vector<int> ans;

    int n;
    cin>> n;
    int count =0;
    int p =10;
    int j =0;
    while(true){
        int temp = n%p;
        if(temp-j!=0){
        ans.push_back(temp-j);
        j = temp;
        count++;
        }
        if(temp==n)
            break;

        p*=10;

    }
    cout<<count<<"\n";
    for(int i =0;i<count;i++)cout<<ans[i]<<" ";
    cout<<"\n";
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
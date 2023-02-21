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
    int n,k;
    cin>>n>>k;
    vector<int> len(n);
    for (auto &i:len){
        string temp ;
        cin>>temp;
        i = temp.size();
    }
    sort(len.begin(),len.end());
    string password="";
    cin>>password;
    int passlen = password.size();
    
    auto iter1 =lower_bound(len.begin(),len.end(),passlen);
    auto iter2 = prev(upper_bound(len.begin(),len.end(),passlen));

    // cout<<*iter1<<" "<<*iter2<<endl;
    int mintime = (iter1-len.begin()+1)+((iter1-len.begin())/k)*5;
    int maxtime = (iter2-len.begin()+1)+((iter2-len.begin())/k)*5;
    cout<<mintime<<" "<<maxtime<<"\n"; 
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
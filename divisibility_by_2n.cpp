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

int poweroftwo(int n){
    int ans = 0;
    while(n!=0){
        if(n%2==0){
            ans++;
            n/=2;
        }
        else break;
    }
    return ans;
}

int bitpowertwo (int n){
    int temp = n&(~(n-1));
    if(temp == 0) return 0;
    bool check = false;
    int i =1;
    for (;i<32;i++){
        if((temp>>i) &1){
            check = true;
            break;
        }
    }

    if(check ==true)    
        return i;
    else 
        return 0;


}


void solve (){
    int n;
    cin>>n;
    vector<int> a(n+1);
    // for (auto &i:a)cin>>i;
    for(int i =1;i<=n;i++)cin>>a[i];
    int firstval = 0;
    vector<int>b;
    for (int i =1;i<=n;i++){
        firstval+=bitpowertwo(a[i]);
        // cout<<firstval<<" ";
        b.push_back(bitpowertwo(i));
    }

    sort(all(b),greater<int>());
    // for(auto i:b)cout<<i<<" ";
    int count = 0;
    for (auto i:b ){
        if(firstval>=n)break;

        firstval+=i;
        count++;
    }

    if(firstval<n)count=-1;
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
    // cout<<bitpowertwo(16)<<" "<<bitpowertwo(7);

    return 0;

}
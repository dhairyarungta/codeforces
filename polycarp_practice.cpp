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
    ll n, k;
    cin>>n>>k;
    vector<pair<ll,ll>>a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i].first;
        a[i].second= i;
    }

    sort(all(a),greater<pair<ll,ll>>());
    set<ll>s;
    ll total = 0;
    for (int i =0;i<k;i++){
        total +=a[i].first;
        s.insert(a[i].second);
    }

    vector<ll>ans;

    ll prevelement = 0;
    if(s.size()==1){
        cout<<total<<"\n";
        cout<<n<<"\n";
        return;
    }
    for (auto it = s.begin();it!=s.end();it++){
        if(next(it,1)==s.end()){
            ans.push_back(n-1-*(prev(it)));

        }
        else if(it ==s.begin()){
            ans.push_back(*it+1);
        }
        else {
            ans.push_back(*it-*(prev(it)));
        }
    }
    
    cout<<total<<"\n";
    for (auto i:ans)cout<<i<<" ";
    cout<<"\n";

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
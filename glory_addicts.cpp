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
    int n;
    cin>>n;

    vector<int>a(n),frost , fire;
    for(auto &i:a)cin>>i;
    for (int i =0;i<n;i++){
        int temp ;
        cin>>temp;
        if(a[i]==0)fire.push_back(temp);
        else frost.push_back(temp);

    }
    sort(all(frost)); sort(all(fire));

     ll ans = 0;
    if(fire.size()==frost.size())
        ans-=min(fire.front(),frost.front());

    while(fire.size()>0 && frost.size()>0){
        ans+=2*(ll)(fire.back()+frost.back());
        fire.pop_back();
        frost.pop_back();

    }
    for (auto i:frost)ans+=i;
    for (auto i :fire)ans+=i;
    cout<<ans<<"\n";

}

// void solve (){
//     int n;
//     cin>>n;
//     int numfire= 0,numfrost = 0;

//     vector<int>a(n),fire,frost;

//     for (auto &i:a){
//         cin>>i;
//     }
//     for (int i =0;i<n;i++){
//         int temp ;
//         cin>>temp;
//         if(a[i]==0)fire.push_back(temp);
//         else frost.push_back(temp);
//     }
//     sort(all(fire));
//     sort(all(frost));

//     int i  =fire.size()-1;
//     int j = frost.size()-1;
//     // cout<<i<<" "<<j<<endl;
//     ll ans = 0;
//     while(i>=0 || j>=0){
//         int val1 = i>=0?fire[i]:-99;
//         int val2 = j>=0?frost[j]:-99;

        
//         if(val1>=val2){
//             cout<<val1<<" ";
//             ans+=val1;

//             if(j>=0)ans+=val1;
//             i--;
//         }  

//         else {
//             cout<<val2<<" ";
//             ans+=val2;
//             if(i>=0)ans+=val2;
//             j--;
//         }      
//     }

//     cout<<ans<<"\n";
    
// }

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
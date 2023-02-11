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
void elegantsolve(){
    int n;
    cin>>n;
    for (int i =0;i<2*n+1;i++){
        for (int j=0;j<abs(n-i);j++){
            cout<<"  ";
        }
        int maxrowentry = min(i,abs(2*n-i));
        for (int j =0;j<2*maxrowentry+1;j++){
            cout<<maxrowentry-abs(maxrowentry-j);
           
            if(j==2*maxrowentry)
                cout<<"\n";
            else 
                cout<<" ";
        }
    }
}
void solve (){
    int n;
    cin>>n;
    for(int i=0;i<=2*n;i++){
        if(i<=n){
            for(int j = 0;j<n-i;j++)
                cout<<"  ";

            for (int j=0;j<=i;j++){
                if(i!=0)
                cout<<j<<" ";
                else 
                cout<<j;
            }
            for (int j =i-1;j>=0;j--){
                if(j!=0)
                cout<<j<<" ";
                else 
                cout<<j;
            }

            cout<<"\n";
        }
        else {
            for (int j = 0;j<i-n;j++){
                cout<<"  ";
            }

            for (int j =0;j<=2*n-i;j++){
                if(2*n-i !=0)
                cout<<j<<" ";
                else 
                cout<<j;

            }
            for(int j =2*n-i-1;j>=0;j--){
                if(j!=0)
                cout<<j<<" ";
                else 
                cout<<j;
            }
            cout<<"\n";

        }
        

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
        // solve();
        elegantsolve();
    }

    return 0;

}
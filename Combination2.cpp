#include <bits/stdc++.h>
using namespace std;

void combination_first(int n , int r){
    int ay[n+1][r+1];

    for(int j=1;j<=r;j++)ay[0][j]=0;
    for (int i =0;i<=n;i++) ay[i][0]=1;
    
    for (int i =1;i<=n;i++){
        for (int j =1;j<=r;j++){
            if (i==j)
                ay[i][j]=1;
            
            else if(i<j)
                ay[i][j]=0;

            else 
                ay[i][j]= ay[i-1][j-1]+ay[i-1][j];
            
        }
    }
    // for (int i =0;i<=n;i++){
    //     for (int j =0;j<=r;j++){
    //         cout<< ay[i][j]<<" ";
    //     }
    //     cout<<endl;
    //     }
    cout<< ay[n][r]<<"\n";

}

void combination_second(int n , int r){
    //space optimised version of combination_first

    r = min(r,n-r);
    int arr[r+1];
    for (int i =0;i<=r;i++)arr[i]=0;
    arr[0]=1;

    for (int i =1;i<=n;i++){
        for (int j =min(i,r);j>=0;j--){
            arr[j]=arr[j-1]+arr[j];
        }
    }

    cout<< arr[r];
}
int main(){
    int n , r;
    cin>> n>> r;
    combination_second(n,r);
    return 0;
}
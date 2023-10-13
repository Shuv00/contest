#include<bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main(){
    fast;
    /**/int t;
    cin>>t;
   for(int test=1;test<=t;test++){
    ll n ;
   cin >> n;
   ll a[n], cou= 0, ans=0;
   ll sum=1;
   for(int i=0;i<n;i++){
    cin >> a[i];
   }
   for(int i=0;i<n;i++){
    if(a[i]==a[i+1]){
        sum++;
    }
    else {
       cou =(sum*(sum+1)) /2;
      // cout << cou << endl;
       ans  = ans+ cou;
        //cout << ans << endl;
       sum=1;
    }
   }
   ll ns  = (n*(n+1))/2;
   //cout << ns - ans << endl;
   cout<<"Case "<<test<<": "<<ns-ans<<endl;

   }

}



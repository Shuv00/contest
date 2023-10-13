#include<bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
bool sortbysecond(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
void solve()
{
    string s;
    cin >> s;
ll     n = s.size();
    ll count_w=0, sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='W'){
            count_w++;
        }
        else{
            sum+=s[i]-'0';
        }
    }
    if(n<7){
        cout << n/6<<"." << n%6 << " Over ";
    }
    else{
        cout << n/6<<"." << n%6 << " Overs ";
    }
    if(sum>1){
        cout<<sum<<" Runs " ;
    }
    else {
        cout<<sum<<" Run " ;
    }
    if(count_w>1){
        cout <<count_w<<" Wickets.";

    }
    else {
        cout <<count_w<<" Wicket.";
    }
    cout << endl;


}



int main(){
    fast;
    /**/int t;
    cin>>t;
    while(t--)
       solve();

}


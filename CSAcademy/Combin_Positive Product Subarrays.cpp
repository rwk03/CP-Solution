#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

ll n,x,cnt,ans;
vector < ll > vec;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(x == 0){
			vec.pb(cnt);
			cnt = 0;
		}
		else cnt++;
	}
	vec.pb(cnt);
	for(int i=0;i<vec.size();i++) ans += vec[i]*(vec[i]+1)/2;
	cout<<ans<<endl;
}

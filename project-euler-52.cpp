#include <bits/stdc++.h>
//<------------PB-DS-------------->
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//<------------------------------->
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define in(n) cin>>n
#define vc vector
#define vci vector<int>
#define vcl vector<long int>
#define vcll vector<long long int>
#define fs first
#define sec second
#define pq priority_queue
#define lb lower_bound
#define ub upper_bound
#define pii pair<int,int>
#define pll pair<ll,ll> 
#define pls pair<ll,string>
#define psl pair<string,ll>
#define plc pair<ll,char>
#define pcl pair<char,ll>
#define pss pair<string,string>
#define all(v) v.begin(),v.end()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define MOD 1000000007
#define PI 3.14159265359
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int flag = 0;
	ll ans = -1;
	rep(i,1,1000000)
	{
		flag = 1;
		int arr[10]={0};
		int temp = i;
		while(temp)
		{
			++arr[temp%10];
			temp/=10;
		}
		rep(j,2,7)
		{
			temp = j*i;
			int mul[10]={0};
			while(temp)
			{
				++mul[temp%10];
				temp/=10;
			}
			rep(k,0,10)
			{
				if(arr[k]!=mul[k])
				{
					flag=0;
					break;
				}
			}
			if(flag==0)
			break;
		}
		if(flag==1)
		{ans = i;break;}
		
	}
	cout<<ans<<endl;
}

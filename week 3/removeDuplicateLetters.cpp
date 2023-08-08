#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

void solve() {
	string s;
	cin >> s;

	map<char, int> lstIdx;
	map<char, bool> visited;
	
	for(int i = 0; i < s.length(); i++) 
		lstIdx[s[i]] = i;
	// for(auto i : lstIdx) {
	// 	cout << i.first << " " << i.second << endl;
	// }
	
	string ans = "";
	for(int i= 0; i < s.length(); i++) {
		if(visited[s[i]] == true)
			continue;
		
		while(!ans.empty() && ans.back() > s[i] && lstIdx[ans.back()] > i) {
			visited[ans.back()] = false;
			ans.pop_back();
		}
		ans.push_back(s[i]);
		visited[s[i]] = true;
	}
	
	
	
	cout << ans;
}
 
int32_t main()
{
    solve2();
    return 0;
}

// [1,2,3,6,2,3,4,7,8]
// 3
// [1,2,3,4,5]
// 4
// [1,2,3,1,2,3,1,2,3]
// 3
// [12,2,46,54,47,13,55,3]
// 2
// [2,3,46,47,12,13,54,55]
// 3
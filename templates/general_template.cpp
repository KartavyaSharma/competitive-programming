#include <bits/stdc++.h>
#include <chrono>

using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long long int ulli;
typedef long double ld;

#define ar array
#define endl "\n"

#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define S second
#define F first
#define Ima INT_MAX
#define Imi INT_MIN

#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define pii pair<int,int>
#define vi vector<int>
#define vl vector<long>
#define vii vector<pii>
#define vs vector<string>

#define mi map<int,int>
#define mii map<pii,int>

#define f(i,a,b) for(ll i=a; i<b; i++)
#define f0(i,a) for(ll i=0; i<a; i++)
#define rf(i,a,b) for(ll i=b; i>=a; i--)
#define rf0(i,a) for(ll i=a; i>=0; i--)
#define fa(a) for(auto x:a) cout << x << ' ';
#define tr(it, a) for(auto it=a.begin(); it!=a.end(); it++)
#define it(x,a) for(auto x:a)
#define wt(t) while(t--)

#define possibilities(x) while(next_permutation(all(x)))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define isthere(v, e) binary_search(all(v), e)

#define PI 3.1415926535897932384626

template <typename T> ll search(T *param, ll size, T value) {
	int idx = 0;
	for(int jump = size/2; jump >= 1; jump /= 2) {
		while(idx+jump < size && param[idx+jump] <= value) idx += jump;
	}
	if(param[idx] == value) return idx;
	return -1;
}


int elements(int *param, ll size, ll value) {
	auto r = equal_range(param, param+size, value);
	return r.S-r.F;
}

// #define kickstart true

// #define usaco true
// #define id "tttt"

void setIO(string name = "") {
	FAST;
	if(sz(name)) {
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}

const int mxN = 1e6 + 14000;
const ll mod = 1e9+7;

ll arr[mxN];
ll n;

void solve() {
	
}

int main() {

	#ifdef kart_local
		auto start = std::chrono::steady_clock::now();
	#endif

	#ifdef usaco
		setIO(id);
		solve();
	#elif defined(kickstart)
		FAST;
		int t, i = 1;
		cin >> t;
		wt(t) {
			cout << "Case #" << i << ": ";
			solve();
			i++;
		}
	#else
		FAST;
		int t = 1; 
		//cin >> t;
		f0(i,t) solve();
	#endif

	#ifdef kart_local
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed = end-start;
		cout << endl << "+++++++++++++" << endl << "Elapsed time: " << elapsed.count() << " seconds";
	#endif
}

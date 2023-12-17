#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
// #define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<class T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> int bitcount(T s) { return __builtin_popcountll(s);}
template<class T> int getbit(T s, int i) { return (s >> i) & 1ll; }

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


map<string, int> mp;

int isNumber(int i, string s){
	vector<int> len = {3, 4, 5};

	for(int l : len){
		string cur = s.substr(i, min(l, sz(s) - 1));
		if(mp.count(cur)){
			return mp[cur];
		}
	}	

	return 0;
}

vector<int> getNumbers(string s){
	vector<int> numbers;

	for(int i = 0; i < sz(s); i++){
		int x = isNumber(i, s);

		if(isdigit(s[i])){
			numbers.push_back(s[i] - '0');
		}else if(x){
			numbers.pb(x);
		}
	}

	return numbers;
}

void solve(){
	string line;
	int res = 0;

	mp["one"] = 1;
	mp["two"] = 2;
	mp["three"] = 3;
	mp["four"] = 4;
	mp["five"] = 5;
	mp["six"] = 6;
	mp["seven"] = 7;
	mp["eight"] = 8;
	mp["nine"] = 9;

	while(getline(cin, line)){
		vector<int> numbers = getNumbers(line);
		res += numbers[0] * 10 + numbers.back();
	}
	cout << res << endl;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("Error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1; 
	// cin >> t;
	
	while(t--)
		solve();
}

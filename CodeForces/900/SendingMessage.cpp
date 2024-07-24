#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ;
#define debug(...) ;
#endif

void solve() {
    
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int last = 0;
    
    for (int i = 0; i < n; i++) {
        long long keepOn = 1LL * a * (v[i] - last);
        long long turnOffAndOn = b;
        long long required = min(keepOn, turnOffAndOn);
        
        f -= required;
        last = v[i];
        
        if (f <= 0) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		debug(Testcase, tc);
		solve();
		dbg();
	}
	
	return 0;
}
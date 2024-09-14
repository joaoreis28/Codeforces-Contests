#include <algorithm>
    #include <iostream>
    #include <set>
    #include <vector>
    using namespace std;
     
    int main(){
    	int t;
    	cin >> t;
    	while(t--){
    		int n, m, q;
    		cin >> n >> m >> q;
    		set<int> b;
            vector<int> a(q);
    		
    		for(int i=0; i<m; i++) {
                int val;
                cin >> val;
                b.insert(val);
            }
     
    		for(int i=0; i<q; i++) {
                cin >> a[i];
            }
     
            for (auto ai: a) {
                auto it_upper = b.upper_bound(ai);
                if (it_upper != b.end() && it_upper != b.begin()) {
                    cout << (*it_upper - *(--it_upper))/2 << "\n";
                    continue;
                }
                if (it_upper == b.end()) {
                    cout << n - *(--it_upper) << "\n";
                    continue;
                }
                cout << *it_upper - 1 << "\n";
            }
    	}
        return 0;
    }
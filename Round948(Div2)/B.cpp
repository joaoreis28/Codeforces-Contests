#include <bits/stdc++.h>
using namespace std;
 

 
void solve() {
    int x;
    cin >> x;
    vector<int> a;
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            a.push_back(0);
        } 
        else 
        {
            if ((x - 1) / 2 % 2 == 0)
            {
                a.push_back(1);
                x -= 1;
            }
            else
            {
                a.push_back(-1);
                x += 1;
            }
        }
        x /= 2;
        }

    cout << a.size() << '\n';

    for (int i = 0; i < int(a.size()); i++)
        cout << a[i] << " " ;
    
    cout << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--)
    {
        solve();
    }
        
    
}
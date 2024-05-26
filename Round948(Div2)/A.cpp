#include <bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        if((m > n) )
            cout << " NO" << endl;
        else
        {
            if((n - m) & 1)
                cout << " NO" << endl;
            else
                cout << " YES" << endl;

        }
        
    }

    return 0;
}
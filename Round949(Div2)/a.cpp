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
       int l, r, resp = 0;
       cin >> l >> r;

       int potencia = 1;
       while( potencia <= r)
       {
            potencia <<= 1;
            resp++;
       }
       

       
       cout << resp - 1 << endl;

    }



   

    return 0;
}

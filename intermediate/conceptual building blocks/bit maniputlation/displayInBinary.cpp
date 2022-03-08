#include <bits/stdc++.h>
using namespace std;

// display in binary form

void solve()
{
   int x;
   cin >> x;
   int n2 = (x & (0x55555555));
   // cin>>n2;
   
   
   bitset<12> b(x);
   cout << b << endl;

   bitset<12> b2(n2);
   cout << b2 << endl;
   
   
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   solve();

   return 0;
}

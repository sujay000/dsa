#include <bits/stdc++.h>
using namespace std;

// display in binary form

void solve()
{
   int x;
   cin >> x;
   int n2;
   cin>>n2;
   
   
   bitset<32> b(x);
   cout << b << endl;

   bitset<32> b2(n2);
   cout << b2 << endl;
   
   
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   solve();

   return 0;
}

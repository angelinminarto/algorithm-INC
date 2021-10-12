#include <bits/stdc++.h>

using namespace std;

int main()
{
  //input
  int a;
  int k;
  cin >> a >> k;

  //input array
  int n[a]; //n sepanjang a
  for(int i = 0; i < a; i++)
  {
    cin >> n[i];
  }

  //algoritma
  int jumlah = 0; //variabel utk nampung hasil jumlahnya hrs sama dg 0
  for(int i = 0; i < a; i++)
  {
    jumlah = jumlah + n[i];
  }

  //membandingkan
if (jumlah%2 == 0)
{
  cout << "Preston\n";
} else if (jumlah%2 != 0)
{
  cout << "John\n";
}
  return 0;
}

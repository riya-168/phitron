#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x = 10;
   int *p = &x;
   p = &x;
   *p = x;
   cout<<p<<endl;
   cout << *p << endl;
   cout << &x<< endl;
   return 0;
}
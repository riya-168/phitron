#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin >> n;
   vector<long long> arr(n);
   for(long long i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   vector <long long> PrefixSum(n);
   PrefixSum[0] = arr[0];
   for(long long i=1;i<n;i++)
   {
      PrefixSum[i] = PrefixSum[i-1] + arr[i];
   }
   reverse (PrefixSum.begin(),PrefixSum.end());
   for(long long i=0;i<n;i++)
   {
      cout<< PrefixSum[i] << " ";
   }
   return 0;
}
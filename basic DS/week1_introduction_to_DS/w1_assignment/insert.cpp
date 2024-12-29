#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n1,n2;
   cin >> n1;
   vector <int> arr1(n1);
   for(int i=0;i<n1;i++)
   {
      cin >> arr1[i];
   }
   cin >> n2;
   vector <int> arr2(n2);
   for(int i=0;i<n2;i++)
   {
      cin >> arr2[i];
   }
   int index;
   cin>>index;
   arr1.insert(arr1.begin()+index,arr2.begin(),arr2.end());
   for(int i=0;i<arr1.size();i++)
   {
      cout<< arr1[i]<<" ";
   }
   return 0;
}
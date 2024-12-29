#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   vector<int> arr(n);
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   int flag =0;
   for(int i=0;i<n-1;i++)
   {
    int l=i+1,r=n-1;
    while (l<=r)
    {
        int mid =(l+r)/2;
        if(arr[mid]==arr[i])
        {
            flag =1;
            break;
        }
        else if(arr[mid]<arr[i])
        {
            l = mid +1;
        }
        else{
            r = mid -1;
        }
    }
    if(flag ==1){
        break;
    }
    
   }
    if(flag == 1)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
   return 0;
}
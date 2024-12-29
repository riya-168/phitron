#include<bits/stdc++.h>
using namespace std;
long long* sort_it(long long n)
    {
        long long* arr = new long long[n];
        for(int i=0;i<n;i++)
        {
        cin >> arr[i];
        }
        sort(arr,arr+n,greater<long long>());
        return arr;
    }
int main()
{
   
     long long n;
     cin >> n;
    long long* ar =sort_it(n);
    for(int i=0;i<n;i++)
    {
        cout<< ar[i] <<" ";
    }
    return 0;
}
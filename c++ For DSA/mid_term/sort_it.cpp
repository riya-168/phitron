#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin>> n;
   long long* arr = new long long[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr,arr+n,greater<long long>());
    for(int i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}
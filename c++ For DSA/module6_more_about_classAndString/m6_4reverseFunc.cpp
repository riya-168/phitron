#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int a[n];
    //int reverse
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    reverse(a,a+n);

       for(int i=0;i<n;i++)
    {
        cout << a[i] <<" ";
    }
    // string reverse
    string s;
    cin >> s;
    reverse (s.begin(),s.end());
    cout << s << " ";

    return 0;
}
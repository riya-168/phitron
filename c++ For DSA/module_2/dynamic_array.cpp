#include<bits/stdc++.h>
using namespace std;
int main()
{
    //2
    int n;
    cin>>n;
    int *p = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>> p[i];
    }for(int i=0;i<n;i++)
    {
        cout << p[i]<< " ";
    }

    return 0;
}
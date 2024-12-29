#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v;
    // cout<<v.size() << endl;
    // vector <int> v(5,1);
    //vector copy and set
    // vector <int> v2 (v);
    int a[5] ={1,2,3,4,5};
    vector <int> v(a,a+5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i] << " ";
    }
   return 0;
}
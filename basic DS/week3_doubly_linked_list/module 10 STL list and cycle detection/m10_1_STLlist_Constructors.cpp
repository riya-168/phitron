#include<bits/stdc++.h>
using namespace std;
int main()
{
//    list <int> l(10,3);
//  1.  for(auto it =l.begin();it != l.end();it++)
//    {
//         cout << *it << endl;
//    }
    //2. for(int val : l)
    // {
    //     cout << val <<endl;
    // }
    list <int> l = {1,2,3,4,5};
    // list <int> l2(l);// copy kore rakha
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }
    //copying array in the list
    // int a[] ={10,20,30};
    // list <int> l2(a,a+3);
    // for(int val : l2)
    // {
    //     cout << val << endl;
    // }
    //we can also copy vector in linked list as like array
    vector <int> v ={10,20,30};
    list <int> l2 (v.begin(),v.end());
    for(int val : l2)
    {
        cout << val;
    }



   return 0;
}
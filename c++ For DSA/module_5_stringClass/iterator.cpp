#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    // for(int i =0;i<s.size();i++)
    // {
    //     cout<< s[i]<<endl;
    // }
    cout << *s.begin() <<endl;
    cout << *(s.end()-1) <<endl;
    for(string:: iterator it = s.begin();it<s.end();it++)
    // eikhane string :: iterator er poriborte auto deoa jabey 
    {
        cout << *it << endl;
    }


    return 0;
}
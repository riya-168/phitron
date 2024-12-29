#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   getline(cin,str);
   string sub ="Jessica";
   stringstream ss(str);
   string word;
   bool found = false;
   while(ss >> word)
   {
    if(word == sub)
    {
    found = true;
    break;
   }
   }
   (found)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}
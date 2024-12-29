#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
int cls;
string sec;
int id;
};
int main()
{
    int n;
    cin>>n;
    student a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id;
        //reverse(a[i].sec.begin(),a[i].sec.end());
    }
    for(int i=0;i<n/2;i++)
    {
        swap(a[i].sec,a[n-i-1].sec);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
    }
    
   return 0;
}
/*
sample input
3
Rakib 7 B 90
Sakib 10 A 85
Ahsan 9 C 36
sample output
Rakib 7 C 90
Sakib 10 A 85
Ahsan 9 B 36
*/


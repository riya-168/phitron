#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
 int roll;
 int marks;
};
 bool cmp(student l,student r)
 {
    if(l.marks == r.marks)//marks er vittitey sort
    {
        return l.roll<r.roll;
    }
    else
    {
        return l.marks > r.marks;
    }
    //using ternary operator
    //return(l.marks == r.marks)? l.roll<r.roll : l.marks > r.marks;
 }
int main()
{
   int n;
   cin>>n;
   student a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i].name>>a[i].roll>>a[i].marks;
   }
   sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
   {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
   }

   return 0;
}
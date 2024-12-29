#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
 int cls;
 char sec;
 long long id;
 int math_marks;
 int eng_marks;
};
/*
sort based on
1.eng_mark
2.math_mark
3.id
*/
bool cmp(student l,student r)
{
    if(l.eng_marks == r.eng_marks)
    {
        if(l.math_marks == r.math_marks)
        {
        return l.id<r.id;
        }
        else{
            return l.math_marks>r.math_marks;
        }
    }
    else
    {
       return l.eng_marks>r.eng_marks;
    }
}
int main()
{
   long long n;
   cin>>n;
   student a[n];
   for(long long i=0;i<n;i++)
   {
    cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    //a[i].total_marks = a[i].math_marks + a[i].eng_marks;
   }
   sort(a,a+n,cmp);
   for(long long i=0;i<n;i++)
   {
    cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl; 
   }
   return 0;
}

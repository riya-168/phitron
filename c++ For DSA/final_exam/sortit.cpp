#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
 int cls;
 char sec;
 int id;
 int math_marks;
 int eng_marks;
 int total_marks;
};
bool cmp(student l,student r)
{
    if(l.total_marks == r.total_marks)
    {
        return l.id<r.id;
    }
    else{
        return l.total_marks > r.total_marks;
    }
}
int main()
{
   int n;
   cin>>n;
   student a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    a[i].total_marks = a[i].math_marks + a[i].eng_marks;
   }
   sort(a,a+n,cmp);
   for(int i=0;i<n;i++)
   {
    cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl; 
   }
   return 0;
}
/*
sample input
6
Munna 8 D 30 50 40
Shojoy 9 E 25 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99
Khadija 8 E 26 40 50

sample output
Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 25 40 50
Khadija 8 E 26 40 50
Munna 8 D 30 50 40

*/
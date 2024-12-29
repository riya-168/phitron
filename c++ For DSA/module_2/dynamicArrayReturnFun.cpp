#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int[5];
    for(int i=0;i<5;i++)
    {
        cin>> a[i];
    }
    return a;
}
int main()
{
   int *x = fun();//return korar por notun ekta variable e store kora holo.karon  ek funcction er variable onno function chine na
    
   
    for(int i=0;i<5;i++)
    {
        cout <<x[i] << " ";
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int row_space =0, col_space = (2*n-3);
   for(int i=1;i<n/2;i++)
   {
    for(int j=1;j<=row_space;j++)
    {
        cout<<" ";
    }
     row_space ++;
    cout<<"\\";
    for(int j=1;j<=col_space;j++)
    {
        cout<<" ";
    }
    col_space -= 2;
    cout<<"/";
    cout<<endl;

   }
   for(int j=1;j<row_space;j++)
   {
    cout<<" ";
   }
   cout<<"X"<<endl;
   int down_r_space = n/2;
   col_space=1;
   for(int i=1;i<n/2;i++)
   {
    for(int j=1;j<=down_r_space;j++)
    {
        cout<<" ";
    }
    down_r_space --;
    cout<<"/";
    for(int j=1; j<=col_space;j++){
        cout<<" ";
    }
    col_space +2;
    cout<<"\\";
    cout<<endl;
   }
   return 0;
}
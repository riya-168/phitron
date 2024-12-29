#include<bits/stdc++.h>
using namespace std;
int main()
{
    char line[100001];
    while(cin.getline(line,100001))
    {
        long long size=strlen(line);
        sort(line,line+size);
        for(int i=0;i<size;i++)
        {
            if((int)line[i]!=32)
            cout<<line[i];
        }
        cout<<endl;
    }
    return 0;
}
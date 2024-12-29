#include<bits/stdc++.h>
using namespace std;
class cricketer
{
public:
string country;
int jerrsey;
cricketer(string country , int jersey)
{
    this->country = country;
    this->jerrsey = jersey;
}
};
int main()
{
   
   cricketer* dhoni =new cricketer("India",100);
   cricketer* kohli =new cricketer("India",18);
   *kohli = *dhoni; 
   delete dhoni;
    //cout<< dhoni->jerrsey<<endl;
    cout<< kohli->jerrsey<<endl;
    
   return 0;
}
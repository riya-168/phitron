#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "hello world";
    // string s2 = "hi";
    // //s += s2;
    // s.append(s2);
    // cout << s <<endl;// concat er moto jora lagay
    // s.push_back('A');//add kora,,, multiple character push kora jay na
    // cout << s <<endl;
    // s += 'B';
    // s =s2;
    // s.pop_back();//last character remove
    // cout << s <<endl; 
    // s = "gello";
    // s.assign("tello");
    // s.erase(2);//2 number iindex theeke delete kora aaa  shuru korbe
    // s.erase(3,2);//3 number index theke 2 ta character delete
    // string modifiers part ||
    s.replace(6,0,"Bangladesh");//6 holo j index thekereplace korte chai,0(kono index remove korbo na tai 0 diechi) hochhe j index theke  replace korte chacchi sei index theke remove korte chachhi kina ,"bangladesh hocche desire index e jeta diey replace korte chai" 
    cout << s <<endl;
    s.insert(5,"Pias");
    cout << s <<endl;

    
    return 0;
}
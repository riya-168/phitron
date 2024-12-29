#include<bits/stdc++.h>
using namespace std;
int main()
{
    //capacity
    string s ="Hello world";
    cout <<s.size() << endl;
    s.resize(4); // s.resize(17 ,'d');
    cout << s << endl;
    cout <<s.max_size()<< endl;//compiler kototuku size nite parbey
    cout <<s.capacity()<<endl; // string koto tuku size nite parbey
    s.clear();//puro string k delete kore
    if(s.empty()== true)
    {
        cout << "Empty" << endl;
    }
    else{
        cout << "not empty" <<endl;
    }
    
    
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[100];//100 byte.. extra 4 ba 8 byte..class er sob data type mile jogfol hoy toto tuku jayga class dokhol kore
    int roll;//4 byte
    double gpa;//8 byte
};
int main()
{
    student a;// student is a class name and a is an object
    a.roll =2;
    a.gpa = 4.2;
    char temp[100] = "riruru";
    strcpy(a.name,temp);
    cout << a.name<<" "<<a.roll <<" "<<a.gpa<<endl;
    return 0;
}
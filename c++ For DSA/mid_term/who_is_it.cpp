#include <bits/stdc++.h>
using namespace std;
class chatro
{
public:
    int id;
    char name[100];
    char a;
    int total_mark;
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        chatro manush[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> manush[j].id >> manush[j].name >> manush[j].a >> manush[j].total_mark;
        }
        chatro max_mark = manush[0];
        for (int j = 0; j < 3; j++)
        {
            if (manush[j].total_mark > max_mark.total_mark)
            {
                max_mark = manush[j];
            }
            else if (manush[j].total_mark == max_mark.total_mark)
            {
                if (manush[j].id < max_mark.id)
                {
                    max_mark = manush[j];
                }
            }
        }
        cout << max_mark.id << " " << max_mark.name << " " << max_mark.a << " " << max_mark.total_mark << endl;
    }
    return 0;
}
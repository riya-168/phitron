#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sum;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> sum;
        int arr[n];
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int flag = 1;
        for (int j = 0; j < n - 2; j++){
            for (int k = j + 1; k < n - 1; k++){
                for (int l = k + 1; l < n; l++){
                    if (arr[j] + arr[k] + arr[l] == sum){
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0) break;
            }
            if (flag == 0) break;
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
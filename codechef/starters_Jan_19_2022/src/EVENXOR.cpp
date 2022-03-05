#include <bits/stdc++.h>
using namespace std;
int search(vector<int> arr, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    vector<int> vec(1000, 0);
    vec[0] = 6;
    for (int i = 1, k = 1, ctr = 1; i < 1000 && ctr < 1000; i++)
    {
        if (i < 20)
        {
            k *= 2;      // k=2^19
            vec[i] = k + 1;   //2^19 +1
            ctr++;    //19
        }
        else
        {
            for (int j = 0; j < i - 19; j++)
            {
                int a = vec[i - 19] ^ vec[j];
                if (a < k * 2 && a > 1)
                {
                    if (ctr + j - 1 < 1000)
                    {
                        if (search(vec, ctr + j - 1, a) != 1)
                        {
                            vec[ctr++] = a;
                        }
                    }
                }
            }
        }
    }
    while (t--)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}
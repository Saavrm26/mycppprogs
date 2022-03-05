#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[m], len1 = 1, len2 = 1;
        int max1 = 0, max2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (i >= 1)
            {
                if (arr1[i - 1] <= arr1[i])
                {
                    len1++;
                }
                else
                {
                    len1 = 1;
                }
                if (max1 < len1)
                {
                    max1 = len1;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            if (i >= 1)
            {
                if (arr2[i - 1] <= arr2[i])
                {
                    len2++;
                }
                else
                {
                    len2 = 1;
                }
                if (max2 < len2)
                {
                    max2 = len2;
                }
            }
        }
        cout << (max1 + max2) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

string is_valid(vector<int> arr, vector<int> sum, int n, int l, int r)
{
    int i = 2, flag = 0;
    int operations = 0;
    auto beginning = sum.begin() + l + 1;
    while (1)
    {
        auto it = lower_bound(beginning, sum.end(), i * sum[l]);
        if (*it == i * sum[l] && it != sum.end())
        {
            operations += it - beginning - 1;
            flag = 1;
            beginning = it + 1;
        }
        else
        {
            if (it == sum.end())
            {
                if (flag == 1)
                    return to_string(operations);
                else
                    return "W" + to_string((*(sum.end() - 1) - *(beginning - 1)));
            }
            else
            {
                flag = 0;
                beginning = it;
            }
        }
        i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> sum(n);
        int ctr = 0;
        int mini = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
                sum[i] = arr[i];
            else
                sum[i] =sum[i-1]+arr[i];
            if (mini > arr[i])
                mini = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mini)
            {
                ctr++;
            }
        }
        if (ctr == n)
        {
            cout << 0 << endl;
        }
        else
        {
            int l, r;
            l = 0;
            r = n-1;
            int ans = n - 1;
            int flag = 0;
            while (r-l>0)
            {
                int mid = (l + r) / 2;
                string temp = is_valid(arr, sum, n, mid, r);
                if (temp[0] == 'W')
                {
                    int last_sum = stoi(temp.substr(1));
                    if (last_sum < sum[mid])
                    {
                        l = mid;
                    }
                    else
                    {
                        r = mid;
                    }
                }
                else
                {
                    flag = 1;
                    cout << temp << endl;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << ans << endl;
            }
        }
    }
}
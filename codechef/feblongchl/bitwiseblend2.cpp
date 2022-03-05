#include <bits/stdc++.h>
#define BITWISEMAXLIM 1073741824
using namespace std;
int _0_starting = 0, _1_starting = 0;
string output = "";
int linear_min(vector<int> vec, int flag)
{
    int n = vec.size();
    int min = INT32_MAX;
    int min_index;
    if (flag == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (vec[i] % 2 == 0)
            {
                if (vec[i] < min)
                {
                    min = vec[i];
                    min_index = i;
                }
            }
        }
        return min_index;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (vec[i] % 2 == 1)
            {
                if (vec[i] < min)
                {
                    min = vec[i];
                    min_index = i;
                }
            }
        }
        return min_index;
    }
}
int linear_search(vector<int> vec, int x)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == x)
        {
            return i;
        }
    }
    return -1;
}
void kill_that_element(vector<int> &vec, int x)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == x)
        {
            vec.erase(vec.begin() + i); 
            i--;
        }
    }
}
int starting_with_1(vector<int> vec)
{
    int n = vec.size();
    output += to_string(n - _1_starting) + "\n";
    int mini_index1 = linear_min(vec, 1);
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            if (vec[i] % 2 != 1)
            {
                if (i == mini_index1)
                {
                    auto s = vec;
                    kill_that_element(s, vec[mini_index1]);
                    mini_index1 = linear_search(vec, s[linear_min(s, 1)]);
                }
                vec[i] = vec[i] ^ vec[mini_index1];
                if (vec[i] >= BITWISEMAXLIM)
                    return 1;
                output += to_string(i + 1) + " " + to_string(mini_index1 + 1) + "\n";
            }
        }
        else
        {
            if (vec[i] % 2 != 0)
            {
                if (i == mini_index1)
                {
                    auto s = vec;
                    kill_that_element(s, vec[mini_index1]);
                    mini_index1 = linear_search(vec, s[linear_min(s, 1)]);
                }
                vec[i] = vec[i] ^ vec[mini_index1];
                if (vec[i] >= BITWISEMAXLIM)
                    return 1;
                output += to_string(i + 1) + " " + to_string(mini_index1 + 1) + "\n";
            }
        }
    }
    return 0;
}
int starting_with_0(vector<int> vec)
{
    int n = vec.size();
    output += to_string(n - _0_starting) + "\n";
    int mini_index0 = linear_min(vec, 0);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (vec[i] % 2 != 0)
            {
                if (i == mini_index0)
                {
                    auto s = vec;
                    kill_that_element(s, vec[mini_index0]);
                    mini_index0 = linear_search(vec, s[linear_min(s, 0)]);
                }
                vec[i] = vec[i] ^ vec[mini_index0];
                if (vec[i] >= BITWISEMAXLIM)
                    return 1;
                output += to_string(i + 1) + " " + to_string(mini_index0 + 1) + "\n";
            }
        }
        else
        {
            if (vec[i] % 2 != 1)
            {
                if (i == mini_index0)
                {
                    auto s = vec;
                    kill_that_element(s, vec[mini_index0]);
                    mini_index0 = linear_search(vec, s[linear_min(s, 0)]);
                }
                vec[i] = vec[i] ^ vec[mini_index0];
                if (vec[i] >= BITWISEMAXLIM)
                    return 1;
                output += to_string(i + 1) + " " + to_string(mini_index0 + 1) + "\n";
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        int maxi = INT32_MIN, mini = INT32_MAX;
        _0_starting = 0;
        _1_starting = 0;
        output="";
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] > maxi)
            {
                maxi = vec[i];
            }
            if (vec[i] < mini)
            {
                mini = vec[i];
            }
            if (i % 2 == 0)
            {
                if (vec[i] % 2 == 0)
                    _0_starting++;
                else
                    _1_starting++;
            }
            else
            {
                if (vec[i] % 2 == 0)
                    _1_starting++;
                else
                    _0_starting++;
            }
        }
        if ((_0_starting < _1_starting) && (maxi != 0 && mini != 0))
        { // starting with 1
            int flag = starting_with_1(vec);
            if (flag == 0)
            {
                cout << output;
            }
            else
            {
                output = "";
                flag = starting_with_0(vec);
                if (flag == 0)
                {
                    cout << output;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
        else if ((_1_starting <= _0_starting) && (maxi != 0 && mini != 0))
        { // starting with 0
            int flag = starting_with_0(vec);
            if (flag == 0)
            {
                cout << output;
            }
            else
            {
                output = "";
                flag = starting_with_1(vec);
                if (flag == 0)
                {
                    cout << output;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
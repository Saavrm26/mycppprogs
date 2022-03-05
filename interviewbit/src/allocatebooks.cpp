#include <bits/stdc++.h>
using namespace std;

bool find_pages(vector<int> vec, int mid, int b)
{
    int pages = 0;
    int stu = 1;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        if(vec[i]>mid)
            return false;
        if (pages + vec[i] > mid)
        {
            pages=0;
            stu++;
        }
        pages += vec[i];
    }
    if (stu <= b)
        return true;
    else
        return false;
}
int books(vector<int> &A, int B)
{
    int n = A.size();
    if(n<B){
        return -1;
    }
    else{
        int mini_pages = INT32_MAX;
        int mini = INT32_MAX,sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=A[i];
            if (A[i] <= mini)
                mini = A[i];
        }
        int l = mini;
        int r = sum;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            bool check = find_pages(A, mid, B);
            if (check)
            {
                mini_pages = min(mini_pages, mid);
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return mini_pages;
    }
}

int main()
{
    vector<int> vec{97, 26, 12, 67, 10, 33, 79, 49, 79, 21, 67, 72, 93, 36, 85, 45, 28, 91, 94, 57, 1, 53, 8, 44, 68, 90, 24 };
    cout<<books(vec,26);
    
}
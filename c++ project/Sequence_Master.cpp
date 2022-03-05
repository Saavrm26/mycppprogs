#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubblesort_vector(vector<int>& v,int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (v[j] > v[j + 1])
                swap(&v[j], &v[j + 1]);

}
int binarysearch_vector(vector<int> v, int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (v[m] == x)
            return m;

        if (v[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr2[N];
    vector<int> v;
    for (auto &i : arr2)
    {
        cin >> i;
    }
    cin.ignore();
    while(Q--){    
        int n, x, y, k,sum=0;
        string input="";
        getline(cin,input);
        {
            
            n=stoi(input.substr(0,input.find(' ')));
            input=input.substr(input.find(' ')+1);
        }
        
        if (n == 1)
        {
            x=stoi(input.substr(0,input.find(' ')));
            y=stoi(input.substr(input.find(' ')+1));
            arr2[x-1]=y;
        }
        else{
            k=stoi(input);
            vector<int> p;
            sum=0;
            int diff=0;
            for(int i=0;i<k;i++){               //i=1 k=3
                for(int l=0;l<k-i;l++){            //l=0 l=1 l<2 
                    for(int j=i;j<i+l+1;j++){       //j=1   j<2   j=1  j<3
                        bubblesort_vector(p,p.size());
                        if (!binary_search(p.begin(),p.end(),arr2[j])){
                                p.push_back(arr2[j]);
                                diff++;
                        }
                    }
                sum+=diff;
                diff=0;
                p.clear();
                }
            }
            cout<<sum<<endl;
        }
        
    }
}
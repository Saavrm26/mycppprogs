//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

struct fval{
	Item item;
	float val;
};

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
		vector<fval> v(n);
		for(int i=0;i<n;i++){
			v[i].item=arr[i];
			v[i].val=float(arr[i].value)/arr[i].weight;
		}
		sort(v.begin(),v.end(),[](fval i1,fval i2){
			return i1.val>i2.val;
		});
		// for(int i=0;i<n;i++){
		// 	cout<<"value "<<v[i].item.value<<" weight "<<v[i].item.weight<<" ratio "<<v[i].val<<"\n";
		// }
		double ans=0;
		for(int i=0;i<n;i++){
			auto wt=v[i].item.weight;
			auto price=v[i].item.value;
			auto val=v[i].val;
			if(wt<=W){
				W-=wt;
				ans+=price;
			}
			else{
				ans+=W*val;
			}
		}
		return ans;
    }

};


//{ Driver Code Starts.
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;

		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}

		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
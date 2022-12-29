#include <iostream>
#include <vector>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int lsearch(vector<int> &v,int val){
	int n=v.size();
	for(int i=0;i<n;i++){
		if(v[i]==val){
			return i;
		}
	}
	return -1;
}

void solve(){
	int n;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int ops=0;
	for(int num=n;num>=1;num--){
		if(v[num-1]==num){}
		else if(v[num-1]==num-1){
			int i=lsearch(v,num);
			swap(&v[i],&v[num-1]);
			ops++;
		}
		else {
			while(v[num-1]!=num-1){
				int curr_last = v[num-1]+1;
				int i = lsearch(v,curr_last);
				swap(&v[i],&v[num-1]);
				ops++;
			}
			int i=lsearch(v,num);
			swap(&v[i],&v[num-1]);
			ops++;
		}
	}
	cout<<ops<<"\n";
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}


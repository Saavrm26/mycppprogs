#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vec = {1,2,3,4,5};
	vector<int> v;
	partial_sum(vec.begin(), vec.end(), back_inserter(v));
	auto print= [](int a){cout<<a<<" ";};
	for_each(v.begin(), v.end() - 1,print);
	cout<<endl;
}

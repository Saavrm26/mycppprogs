#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even_ele=0,odd_ele=0,sum=0,ctr=0;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if( i <= n-2 && i >= 1){
                if(vec[i]%2==0){
                    if(vec[i]!=0)
                        even_ele++;
                }
                else{
                    odd_ele++;
                    if(vec[i]==1){
                        ctr++;
                        
                    }
                    
                }
                sum += vec[i];
            }
        }
        if(even_ele!=0){
            int ans = odd_ele + (sum - odd_ele)/2;
            cout<<ans<<endl;
        }
        else{
                if(ctr==odd_ele)
                    cout<<-1<<endl;
                else if(odd_ele>1){
                    int ans=0;
                    odd_ele--;
                    sum--;
                    ans =1;
                    ans += odd_ele + (sum - odd_ele)/2;
                    cout<<ans<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		cin >> n;
// 		vector<long long> v;
// 		for (int i = 0; i < n; ++i) {
// 			long long x;
// 			cin >> x;
// 			v.push_back(x);
// 		}
// 		int eve = 0, odd = 0;
// 		for (int i = 1; i < n - 1; ++i) {
// 			if (v[i] % 2 == 1) odd++;
// 			else eve++;
// 		}
// 		long long sum = 0;
// 		int c = 0;
// 		for (int i = 1; i < n - 1; ++i) {
// 			sum += (v[i] + 1) / 2;
// 			if (v[i] == 1) c++;
// 		}
// 		if ((eve == 0 && odd == 1) || c == n - 2) cout << -1 << endl;
// 		else cout << sum << endl;
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int arr1[n];
        for(int i=0;i<n;i++){
            arr1[i] = s[i]-'0';
            //arr2[i]=arr1[i];
        }
        int low=0,high=n-1;
        int ctr=0,ans,l=0,flag=0;
        while(high-low>1){
                int mid=(low+high)/2;
                ctr=0,l=0,flag=0;
                for(int i=mid;i>=0;i--){
                    if(ctr+(10-arr1[i])<=k){
                        ctr+=(10-arr1[i]);
                        arr1[i]+=ctr%10;
                        l++;
                    }
                    else if(arr1[i]==0){
                        l++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    for(int i=mid+1;i<n;i++){
                        if(arr1[i]==0){
                            l++;
                        }
                        else{

                            break;
                        }
                    }
                    ans=l;
                }
                if(ctr<=k){
                    low=mid;
                }
                else{
                    high=mid;
                }
            }
        cout<<ans<<endl;
        }
    }

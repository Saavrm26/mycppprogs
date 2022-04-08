#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
ll mini(ll case_min,ll ans){
    if(case_min<ans)
        ans=case_min;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        ll ans=INT32_MAX;
        //case 1
        ll case_min=(ll)(abs(a[0]-b[0]))+(ll)(abs(a[n-1]-b[n-1]));
        ans=mini(case_min,ans);
        //case 2
        case_min=(ll)(abs(a[0]-b[n-1]))+(ll)(abs(a[n-1]-b[0]));
        ans=mini(case_min,ans);
        //case 3
        case_min=(ll)(abs(a[n-1]-b[n-1]));
        ll a_min=INT32_MAX;
        for(int i=0;i<n;i++){                //a0  - bx
            if((ll)(abs(a[0]-b[i]))<a_min)
                a_min=(ll)(abs(a[0]-b[i]));
        }      
        ll b_min=INT32_MAX;
        for(int i=0;i<n;i++){                //b0  - ax
            if((ll)(abs(b[0]-a[i]))<b_min)
                b_min=(ll)(abs(b[0]-a[i]));
        }
        case_min += a_min + b_min;
        ans=mini(case_min,ans);

        //case 4
        case_min=(ll)(abs(a[0]-b[0]));
        a_min=INT32_MAX;
        for(int i=0;i<n;i++){                //an-1  - bx
            if((ll)(abs(a[n-1]-b[i]))<a_min)
                a_min=(ll)(abs(a[n-1]-b[i]));
        }      
        b_min=INT32_MAX;
        for(int i=0;i<n;i++){                //bn-1  - ax
            if((ll)(abs(b[n-1]-a[i]))<b_min)
                b_min=(ll)(abs(b[n-1]-a[i]));
        }
        case_min += a_min + b_min;
        ans=mini(case_min,ans);

        //case 5
        case_min=(ll)(abs(b[0]-a[n-1]));
        a_min=INT32_MAX;
        for(int i=0;i<n;i++){                //a0  - bx
            if((ll)(abs(a[0]-b[i]))<a_min)
                a_min=(ll)(abs(a[0]-b[i]));
        }      
        b_min=INT32_MAX;
        for(int i=0;i<n;i++){                //bn-1  - ax
            if((ll)(abs(b[n-1]-a[i]))<b_min)
                b_min=(ll)(abs(b[n-1]-a[i]));
        }
        case_min += a_min + b_min;
        ans=mini(case_min,ans);
        
        //case 6

        case_min=(ll)(abs(b[n-1]-a[0]));
        a_min=INT32_MAX;
        for(int i=0;i<n;i++){                //an-1  - bx
            if((ll)(abs(a[n-1]-b[i]))<a_min)
                a_min=(ll)(abs(a[n-1]-b[i]));
        }      
        b_min=INT32_MAX;
        for(int i=0;i<n;i++){                //b0  - ax
            if((ll)(abs(b[0]-a[i]))<b_min)
                b_min=(ll)(abs(b[0]-a[i]));
        }
        case_min += a_min + b_min;
        ans=mini(case_min,ans);
        
        // case 7
        a_min=INT32_MAX;
        for(int i=0;i<n;i++){                //a0  - bx
            if((ll)(abs(a[0]-b[i]))<a_min)
                a_min=(ll)(abs(a[0]-b[i]));
        }      
        b_min=INT32_MAX;
        for(int i=0;i<n;i++){                //bn-1  - ax
            if((ll)(abs(b[n-1]-a[i]))<b_min)
                b_min=(ll)(abs(b[n-1]-a[i]));
        }
        case_min=a_min+b_min;
        a_min=INT32_MAX;
        for(int i=0;i<n;i++){                //an-1  - bx
            if((ll)(abs(a[n-1]-b[i]))<a_min)
                a_min=(ll)(abs(a[n-1]-b[i]));
        }      
        b_min=INT32_MAX;
        for(int i=0;i<n;i++){                //b0  - ax
            if((ll)(abs(b[0]-a[i]))<b_min)
                b_min=(ll)(abs(b[0]-a[i]));
        }
        case_min += a_min + b_min;
        ans=mini(case_min,ans);
        cout<<ans<<"\n";
    }
}
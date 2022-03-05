#include <iostream>
#include <string>

using namespace std;

int l=0;
long int m=0;
int main(){
    cin>>l;
    int arr[l];
    //assigning and finding sum
    long int sum=0;
    for(int i=0;i<l;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int a=0,b=0;
    while(a<l)
    {
        
        //finding k    
        int  k=0;
        for(int i=1;i<=l/2;i++){
            int K=(i*(i+1))/2;
            if(K>l-a){
                break;
            }
            else{
                k=K;
            }
        }
        //k determined
        long int m2 = 0;
        if(k>l-k-a){
        //removing unnecessary initial values
            for(int i=b;i<a;i++){
                sum -= arr[i];
                b++;
            }
            m2 = sum;
            for(int c=l-1;c>k+a-1;c--){
                m2 -= arr[c];
            }
        }
        else{
            for(int i=a;i<k+a;i++){
                m2=m2+ arr[i];
            }
        }
        //finding max special value
        if(a==0){
            m=m2;
        }
        else if(m2>m){
            m=m2;
        }
        a++;
    }    
    cout<<m;
    return 0;
}
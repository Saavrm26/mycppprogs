#include <iostream>
#include <string>
using namespace std;
long int max1=0,max2=0;
int l=0;
int main(){
    cin>>l;
    long int arr1[l/2],arr2[l-l/2];
    for(long int i=0;i<l/2;i++){
        
        cin>>arr1[i];
        cin>>arr2[i];
        if(l-l/2>l/2){
            cin>>arr2[i+1];
        }
        
    }
    int i=0;
    while(i<l){
        long int k=0,a=1;
        for(;;a++){
            k += a;
            if(k > l-i ){
                break;
            }
        }
        k=k-a;
        for(a=i;a<k/2+i;a++){
            if(a!=k/2-1){
                max1=max1 + arr1[a] + arr2[a];
            }
            else {
                if(k%2==0){
                    max1=max1 + arr1[a] + arr2[a];
                }
                else
                    max1=max1 + arr1[a] + arr2[a]+arr2[a+1];
            }
        }
        if(i==0){
            max2=max1;
        }
        else if(max1>max2){
            max2=max1;
        }
        i++;
        max1=0;
    }
    cout<<max2;
    return 0;
}
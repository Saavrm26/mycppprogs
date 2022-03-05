#include <bits/stdc++.h>
using namespace std;

int main(){
//     //set <int> s;
//     // s.insert(5);   // 1
//     // s.insert(4);   // 2
//     // s.insert(4);   // 3
//     // cout<<s.size();
//     // int n;
//     // cin>>n;
//     // int arr[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     //     s.insert(arr[i]);
//     // }

//     //s.insert   tc O(log(size))
//     //s.size()   tc O(1)
//     //s.erase()    tc O(Log(N))   // iterator and values both allowed
//     //s.find(value)  tc O(log(N))
//     //s.clear()
//     // lower and upper bound have logN as their complexity
//     // s.count(key) returns 1 0r 0 if the key is found
//     set<int> s;
//     s.insert(4);
//     s.insert(5);
//     // auto it=s.begin();
//     // it++;   // it + 1 is not valid
//     auto it2=++s.begin();
//     cout<<*it2<<endl;
//     cout<<*s.begin()<<endl;
//     s.erase(4);
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }   
//     cout<<endl;

// //multiset allows duplicate values
//     multiset<int> ms;


    // pair<int,pair<int,int>> p;
    // p.first=10;
    // p.second.first=11;
    // p.second.second=12;
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    set<int> s;
    pair<int,int> p;
    set<pair<int,int>> s;
    for(int i=0;i<n;i++){
        p.first=arr[i];
        p.second=i;
        s.insert(p);

    }
    

}
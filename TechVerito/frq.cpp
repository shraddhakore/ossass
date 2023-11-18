#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    cout<<endl;
    //bool found=false;
    for(auto i: mp){
        if(i.second>=k){
            //found=true;
            cout<<i.first<<" ";
        }
    }

    return 0;
}
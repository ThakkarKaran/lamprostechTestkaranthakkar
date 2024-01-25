#include<bits/stdc++.h>
using namespace std;
vector<int>returnFrequent(int ar[],int s,int rank){
// map to store frequency
map<int,int,greater<int>>mp;
for(int i=0;i<s;i++){
mp[ar[i]]++;
}
vector<int>v;
int count=0;
// finding first k frequent element
for(auto x:mp){
    v.push_back(x.first);
    count++;
    if(count==rank)break;
}
return v;
}
int main(){
int n; //number of elements
int k;//k value for finding frequent elements
cout<<"enter number of elements in array:";
cin>>n;
int arr[n];
cout<<"enter elements of array:";
// taking array elements as input
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter k value";
cin>>k;
vector<int>result;// result list
result=returnFrequent(arr,n,k);
cout<<"frequent elements are:"<<endl;
//displaying final output
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
return 0;
}




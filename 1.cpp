#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int ans=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    ans+=arr[i];
}
ans/=n;
cout<<ans<<" ";
}

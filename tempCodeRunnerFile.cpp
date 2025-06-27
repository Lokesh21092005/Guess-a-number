#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int left[n];
        int right[n];
        int combined[n];
        for(int i =0 ; i < n ; i++){
            cin>>left[i];
        }
        for(int i =0 ; i < n ; i++){
            cin>>right[i];
        }
        int ans = 0;
        for(int i =0 ; i < n ; i++){
            if(left[i]>right[i]){
                combined[i] = right[i];
                ans+=left[i];
            }
            else{
                combined[i] = left[i];
                ans+=right[i];
            }
        }
        sort(combined, combined + n);
        for(int i = 0 ; i < k-1 ; i++){
            ans+=combined[n-1-i];
        }
        
       cout<<ans+1<<endl;
    }
}
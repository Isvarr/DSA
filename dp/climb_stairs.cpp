#include <iostream>
using namespace std;
#include <vector>

int climb(int n){
    if (n==1) return 1; //base case (min n =1, steps for climbing 1 step =1)
    vector<int>dp(n+1);
    dp[0]=dp[1]=1; 
    for (int i =2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = climb(n);
        cout<<res<<endl;
    }
}
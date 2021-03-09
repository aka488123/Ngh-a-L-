#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1000000];
void solve() 
{
    int best=arr[0],sum=0;
    for (int i=0;i<n;i++) 
	{
    	if (sum+arr[i]<arr[i]) sum=arr[i];
		else sum+=arr[i];
    	if (best<sum) best=sum;  
   	}
    cout<<best;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    solve();
    return 0;
}
    

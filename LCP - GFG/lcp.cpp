//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        sort(ar,ar+n);
        string x =ar[0];
        string y = ar[n-1];
        int len = x.size();
        string ans = "";
        for(int i=0; i<len; i++){
            if(x[i] == y[i]){
                ans.push_back(x[i]);
            }
            else{
                break;
                return "-1";
            }
        }
        // return ans;
        if(ans.size()>0){
            return ans;
        }
        else
            return "-1";
    }
};

//{ Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}
// } Driver Code Ends
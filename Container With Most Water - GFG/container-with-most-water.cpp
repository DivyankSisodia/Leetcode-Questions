//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long ans = 0;
    int i=0;
    int j = len-1;
    long long area = 0;
    
    while(i<j){
        long long height = min(A[i], A[j]);
        long long dist = j-i;
        long long maxArea = height * dist;
        area = max(area, maxArea);
        
        if(A[i]< A[j]){
            i++;
        }
        else if(A[i] >A[j]){
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    return area;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends
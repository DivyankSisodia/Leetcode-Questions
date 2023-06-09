//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int n) {
        // code here
        vector<int> temp;
        temp.push_back(H[0]);
        int len = 1;
        for(int i=1; i<n; i++){
            if(H[i] > temp.back()){
                temp.push_back(H[i]);
                len++;
            }
            else{
                int x = lower_bound(temp.begin(), temp.end(), H[i]) - temp.begin();
                temp[x] = H[i];
            }
        }
        return n-len;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char, int> mp;
	    int n = txt.size();
	    int k = pat.size();
	    for(int i=0; i<k; i++){
	        mp[pat[i]]++;
	    }
	    
	    int i=0;
	    int j=0;
	    int ans = 0;
	    int cnt = mp.size();
	    
	    while(j<n){
	        
	        if(mp.find(txt[j]) != mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]] == 0){
	                cnt--;
	            }
	        }
	        
	        if(j-i+1 < k){
	            j++;
	        }
	        
	        else if(j-i+1 == k){
	            if(cnt == 0){
	                ans++;
	            }
	           // left wale pointer ko slide kro aur uss element ki jagah koi aur element add up hoga
	            if(mp.find(txt[i]) != mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]] == 1){
	                    cnt++;
	                }
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
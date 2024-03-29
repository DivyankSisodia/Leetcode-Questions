class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return 0;
        }
        
        string temp = s+s;
        
        if(temp.find(goal) != -1){
            return 1;
        }
        return 0;
    }
};
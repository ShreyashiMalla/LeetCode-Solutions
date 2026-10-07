class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=0;
        for(int i=0;i<accounts.size();i++){
            int wealth=0;//here the current wealth will get stored
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];//wealth=wealth+account[i][j]
            }
            if(wealth>maxwealth){
                maxwealth=wealth;
            }
        }
        return maxwealth;
        
    }
};
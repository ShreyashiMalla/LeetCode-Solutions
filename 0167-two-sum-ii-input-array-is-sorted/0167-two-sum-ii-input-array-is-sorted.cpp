class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int i=0;
        int j=num.size()-1;
        while(i<j){
            int sum=num[i]+num[j];
            if(sum<tar){
                i++;
            }
            else if(sum>tar){
                j--;
            }
            else break;
            
        }
        return {i+1,j+1};
        
        
    }
};
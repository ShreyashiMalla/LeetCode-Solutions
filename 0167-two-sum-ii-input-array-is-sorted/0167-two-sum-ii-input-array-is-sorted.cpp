class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int sum=numbers[l]+numbers[r];
            // If the sum is too small, move left pointer forward
            if(sum<target){
                l++;
            }  
            // If the sum is too large, move right pointer backward
            else if(sum>target){
                r--;
            }   
            // If the sum equals the target, stop the loop
            else break;   
        }    
        // Return 1-based indices so add 1 as we started from 0   
        return {l+1,r+1};
        
    }
};
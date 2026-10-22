class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r=ransomNote.size();
        int m=magazine.size();
        unordered_map<char,int> have;
        unordered_map<char,int> need;
        //making the hashmap for need
        for(int i=0;i<r;i++){
            need[ransomNote[i]]++;
        }
        //making the hashmap for magazine
        for(int i=0;i<m;i++){
            have[magazine[i]]++;
        }
        // Check every character that ransomNote requires
        for(auto i:need){
            // Get the character from the map
            char c = i.first;
            // i.second contains how many times this character is needed
            if(have[c]<i.second){// Check if available count is less than required count
                return false;
            }
        }
        return true;   
    }
};
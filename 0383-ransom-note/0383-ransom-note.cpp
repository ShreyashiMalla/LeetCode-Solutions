class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r=ransomNote.size();
        int m=magazine.size();
        unordered_map<char,int> have;
        unordered_map<char,int> need;
        for(int i=0;i<r;i++){
            need[ransomNote[i]]++;
        }
        for(int i=0;i<m;i++){
            have[magazine[i]]++;
        }
        for(auto i:need){
            char c = i.first;
            if(have[c]<i.second){
                return false;
            }
        }
        return true;   
    }
};
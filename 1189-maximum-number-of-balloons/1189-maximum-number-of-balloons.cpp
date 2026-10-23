class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n= text.size();
        unordered_map<char, int> have;
        unordered_map<char, int> need;
        need['b']=1;
        need['a']=1;
        need['l']=2;
        need['o']=2;
        need['n']=1;
        //making hashmap for have
        for(int i=0;i<n;i++){
            have[text[i]]++;
        }
        // Initially, assume we can form a very large number of "balloon" words
        int res= INT_MAX; 
        // Check every character required to form "balloon"
        for(auto i:need){
            // Character we are checking: b, a, l, o, or n
            char c=i.first;
            // i.second contains the no. of times this character is needed
            int fneed=i.second;
            // Number of times this character is available in text. If the character is missing, have[c] gives 0
            int fhave=have[c];
            int times= fhave/fneed;
            // The character with the smallest available count, determines the maximum number of complete words
            res= min(res,times);
        }
        return res;
              
    }
};
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt=0;
        // sort(fruits.begin(), fruits.end());
        // sort(baskets.begin(), baskets.end());
        
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j]){
                    baskets.erase(baskets.begin()+j);
                    break;
                }
            }
        }
        return baskets.size();
    }

};
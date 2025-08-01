class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> mpp;
        for(int i=0;i<candyType.size();i++){
            mpp[candyType[i]]++;
        }
        int n=candyType.size()/2;
        int m = mpp.size();
        if(m>=n)    return n;
        else    return m;
    }
};
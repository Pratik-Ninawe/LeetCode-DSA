class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        // vector<string> output;
        
        // for(int i=0;i<words1.size();i++){
        //     int flag=1;
        //     for(int j=0;j<words2.size();j++){
        //         int k=0;   
        //         while(words1[i].find(words2[j][k]) != string::npos && k<words2[j].size()){
        //             k++;
        //         }
        //         if(k!=words2[j].size()){
        //             flag=0;
        //             break;
        //         }
        //     }
        //     if(flag==1) output.push_back(words1[i]);
        // }
        
        // return output;

        int maxCharFreq[26] = {0};
        int tempCharFreq[26];
        
        for (const auto& word : words2) {
            memset(tempCharFreq, 0, sizeof tempCharFreq);//To Set Temp freq all to zero 
//You can do vector<int> tempCharFreq(26,0);
            for (char ch : word) {
                tempCharFreq[ch - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                maxCharFreq[i] = max(maxCharFreq[i], tempCharFreq[i]);
            }
        }
        
        vector<string> universalWords;
        
        for (const auto& word : words1) {
            memset(tempCharFreq, 0, sizeof tempCharFreq);
            for (char ch : word) {
                tempCharFreq[ch - 'a']++;
            }
            bool isUniversal = true;
            for (int i = 0; i < 26; ++i) {
                if (maxCharFreq[i] > tempCharFreq[i]) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal) {
                universalWords.emplace_back(word);
            }
        }
        
        return universalWords;

    }
};
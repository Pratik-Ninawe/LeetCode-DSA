class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.length()-1;
        vector<char> vowel={'a','e','i','o','u','A','E','I','O','U'};
        while(i < j){
            if(find(vowel.begin(), vowel.end(), s[i]) == vowel.end()){
                i++;
            }
            else if(find(vowel.begin(), vowel.end(), s[j]) == vowel.end()){
                j--;
            }
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
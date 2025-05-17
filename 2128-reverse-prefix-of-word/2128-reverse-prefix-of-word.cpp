class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int start=0,end;
        int flag=0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                end=i;
                flag=1;
                break;
            }
            
        }
        if(flag==1){
            while(start<end){
                swap(word[start],word[end]);
                start++;
                end--;
            }
            return word;
        }
        return word;
        

    }
};
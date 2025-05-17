class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        // int j=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]==part[j]){
        //         j++;
            
        //         if(j+1==part.length()){
        //             for(int k=0;k<part.length();k++){
        //                 s.erase(s.begin()+(i-part.length()+1));
        //             }
        //             j=0;
        //         }
        //     }
        //     else{
        //         j=0;
        //     }
            
        // }
        // return s;
        while(s.find(part) != string::npos){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
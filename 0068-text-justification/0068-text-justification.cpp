class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n = words.size();
        vector<string> ans;
        int i = 0; // pointer to traverse the words

        while (i < n) {
            int j = i;
            int lineLength = 0, totalChars = 0;

            // Count how many words fit in the current line
            while (j < n && lineLength + words[j].length() + (j - i) <= maxWidth) {
                lineLength += words[j].length(); // total characters from words
                totalChars += words[j].length();
                j++;
            }

            int spaces = maxWidth - totalChars; // total spaces to distribute
            int gaps = j - i - 1; // number of gaps between words
            string line = "";

            if (j == n || gaps == 0) { // Last line or single word line
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k != j - 1) line += " "; // add single space between words
                }
                // Pad remaining spaces at the end
                while (line.size() < maxWidth) line += " ";
            } else {
                int spaceEach = spaces / gaps;
                int extra = spaces % gaps; // extra spaces to distribute from left

                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k != j - 1) {
                        int toAdd = spaceEach + (extra > 0 ? 1 : 0);
                        line += string(toAdd, ' ');
                        if (extra > 0) extra--;
                    }
                }
            }

            ans.push_back(line);
            i = j; // move to next line
        }

        return ans;
    }
};
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        // Sort the folders alphabetically
        sort(folder.begin(), folder.end());

        // Initialize the result vector and add the first folder
        vector<string> result;
        result.push_back(folder[0]);

        // Iterate through each folder and check if it's a sub-folder of the
        // last added folder in the result
        for (int i = 1; i < folder.size(); i++) {
            string lastFolder = result.back();
            lastFolder += '/';

            // Check if the current folder starts with the last added folder
            // path
            if (folder[i].compare(0, lastFolder.size(), lastFolder) != 0) {
                result.push_back(folder[i]);
            }
        }

        // Return the result containing only non-sub-folders
        return result;
    }
};
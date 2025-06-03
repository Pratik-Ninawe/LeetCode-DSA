class Solution {
public:
    int maxCandies(vector<int>& stat, vector<int>& choco, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& curBoxes) {
        deque<int> dq;

        // process / put current box in queue
        for(int i=0;i<curBoxes.size();i++){
            int box_ind = curBoxes[i];

            if(stat[box_ind] == 0){dq.push_back(box_ind);}
            else{dq.push_front(box_ind);}
        }

        int ans = 0;

        // start processing each box
        while(!dq.empty()){
            int box = dq.front();
            dq.pop_front();

            if(stat[box]==0){
                // continue;  // use it if you want to be sure to look at all locked box 
                break;
            }
            else if(stat[box]==1){
                ans += choco[box];
                for(auto& key:keys[box]){
                    stat[key] = 1;
                }
            }

            for(auto& new_box_ind : containedBoxes[box]){
                if(stat[new_box_ind]==0){dq.push_back(new_box_ind);}
                else{dq.push_front(new_box_ind);}
            }
        }

        return ans;
    }
};
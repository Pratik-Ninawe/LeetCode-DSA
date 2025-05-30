class Solution {
public:
    vector<int> dfs(vector<int>edges,int nodes){
        vector<int>v(edges.size(),-1);
        int i=0;
        while(nodes != -1 && v[nodes] == -1){
            v[nodes] = i++;
            nodes = edges[nodes];
        }
        return v;
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int>v1 = dfs(edges,node1);
        vector<int>v2 = dfs(edges,node2);
        int maxa = INT_MAX;
        int result  = -1;
        for(int i=0;i<v2.size();i++){
            if(v1[i] != -1 && v2[i] != -1){
                int dist = max(v1[i],v2[i]);
                if(dist< maxa){
                    result = i;
                    maxa = dist;
                }
            }
        }
        return result;
    }
};
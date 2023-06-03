class Solution {
public:
    vector<list<int>> v;
    bool checkCycle(vector<int>& visited, int node)
    {
        for(int& i:v[node])
        {
            if(visited[i]==1) return true;
            if(visited[i]==2) continue;
            visited[i]=1;
            if(checkCycle(visited,i))
                return true;
            visited[i]=2;
        }
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        v = vector<list<int>>(numCourses);

        for(auto& i:prerequisites)
        {
            v[i[0]].push_back(i[1]);
        }
        vector<int> visited (numCourses,0);

        for(int i=0;i<numCourses;i++)
        {
            visited[i]=1;
            if(checkCycle(visited,i)) return false;
            visited[i]=2;
        }
        return true;
    }
};

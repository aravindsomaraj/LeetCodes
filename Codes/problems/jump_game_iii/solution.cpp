class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        int n = arr.size();
        vector<int> vis (n,0);
        // vis[start]=1;
        int y = DFS(arr,start,vis);
        
        bool x = (y==1)? true:false;
        return x;
    }
    
    int DFS(vector<int>& arr, int v, vector<int>& vis)
    {
        
        
        if(v>=0 && v<arr.size() && vis[v]==0)
        {
            vis[v]=1;
            return (arr[v]==0 || DFS(arr,v-arr[v],vis) || DFS(arr,v+arr[v],vis));
        }
        
        return 0;
//         int y=0;
//         if(v+arr[v] <= arr.size()-1 && vis[v+arr[v]]==-1)
//         {
//             vis[v+arr[v]]=1;
//             y = DFS(arr,v+arr[v],vis);
//         }
//         if(y==1)
//             return y;
        
//         if(v-arr[v] >=0 && vis[v-arr[v]]==-1)
//         {
//             vis[v-arr[v]]=1;
//             y = DFS(arr,v-arr[v],vis);
//         }
        
//         return y;
    }
};
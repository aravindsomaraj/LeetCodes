class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size(); // extracting the size of the array
        
        // traverse from the array
        for(int i = 0; i < n - 1; i++)
        {
            arr[i + 1] = arr[i] ^ arr[i + 1]; // (prev answer xor current index)
        }
        
        return arr[n- 1]; // return left over element
    }
};

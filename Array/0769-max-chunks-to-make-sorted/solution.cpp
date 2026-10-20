class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int maxElement = -1;
        int chunkCount = 0;

        // Iterate over the array
        for (int i = 0; i < n; ++i) {
            // Track the maximum element encountered so far
            maxElement = max(maxElement, arr[i]);
            
            // If the maximum element is equal to the current index,
            // it means we can partition the array here.
            if (maxElement == i) {
                ++chunkCount;
            }
        }

        return chunkCount;
    }
};

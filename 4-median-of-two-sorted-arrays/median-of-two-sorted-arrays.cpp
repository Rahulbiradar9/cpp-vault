class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged = nums1;
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        sort(merged.begin(), merged.end());
        int n = merged.size();
            if (n % 2 == 1) { 
        return (double)merged[n / 2]; 
    } else { 
        int mid1 = merged[(n / 2) - 1];
        int mid2 = merged[n / 2];
        return (mid1 + mid2) / 2.0; 
    }
    }
};
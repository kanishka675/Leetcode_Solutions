class Solution {
public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2){
    int i = 0, j = 0;
    vector<int> merged;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
            merged.push_back(nums1[i]);
            i++;
        } else {
            merged.push_back(nums2[j]);
            j++;
        }
    }

    // Copy remaining elements of arr1
    while (i < nums1.size()) {
        merged.push_back(nums1[i]);
        i++;
    }

    // Copy remaining elements of arr2
    while (j < nums2.size()) {
        merged.push_back(nums2[j]);
        j++;
    }

    return merged;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = merge(nums1, nums2);
        int n = ans.size();
        if(n % 2 == 0){
            return (ans[n / 2 - 1] + ans[n / 2]) / 2.0;
        }
        else{
            return ans[n / 2];
        }
    }
};
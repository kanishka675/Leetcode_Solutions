class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 0;
        int end = n-1;
        
        while(st<=end){
            int mid = st + end-st/2;

            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;

    }
};
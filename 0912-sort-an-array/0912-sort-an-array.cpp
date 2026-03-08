class Solution {
public:
    void merge(vector<int> &arr, int st,int mid, int end){ //O(n)
    vector <int> temp;
    int i = st;
    int j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){ // remaining elements of left half 
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){ //remaining elements of right half
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx< temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }

}

void mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;

        mergeSort(arr,st,mid); // left half
        mergeSort(arr,mid+1,end); // right half
        merge(arr,st,mid,end);
    }
}
    vector<int> sortArray(vector<int>& arr) {
        mergeSort(arr,0,arr.size()-1);
        return arr;
    }
};
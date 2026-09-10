class Solution {
public:

void merge(vector<int> & arr, int start, int mid, int end) {

    int i = start;
    int j = mid + 1;
    int index = 0;

    int temp[end - start + 1];

    while (i <= mid && j <= end) {

        if (arr[i] <= arr[j]) {
            temp[index] = arr[i];
            i++;
        }
        else {
            temp[index] = arr[j];
            j++;
        }

        index++;
    }

   
    while (i <= mid) {
        temp[index] = arr[i];
        i++;
        index++;
    }

    while (j <= end) {
        temp[index] = arr[j];
        j++;
        index++;
    }

    index = 0;

    while (start <= end) {
        arr[start] = temp[index];
        start++;
        index++;
    }
}

void mergeSort(vector<int> &arr, int start, int end) {

    if (start == end) {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
   
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}


    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);

        return nums;
    }
};
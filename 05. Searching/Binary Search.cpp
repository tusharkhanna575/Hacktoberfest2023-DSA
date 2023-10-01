class Solution {
  public:
  
    int search(int arr[], int low, int high, int k){
        if(high < low) return -1;
        int mid = low + (high - low)/2;
        if(arr[mid] == k) return mid;
        else if(k < arr[mid]){
            return search(arr,low,mid-1,k);
        }
        else{
            return search(arr,mid +1,high,k);
        }
    }
  
    int binarysearch(int arr[], int n, int k) {
        int low = 0;
        int high = n-1;
        int ans = search(arr,low,high,k);
        return ans;
    }
};

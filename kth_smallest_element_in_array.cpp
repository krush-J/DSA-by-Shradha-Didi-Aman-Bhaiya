// time complexity - o(n)
int kthSmallest(int arr[], int l, int r, int k) {
         priority_queue<int> que;
    while(l <= r){
        que.push(arr[l]);
        l++;
    }
    int t = r - k;
    while(t-- > -1)
        que.pop();
    return que.top();
}
// time complexity - o(k * len)
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    while(--k >= 0){
        l = 0;
        for(int i = 1; i <= r; i++)
            if(arr[i] < arr[l] && arr[i] != INT_MAX)
                l = i;
        if(k == 0)break;
        arr[l] = INT_MAX;
    }
    return arr[l];
}
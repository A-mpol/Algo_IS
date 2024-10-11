void QuickSortHoarePartition(int * arr, int left, int right) {
    int i = left;
    int j = right;
    int mid = arr[left + (right - left) / 3];
    
    int tmp;
    while (i <= j) {
        while (arr[i] < mid) {
            ++i;
        }
        while (arr[j] > mid) {
            --j;
        }
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            
            ++i;
            --j;
        }
    }
    
    if (left < j) {
        QuickSortHoarePartition(arr, left, j);
    }
    if (right > i) {
        QuickSortHoarePartition(arr, i, right);
    }
}



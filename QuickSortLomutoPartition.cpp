int partition(int * arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    
    int tmp;
    for (int j = left; j < right; ++j) {
        if (arr[j] <= pivot) {
            i++;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    tmp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = tmp;
    
    return i + 1;
}

void QuickSortLomutoPartition(int * arr, int left, int right) {
    if (left < right) {
        int q = partition(arr, left, right);
        
        QuickSortLomutoPartition(arr, left, q - 1);
        QuickSortLomutoPartition(arr, q + 1, right);
    }
}



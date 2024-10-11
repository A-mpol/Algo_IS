 void merge(int * arr, int left, int mid, int right) {
    int len1 = mid - left + 1;
    int len2 = right - mid;
  
    int left_mas[len1];
    int right_mas[len2];
  
    for (int i = 0; i < len1; ++i)
        left_mas[i] = arr[left + i];
    
    for (int j = 0; j < len2; ++j)
        right_mas[j] = arr[mid + 1 + j];
  
    int i = 0;
    int j = 0;
    int k = left;
  
    while (i < len1 && j < len2) {
        if (left_mas[i] <= right_mas[j]) {
            arr[k] = left_mas[i];
            ++i;
        } else {
            arr[k] = right_mas[j];
            ++j;
        }
        ++k;
    }
      
    while (i < len1) {
        arr[k] = left_mas[i];
        ++i;
        ++k;
    }
  
    while (j < len2) {
        arr[k] = right_mas[j];
        ++j;
        ++k;
    }
}
  

void mergeSort(int * arr, int start, int end) {
    if (start >= end)
        return;
  
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}



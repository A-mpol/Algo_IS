void InsertionSort(int * arr, int size) {
    int element;
    for (int i = 1; i < size; ++i) {
        element = arr[i];
        for (int j = i - 1; j >= 0; --j) {
            if (arr[j] > element) {
                arr[j + 1] = arr[j];
                if (j == 0) {
                    arr[0] = element;
                }
                continue;
            }
            arr[j + 1] = element;
            break;
        }
    }
}



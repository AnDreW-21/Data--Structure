#include <iostream>

using namespace std;


void print_arr(int nums[], int length) {
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}






void bubbleSort(int nums[], int length) {
    for (int i = 0; i < length; i++) {
        bool swapped = false;
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                // int temp = nums[j];
                // nums[j] = nums[j+1];
                // nums[j+1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    cout << "Sorted By Bubble Sort: ";
    print_arr(nums, length);
}


void selectionSort(int nums[], int length) {
    int minValue, minIndex;

    // nums.length - 1 because the last element will already be in its sorted place no need for checking.
    for (int i = 0; i < length - 1; i++) {
        minValue = nums[i];
        minIndex = i;

        for (int j = i + 1; j < length; j++) {
            // For descending order switch the sign
            if (nums[j] < minValue) {
                minValue = nums[j];
                minIndex = j;
            }
        }

        swap(nums[i], nums[minIndex]);
    }

    cout << "Sorted By Selection Sort: ";
    print_arr(nums, length);
}


void insertionSort(int nums[], int length) {
    int key;

    for (int i = 1; i < length; i++) {
        key = nums[i];
        int j = i;

        // For descending order switch the sign
        while (j >= 1 && nums[j - 1] > key) {
            nums[j] = nums[j - 1];
            j--;
        }

        nums[j] = key;
    }

}


void shellSort(int nums[], int length) {
    // Rearrange elements at each n/2, n/4, n/8, ... intervals
    for (int interval = length / 2; interval > 0; interval /= 2) {

        for (int i = interval; i < length; i++) {
            int key = nums[i];
            int j = i;

            while (j >= interval && nums[j - interval] > key) {
                nums[j] = nums[j - interval];
                j -= interval;
            }

            nums[j] = key;
        }
    }
    cout << "Sorted By Shell Sort: ";
    print_arr(nums, length);
}

void merge(int nums[], int start, int mid, int end) {
    int leftLength = mid - start + 1;
    int rightLength = end - mid;
    int *arrLeft = new int[leftLength];
    int *arrRight = new int[rightLength];
    for (int i = 0; i < leftLength; ++i) {
        arrLeft[i] = nums[start + i];
    }
    for (int i = 0; i < rightLength; ++i) {
        arrRight[i] = nums[mid + i + 1];
    }
    int key = start;
    int i = 0;
    int j = 0;
    while (j < leftLength && i < rightLength) {
        if (arrLeft[j] > arrRight[i]) {
            nums[key] = arrRight[i];
            i++;
        } else {
            nums[key] = arrLeft[j];
            j++;
        }
        key++;
    }
    while (j < leftLength) {
        nums[key] = arrLeft[j];
        j++;
        key++;
    }
    while (i < rightLength) {
        nums[key] = arrRight[i];
        i++;
        key++;
    }
}

void mergeSort(int nums[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, start, mid, end);
    }
}

int partitionMiddle(int nums[], int start, int end, int pivot) {
    while (start <= end) {
        while (nums[start] < pivot) {
            start++;
        }

        while (nums[end] > pivot) {
            end--;
        }

        if (start <= end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    //The right spliting (Pivot in place) position of the array
    return start;
}

void quickSortMiddlePivot(int nums[], int start, int end) {
    if (start < end) {
        int pivot = nums[(start + end) / 2];

        int pivotInRightPlaceIndex = partitionMiddle(nums, start, end, pivot);

        quickSortMiddlePivot(nums, start, pivotInRightPlaceIndex - 1);
        quickSortMiddlePivot(nums, pivotInRightPlaceIndex, end);

    }
}

void quickSortMiddlePivot(int nums[], int length) {
    quickSortMiddlePivot(nums, 0, length - 1);
    cout << "Sorted By Quick Sort: ";
    print_arr(nums, length);
}


int partitionEnd(int nums[], int low, int high) {

    // select the rightmost element as pivot
    int pivot = nums[high];

    // pointer for greater element
    int i = low;

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (nums[j] <= pivot) {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i

            // swap element at i with element at j
            swap(nums[i], nums[j]);
            i++;
        }
    }

    // swap pivot with the greater element at i
    swap(nums[i], nums[high]);

    // return the partition point
    return i;
}

void quickSortEndPivot(int nums[], int start, int end) {
    if (start < end) {
        int pivotInRightPlaceIndex = partitionEnd(nums, start, end);
        quickSortEndPivot(nums, start, pivotInRightPlaceIndex - 1);
        quickSortEndPivot(nums, pivotInRightPlaceIndex + 1, end);

    }
}


void quickSortEndPivot(int nums[], int length) {
    quickSortEndPivot(nums, 0, length - 1);
    cout << "Sorted By Quick Sort: ";
    print_arr(nums, length);
}


int main() {
    int nums[] = {21, 20, 32, 5, 6, 13, 8, 23};
    int length = 8;
    cout << "original array: ";
    //print_arr(nums, length);
    //bubbleSort(nums, length);
    //selectionSort(nums, length);
    //insertionSort(nums, length);
    shellSort(nums, length);
    mergeSort(nums, 0, length - 1);
    print_arr(nums, length);
    //quickSortMiddlePivot(nums, length);
    //cout<<(13/2);
    return 0;
}
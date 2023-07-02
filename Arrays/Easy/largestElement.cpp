#include <iostream>

int findLargestElement(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largestElement = findLargestElement(arr, size);

    std::cout << "The largest element in the array is: " << largestElement << std::endl;

    return 0;
}

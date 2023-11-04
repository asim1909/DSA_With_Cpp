#include <iostream>
#include <vector>
using namespace std;

void heapifyDown(vector<int>& arr, int index, int size) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if (leftChild < size && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }
    if (rightChild < size && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    if (largest != index) {
        swap(arr[index], arr[largest]);
        heapifyDown(arr, largest, size);
    }
}

void heapSort(vector<int>& arr) {
    int size = arr.size();

    for (int i = size / 2 - 1; i >= 0; i--) {
        heapifyDown(arr, i, size);
    }

    for (int i = size - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapifyDown(arr, 0, i);
    }
}

int main() {
    vector<int> array = {4, 10, 3, 5, 1};

    heapSort(array);

    for (int element : array) {
        cout << element << " ";
    }
    return 0;
}

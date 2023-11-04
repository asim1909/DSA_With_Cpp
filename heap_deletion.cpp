#include <iostream>
#include <vector>
using namespace std;

void heapifyDown(vector<int>& heap, int index) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
        largest = leftChild;
    }
    if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
        largest = rightChild;
    }

    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(heap, largest);
    }
}

int deleteFromMaxHeap(vector<int>& heap) {
    if (heap.empty()) {
        cerr << "Heap is empty." << std::endl;
        return -1;
    }

    int root = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(heap, 0);
    return root;
}

int main() {
    vector<int> maxHeap = {8, 5, 3};

    int deletedElement = deleteFromMaxHeap(maxHeap);
    cout << "Deleted element: " << deletedElement << endl;

    for (int element : maxHeap) {
        cout << element << " ";
    }
    return 0;
}

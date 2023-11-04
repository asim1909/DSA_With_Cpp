#include <iostream>
#include <vector>
using namespace std;

void heapifyUp(vector<int>& heap, int index) {
    int parent = (index - 1) / 2;
    while (index > 0 && heap[index] > heap[parent]) {
        swap(heap[index], heap[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

void insertIntoMaxHeap(vector<int>& heap, int element) {
    heap.push_back(element);
    int index = heap.size() - 1;
    heapifyUp(heap, index);
}

int main() {
    vector<int> maxHeap;

    insertIntoMaxHeap(maxHeap, 5);
    insertIntoMaxHeap(maxHeap, 3);
    insertIntoMaxHeap(maxHeap, 8);

    for (int element : maxHeap) {
        cout << element << " ";
    }
    return 0;
}

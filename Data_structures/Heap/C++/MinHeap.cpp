#include "MinHeap.h"
#include <iostream>
#include <cmath>

using namespace std;

MinHeap::MinHeap(int c) : capacity{c}, heap_size{} {
    arr = new int[capacity];
}

void MinHeap::linear_search(int v) const {
    for (int i{}; i < capacity; ++i) {
        if (arr[i] == v) {
            cout << v << " is present in the heap" << endl;
            return;
        }
    }
    cout << v << " not found in the heap" << endl;
}

void MinHeap::print() const {
    for (int i{}; i < heap_size; ++i) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int MinHeap::height() const {
    return ceil(log2(heap_size + 1) - 1);
}

void MinHeap::insert(int val) {
    if (heap_size == capacity) {
        cout << "Heap overflow" << endl;
    } else {
        heap_size++;
        int i = heap_size - 1;
        arr[i] = val;
        while (i != 0 && arr[parent(i)] > arr[i]) {
            int temp = arr[parent(i)];
            arr[parent(i)] = arr[i];
            arr[i] = temp;
            i = parent(i);
        }
        cout << "Value " << val << " inserted" << endl;
    }
}

int MinHeap::parent(int i) {
    return (i - 1) / 2;
}

int MinHeap::left_child(int i) {
    return (2 * i + 1);
}

int MinHeap::right_child(int i) {
    return (2 * i + 2);
}

int MinHeap::extractMin() {
    if (heap_size <= 0)
        return -1;
    else if (heap_size == 1) {
        heap_size--;
        return arr[0];
    }
    int root = arr[0];
    arr[0] = arr[heap_size - 1];
    heap_size--;
    heapify(0);
    return root;
}

void MinHeap::heapify(int i) {
    int l = left_child(i);
    int r = right_child(i);
    int smallest = i;
    if (l < heap_size && arr[l] < arr[smallest]) {
        smallest = l;
    }
    if (r < heap_size && arr[r] < arr[smallest]) {
        smallest = r;
    }
    if (smallest != i) {
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
        heapify(smallest);
    }
}

void MinHeap::deleteKey(int i) {
    if (i > heap_size - 1) {
        return;
    } else if (i == heap_size - 1) {
        heap_size--;
        return;
    } else {
        arr[i] = arr[heap_size - 1];
        heap_size--;
        heapify(i);
    }
}

void MinHeap::heapSort() {
    int *sorted = new int[capacity];
    for (int i{}; i < capacity; ++i) {
        sorted[i] = extractMin();
        cout << sorted[i] << "\t";
    }
}
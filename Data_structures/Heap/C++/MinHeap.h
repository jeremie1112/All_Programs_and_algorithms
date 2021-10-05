#ifndef INC_90___HEAP_MINHEAP_H
#define INC_90___HEAP_MINHEAP_H


class MinHeap {
public:
    int *arr;
    int capacity; //max size
    int heap_size; //current size

    explicit MinHeap(int);

    void linear_search(int) const;

    void print() const;

    int height() const;

    void insert(int);

    static int parent(int);

    static int left_child(int);

    static int right_child(int);

    int extractMin();

    void heapify(int);

    void deleteKey(int);

    void heapSort();
};


#endif //INC_90___HEAP_MINHEAP_H

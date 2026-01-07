#include <iostream>
using namespace std;

void insertHeap(int heap[], int &n, int value) {
    n++;
    heap[n] = value;
    int i = n;
    while (i > 1 && heap[i] > heap[i / 2]) {
        swap(heap[i], heap[i / 2]);
        i /= 2;
    }
}

void deleteHeap(int heap[], int &n) {
    if (n == 0) return;
    heap[1] = heap[n];
    n--;
    int i = 1;
    while (true) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int  largest = i;
        
        if (left <= n && heap[left] > heap[largest])
            largest = left;
        if (right <= n && heap[right] > heap[largest])
            largest = right;
        if (largest == i) break;
        swap(heap[i], heap[largest]);
        i = largest;
    }
}

int main() {
    int heap[100];
    int n = 0;

    insertHeap(heap, n, 50);
    insertHeap(heap, n, 30);
    insertHeap(heap, n, 40);
    insertHeap(heap, n, 10);

    deleteHeap(heap, n);

    for (int i = 1; i <= n; i++)
        cout << heap[i] << " ";

    return 0;
}

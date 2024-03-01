#include <iostream>
#include <vector>
#include <string>
#include "heap.h"

using namespace std;

template<typename T>
struct Greater
{
    bool operator()(const T& a, const T& b) const {
        return a > b;
    }
};

int main() {
    cout << "testing ints" << endl;
    Heap<int> minHeap;
    minHeap.push(3);
    minHeap.push(2);
    minHeap.push(1);
    minHeap.push(0);

    cout << "top: " << minHeap.top() << endl;

    Heap<int, Greater<int>> maxHeap;
    maxHeap.push(1);
    maxHeap.push(2);
    maxHeap.push(3);
    cout << "Max-Heap top: " << maxHeap.top() << endl;

    // Test with strings
    cout << "\nTesting with strings:" << endl;
    Heap<string> strMinHeap;
    strMinHeap.push("apple");
    strMinHeap.push("banana");
    strMinHeap.push("orange");
    cout << "Min-Heap top: " << strMinHeap.top() << endl;

    Heap<string, greater<string>> strMaxHeap;
    strMaxHeap.push("apple");
    strMaxHeap.push("banana");
    strMaxHeap.push("orange");
    cout << "Max-Heap top: " << strMaxHeap.top() << endl;

    return 0;
}
#include <bits/stdc++.h>
#define int long long int

using namespace std;

class MinHeap
{
private:
    vector<int> heap;

    int getLeftChildIndex(int parentIndex)
    {

        return 2 * parentIndex + 1;
    }

    int getRightChildIndex(int parentIndex)
    {

        return 2 * parentIndex + 2;
    }

    int getParentIndex(int childIndex)
    {

        if (childIndex == 0)
            return 0;
        else if (childIndex % 2 != 0)
            return childIndex / 2;
        else
            return (childIndex - 1) / 2;
    }

    // O(h) = O(logN) since heap is a complete binary tree
    void heapifyDown(int nodeIndex, int heapSize)
    {

        int minimumIndex = nodeIndex, left = getLeftChildIndex(nodeIndex), right = getRightChildIndex(nodeIndex);

        if (left < heapSize && heap[left] < heap[minimumIndex])
            minimumIndex = left;
        if (right < heapSize && heap[right] < heap[minimumIndex])
            minimumIndex = right;

        if (nodeIndex != minimumIndex)
        {

            swap(heap[nodeIndex], heap[minimumIndex]);
            heapifyDown(minimumIndex, heapSize);
        }
    }

    // O(h) = O(logN) since heap is a complete binary tree
    void heapifyUp(int nodeIndex, int heapSize)
    {

        int minimumIndex = nodeIndex, left = getLeftChildIndex(nodeIndex), right = getRightChildIndex(nodeIndex);

        if (left < heapSize && heap[left] < heap[minimumIndex])
            minimumIndex = left;
        if (right < heapSize && heap[right] < heap[minimumIndex])
            minimumIndex = right;

        if (nodeIndex != minimumIndex)
        {

            swap(heap[nodeIndex], heap[minimumIndex]);
            heapifyUp(getParentIndex(nodeIndex), heapSize);
        }
    }

public:

    // O(logN)
    void push(int number)
    {

        heap.push_back(number);
        int parentIndex = getParentIndex(heap.size()-1);
        heapifyUp(parentIndex, heap.size());
    }

    // O(logN)
    void pop()
    {

        if (heap.size())
        {

            swap(heap[0], heap[heap.size() - 1]);
            heap.pop_back();
            heapifyDown(0, heap.size());
        }
    }

    // O(1)
    int top()
    {

        if (!heap.size())
        {
            return 0;
        }
        else
        {
            return heap[0];
        }
    }
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    MinHeap hp = MinHeap();

    hp.push(19);
    hp.push(16);
    hp.push(21);
    hp.push(26);
    hp.push(14);
    hp.push(19);
    hp.push(68);
    hp.push(65);
    hp.push(30);
    hp.print_heap();
    hp.pop();
    hp.print_heap();

    cout << (float)clock() / CLOCKS_PER_SEC << endl;
    return 0;
}
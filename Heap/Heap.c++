#include<bits/stdc++.h>
using namespace std;

class heap{
public:
    int arr[100];
    int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap(){
        if(size == 0){
            cout << "Noting to delete." << endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[leftIndex], arr[i]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[rightIndex], arr[i]);
                i = rightIndex;
            }
            else{
                return;
            }
        } 
    }
};


void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main(){
    heap x;
    x.insert(55);
    x.insert(25);
    x.insert(30);
    x.insert(45);
    x.insert(65);
    x.insert(75);
    x.insert(85);

    x.print();

    // x.deleteFromHeap();

    // 85 65 75 45 25 55 30

    // int arr[8] = {-1, 55, 25, 30, 45, 65, 75, 85};
    // int n = 8;
    // for(int i = n / 2; i > 0; i--){
    //     heapify(arr, n, i);
    // }
    // cout << "Printing the array: " << endl;
    // for(int i = 1; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int arr[11] = {-1, 30, 78, 24, 27, 11, 3, 8, 10, 25, 99};
    // int n = 10;
    // for (int i = n / 2; i > 0; i--)
    // {
    //     heapify(arr, n, i);
    // }

    // cout << "Printing the heapified array:- " << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // heapsort(arr, n);

    // cout << "Printing the sorted array:- " << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    priority_queue<int> pq;
    cout << "Max heap: " << endl;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    cout << "Min heap: " << endl;
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(30);
    minHeap.push(40);
    minHeap.push(50);
    minHeap.push(60);

    cout << minHeap.top() << endl;

    minHeap.pop();

    cout << minHeap.top() << endl;
    return 0;
}
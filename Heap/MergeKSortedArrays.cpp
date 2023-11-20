#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    int arr_row;
    int arr_col;

    node(int data, int row, int col)
    {
        this->data = data;
        arr_row = row;
        arr_col = col;
    }
};

class compare
{
public:
    bool operator()(node *a, node *b)
    {
        return a->data > b->data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    priority_queue<node *, vector<node *>, compare> minHeap;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        node *temp = new node(kArrays[i][0], i, 0);
        minHeap.push(temp);
    }

    while (minHeap.size() > 0)
    {
        node *temp = minHeap.top();
        minHeap.pop();
        ans.push_back(temp->data);

        int row_num = temp->arr_row;
        int col_num = temp->arr_col;

        if (col_num + 1 < kArrays[row_num].size())
        {
            node *next =
                new node(kArrays[row_num][col_num + 1], row_num, col_num + 1);
            minHeap.push(next);
        }
    }
    return ans;
}

int main(){
    return 0;
}
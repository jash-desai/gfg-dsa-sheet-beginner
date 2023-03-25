class Solution
{
    public:
    priority_queue<int, vector<int>, greater<int>> pq;
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        pq.push(arr[i]);
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=0; i<n; i++){
            heapify(arr,n,i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=0; i<n; i++){
            arr[i] = pq.top();
            pq.pop();
        }
    }
};

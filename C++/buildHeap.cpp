#include<iostream>
#include<vector>
using namespace std;
 
// function for max heap( max heap is heap in which parent is larger than children)
void up_heapyfy(vector<int> &my_heap , int idx){  // idx = index
    if(idx==0){
        return;
    }
    int parent_idx=(idx-1)/2;
    if(my_heap[parent_idx] < my_heap[idx]){
            //function for swapping
        swap(my_heap[parent_idx] , my_heap[idx]);  
        up_heapyfy(my_heap,parent_idx); //recursively call 
    }
}
 
void insert(vector<int> &my_heap, int key){
 
    my_heap.push_back(key);
    up_heapyfy(my_heap, my_heap.size()-1);
}
 
void down_heapyfy(vector<int> &my_heap, int idx){
    int left_idx = 2*idx +1;
    int right_idx = 2*idx +2;
    if(left_idx>=my_heap.size() && right_idx>=my_heap.size()){
        return;
    }
    int temp_idx=idx;
    if(left_idx<my_heap.size() && my_heap[left_idx]>my_heap[temp_idx]){
        temp_idx=left_idx;
    }
    if(right_idx<my_heap.size() && my_heap[right_idx]>my_heap[temp_idx]){
        temp_idx=right_idx;
    }
    if(temp_idx==idx){
        return;
    }
    swap(my_heap[idx],my_heap[temp_idx]);
    down_heapyfy(my_heap,temp_idx);
    return;
}
void build_heap(vector<int> &my_heap){
    for(int j=0;j<my_heap.size();j++){
        up_heapyfy(my_heap,j);
    }
}
//optimised version of build heap
// we just use down heapyfy in reverse order
void build_heap_optimised(vector<int> &my_heap){
    for( int i=my_heap.size()-1 ; i>=0;i--){
        down_heapyfy(my_heap,i);
    }
}
 
void delete_peak(vector<int> &my_heap){
    swap(my_heap[0] , my_heap[my_heap.size()-1]);
    my_heap.pop_back();
    down_heapyfy(my_heap,0);
    return;
}
 
void display(vector<int> my_heap){
    for(auto i:my_heap){
        cout<<i<<" ";
    }
    return;
}
 
int main(){
    vector<int> my_heap;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        my_heap.push_back(key);
 
    }
    build_heap(my_heap);  // unotimised version of build heapy
    display(my_heap);
    cout<<endl;
    build_heap_optimised(my_heap);
    display(my_heap);
}

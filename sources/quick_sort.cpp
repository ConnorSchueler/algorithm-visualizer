#include "quick_sort.hpp"
#include <utility>

QuickSort::QuickSort(int size, int max_val, int delay):Visualizer(size, max_val, delay){}

void QuickSort::sort (){
    quickSortRec(0, static_cast<int>(data.size()) - 1);
    renderSorted();
}

void QuickSort::quickSortRec(int low, int high){
    if (low >= high){
        return;
    }
    int piv_index = partition(low, high);
    quickSortRec(low, piv_index - 1); // sort left 
    quickSortRec(piv_index + 1, high); // sort right
}

int QuickSort::partition(int low, int high){
    int piv=data[high];
    int swap = low - 1;
    mark_b=high;
    for(int i=low; i<high; i++){
        mark_a=i;
        render();
        sleep();
        if (data[i] < piv){
            swap++;
            std::swap(data[i], data[swap]);
        }
    }
    std::swap(data[swap+1], data[high]);
    return swap+1;
}
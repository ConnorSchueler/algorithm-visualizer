#include "selection_sort.hpp"
#include <utility>

SelectionSort::SelectionSort(int size, int max_val, int delay): Visualizer(size, max_val, delay){}

void SelectionSort::sort(){
    for(size_t i=0; i<data.size(); i++){
        size_t min_index = i;
        for (size_t j=i+1;j<data.size(); j++){
            mark_a=min_index;
            mark_b=j;
            render();
            sleep();
            if (data[j]<data[min_index]){min_index=j;}
        }
        std::swap(data[min_index], data[i]);
    }
    renderSorted();
}
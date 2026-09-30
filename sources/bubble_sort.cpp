#include "bubble_sort.hpp"
#include <utility>

BubbleSort::BubbleSort(int size, int max_val, int delay): Visualizer(size, max_val, delay){};

void BubbleSort::sort(){
    bool sorted=false;
    while(!sorted){
            mark_a=0;
            mark_b=1;
            sorted=true;
        while(static_cast<size_t>(mark_b)<data.size()){
            if(data[mark_a]>data[mark_b]){
                std::swap(data[mark_a], data[mark_b]);
                sorted=false;
            }
            render();
            sleep();
            mark_a++;
            mark_b++;
        }
    }
    resetMarkers();
    render();
}
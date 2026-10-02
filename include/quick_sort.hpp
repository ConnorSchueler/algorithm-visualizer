#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include "visualizer.hpp"

class QuickSort: public Visualizer {
    void quickSortRec(int low, int high);
    int partition(int low, int high);
    
    public:
    QuickSort(int size, int max_val, int delay);
    void sort() override;
};

#endif
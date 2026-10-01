#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "visualizer.hpp"

class SelectionSort: public Visualizer{
    public:
    SelectionSort(int size, int max_val, int delay);
    void sort() override;
};

#endif
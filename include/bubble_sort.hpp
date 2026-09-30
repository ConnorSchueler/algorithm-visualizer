#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "visualizer.hpp"

class BubbleSort: public Visualizer{
    public:
    BubbleSort(int size, int max_val, int delay);
    void sort() override;
};

#endif
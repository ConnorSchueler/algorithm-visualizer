#include "bubble_sort.hpp"
#include "selection_sort.hpp"
#include "get_input.hpp"
#include <iostream>

int main(){
    std::cout << "\033[2J\033[1;1H"; // clear screen
    std::cout << "\033[36m"; // blue
    std::cout << "========================================\n";
    std::cout << "          Algorithm Visualizer          \n";
    std::cout << "========================================\n";
    std::cout << "\033[0m"; // reset to white

    int size = getValidInput(" [1] Number of bars (2-100): ", 2, 100);
    int height = getValidInput(" [2] Maximal bar height (5-50): ", 5, 50);
    int delay = getValidInput(" [3] Delay in ms (1-500): ", 1, 500);
    int algo = getValidInput(" [4] Algorithm (1=Bubble, 2=Selection): ", 1, 2);

    Visualizer* vis = nullptr;
    switch (algo){
        case 1:
            vis = new BubbleSort(size, height, delay);
            break;
        case 2:
            vis = new SelectionSort(size, height, delay);
            break;
        default:
        break;
    }

    vis->sort();
    delete vis; 
}
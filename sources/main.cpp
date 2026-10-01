#include "bubble_sort.hpp"
#include "selection_sort.hpp"
#include <iostream>

int main(){
    std::cout << "\033[2J\033[1;1H"; // clear screen
    std::cout << "\033[36m"; // blue
    std::cout << "========================================\n";
    std::cout << "          Algorithm Visualizer          \n";
    std::cout << "========================================\n";
    std::cout << "\033[0m"; // reset to white

    int size, height, delay, algo;
    std::cout << " [1] Number of bars: ";
    std::cin >> size;
    std::cout << " [2] Maximal bar height: ";
    std::cin >> height;
    std::cout << " [3] Delay in ms: ";
    std::cin >> delay;
    std::cout << " [4] Algorithm (1=Bubble, 2=Selection): ";
    std::cin >> algo;

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
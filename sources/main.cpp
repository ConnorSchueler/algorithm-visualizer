#include "bubble_sort.hpp"
#include <iostream>

int main(){
    std::cout << "\033[2J\033[1;1H"; // clear screen
    std::cout << "\033[36m"; // blue
    std::cout << "========================================\n";
    std::cout << "          Algorithm Visualizer          \n";
    std::cout << "========================================\n";
    std::cout << "\033[0m"; // reset to white

    int size, height, delay;
    std::cout << " [1] Number of bars: ";
    std::cin >> size;
    std::cout << " [2] Maximal bar height: ";
    std::cin >> height;
    std::cout << " [3] Delay in ms: ";
    std::cin >> delay;
    BubbleSort bub(size, height, delay);
    bub.sort();
}
#include "visualizer.hpp"
#include <random>
#include <iostream>
#include <thread>
#include <chrono>

Visualizer::Visualizer(int size, int max_val, int delay): max_val(max_val), delay(delay), mark_a(-1), mark_b(-1) {
    data.resize(size);
    generateData();
}

Visualizer::~Visualizer(){}

void Visualizer::generateData(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,max_val);

    for (int &val : data){
        val=dist(gen);
    }
}

void Visualizer::render(){
    std::cout << "\033[2J\033[1;1H"; // clear screen
    for (int i=max_val; i>0; i--){
        for (int j=0; static_cast<size_t>(j)<data.size(); j++)
        {
            if (data[j]>=i){
                if(j==mark_a or j==mark_b){
                    std::cout << "\033[31m"; // red
                    std::cout << " █ "; // marked data
                    std::cout << "\033[0m"; // reset to white
                } else {
                    std::cout << " █ "; // data
                }
            } else {
                    std::cout << "   "; 
            }
        
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void Visualizer::sleep(){
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
}

void Visualizer::resetMarkers(){
    mark_a=-1;
    mark_b=-1;
}

void Visualizer::renderSorted(){
    resetMarkers();
    std::cout << "\033[32m";
    render();
    std::cout << "\033[0m";
}
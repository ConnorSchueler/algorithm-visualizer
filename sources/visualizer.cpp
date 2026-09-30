#include "visualizer.hpp"
#include <random>
#include <iostream>

Visualizer::Visualizer(int size, int max_val, int delay): max_val(max_val), delay(delay), mark_a(-1), mark_b(-1) {
    data.resize(size);
}

void Visualizer::generateData(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,max_val);

    for (int &val : data){
        val=dist(gen);
    }
}

void Visualizer::render(){
    for (size_t i=max_val; i>0; i--){
        for (size_t j=0; j<data.size(); j++)
        {
            if (data[j]>=i){
                if(j==mark_a or j==mark_b){
                    std::cout << " ! "; // marked data
                } else {
                    std::cout << " # "; // data
                }
            } else {
                    std::cout << "   "; 
            }
        
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}
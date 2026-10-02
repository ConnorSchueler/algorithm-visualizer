#include "get_input.hpp"

int getValidInput(const std::string& prompt, int min_val, int max_val){
    int value;
    while(true){
        std::cout << prompt;

        try{
            std::cin >> value;

            if(std::cin.fail()){
                throw std::string(" Input must be a number!\n");
            }

            if(value < min_val or value > max_val){
                throw " Input must be between " + std::to_string(min_val) + " and " + std::to_string(max_val) + '\n';
            }

            return value;
        } catch (const std::string& e){
            std::cout << e;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
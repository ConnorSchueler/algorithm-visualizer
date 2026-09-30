#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include <vector>

class Visualizer {
    protected:
    std::vector<int> data;
    int max_val;
    int delay; // in ms

    int mark_a;
    int mark_b;

    public:
    Visualizer(int size, int max_val, int delay);
    virtual ~Visualizer();

    void render();
    void generateData();
    void sleep();
    void resetMarkers();

    virtual void sort() = 0;
};

#endif
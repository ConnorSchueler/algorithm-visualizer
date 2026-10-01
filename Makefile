CXX = g++
CXX_FLAGS = -std=c++20 -Wall -Wextra -Wshadow -Iinclude
TARGET = visualizer

SOURCES = sources/main.cpp sources/visualizer.cpp sources/bubble_sort.cpp sources/selection_sort.cpp
HEADERS = include/visualizer.hpp include/bubble_sort.hpp include/selection_sort.hpp

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXX_FLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
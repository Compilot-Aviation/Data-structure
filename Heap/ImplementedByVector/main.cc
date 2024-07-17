#include "heap.hh"
#include <iostream>

int main() {
    Heap heap;
    int numbers[] = {10, 2, 5, 6, 1, 7, 9, 24, 56};

    std::cout << "Adding numbers to the heap:" << std::endl;
    for (int num : numbers) {
        heap.add(num);
        std::cout << "Added " << num << ". Current heap: " << heap.toString() << std::endl;
    }

    std::cout << "\nFinal heap state: " << heap.toString() << std::endl;

    return 0;
}
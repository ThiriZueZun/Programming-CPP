#include <iostream>
#include <vector>

int main() {
    
    std::cout << "--- Creating an empty vector and adding elements ---" << std::endl;
    std::vector<int> v;
    v.push_back(3);
    std::cout << "Current vector: [3]" << std::endl;
    v.push_back(2);
    std::cout << "Current vector: [3, 2]" << std::endl;
    v.push_back(5);
    std::cout << "Current vector: [3, 2, 5]" << std::endl;
    std::cout << std::endl;

    std::cout << "--- Accessing elements by index ---" << std::endl;
    std::cout << "Element at index 0: " << v[0] << std::endl; // 3
    std::cout << "Element at index 1: " << v[1] << std::endl; // 2
    std::cout << "Element at index 2: " << v[2] << std::endl; // 5
    std::cout << std::endl;

    
    std::cout << "--- Getting the size ---" << std::endl;
    std::cout << "The size of the vector is: " << v.size() << std::endl; // 3
    std::cout << std::endl;

    
    std::cout << "--- Iterating with an indexed for loop ---" << std::endl;
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl << std::endl;

    
    std::cout << "--- Iterating with a range-based for loop ---" << std::endl;
    for (auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl << std::endl;

    // 6. Use back() and pop_back()
    std::cout << "--- Demonstrating back() and pop_back() ---" << std::endl;
    std::vector<int> v2;
    v2.push_back(5);
    v2.push_back(2);
    std::cout << "Last element: " << v2.back() << std::endl; // 2
    v2.pop_back();
    std::cout << "Last element after pop_back(): " << v2.back() << std::endl; // 5
    std::cout << std::endl;

    // 7. Initialize vectors in different ways
    std::cout << "--- Demonstrating different initialization methods ---" << std::endl;
    
    // Initialize with a list of elements
    std::vector<int> v3 = {2, 4, 2, 5, 1};
    std::cout << "Vector initialized with a list: ";
    for (auto x : v3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Initialize with a size (default value 0)
    std::vector<int> v4(10);
    std::cout << "Vector of size 10 (initial value 0): ";
    for (auto x : v4) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Initialize with a size and a specific value
    std::vector<int> v5(10, 5);
    std::cout << "Vector of size 10 (initial value 5): ";
    for (auto x : v5) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

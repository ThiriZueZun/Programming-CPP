#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // Required for sort, reverse, and random_shuffle
#include <random>    // For random number generation
#include <ctime>     // For seeding the random number generator
#include <cmath>     // For std::abs

void printVector(const std::vector<int>& v, const std::string& description) {
    std::cout << description << ": ";
    for (int val : v) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    // --- Demonstrate Iterators with a Vector ---
    std::vector<int> numbers = {5, 2, 8, 1, 9, 4};
    printVector(numbers, "Original vector");

    // Sorting using iterators
    std::sort(numbers.begin(), numbers.end());
    printVector(numbers, "Sorted vector");

    // Reversing using iterators
    std::reverse(numbers.begin(), numbers.end());
    printVector(numbers, "Reversed vector");

    // Shuffling using iterators (requires C++11 and up)
    unsigned seed = std::time(nullptr);
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));
    printVector(numbers, "Shuffled vector");

    std::cout << "\n----------------------------------------\n\n";

    // --- Demonstrate Iterators with a Set ---
    std::set<int> s = {3, 4, 6, 8, 12, 13, 14, 17};

    // Printing all elements in increasing order using iterators
    // This loop demonstrates the half-open range [s.begin(), s.end())
    std::cout << "Elements in the set (increasing order):\n";
    for (auto it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << "\n";
    }

    // Printing the largest element in the set
    auto it_largest = s.end();
    if (it_largest != s.begin()) {
        --it_largest;
        std::cout << "\nThe largest element in the set is: " << *it_largest << "\n";
    }

    std::cout << "\n----------------------------------------\n\n";

    // --- Demonstrate set specific iterator functions ---
    int x_find = 6;
    auto it_find = s.find(x_find);

    if (it_find != s.end()) {
        std::cout << "Using find(): " << x_find << " was found in the set.\n";
    } else {
        std::cout << "Using find(): " << x_find << " was NOT found in the set.\n";
    }

    std::cout << "\n----------------------------------------\n\n";

    // --- Finding the element nearest to x ---
    int x = 10;
    std::cout << "Finding the element nearest to " << x << " in the set.\n";

    // lower_bound returns an iterator to the first element >= x
    auto it = s.lower_bound(x);

    if (it == s.begin()) {
        // Case 1: All elements are greater than or equal to x.
        // The nearest element is the first one.
        std::cout << "The nearest element is: " << *it << "\n";
    } else if (it == s.end()) {
        // Case 2: All elements are less than x.
        // The nearest element is the last one.
        --it;
        std::cout << "The nearest element is: " << *it << "\n";
    } else {
        // Case 3: x is somewhere in the middle.
        int a = *it;
        --it;
        int b = *it;

        // Compare the distance of x to the two surrounding elements
        if (std::abs(x - b) < std::abs(a - x)) {
            std::cout << "The nearest element is: " << b << "\n";
        } else {
            std::cout << "The nearest element is: " << a << "\n";
        }
    }

    return 0;
}
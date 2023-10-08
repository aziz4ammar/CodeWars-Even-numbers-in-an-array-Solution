#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
    // Create a new vector to store the even numbers.
    std::vector<int> result;

    // Iterate through the input vector in reverse order.
    for (int i = arr.size() - 1; i >= 0 && n > 0; i--) {
        // Check if the current element is even.
        if (arr[i] % 2 == 0) {
            // Add the even number to the result vector.
            result.push_back(arr[i]);

            // Decrement the remaining count of even numbers to find.
            n--;
        }
    }

    // Reverse the result vector to maintain the original order of even numbers.
    std::reverse(result.begin(), result.end());

    return result;
}
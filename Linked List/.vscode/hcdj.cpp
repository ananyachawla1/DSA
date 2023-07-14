#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMeals(int N, int M, int K,  V) {
    sort(V.begin(), V.end());  // Sort the nutritional values in ascending order
    int meals = 0;             // Number of meals
    int i = 0;                 // Pointer to track the food items

    while (i < N) {
        int minVal = V[i];     // Minimum nutritional value for the current meal
        int maxVal = V[i];     // Maximum nutritional value for the current meal

        // Find the maximum nutritional value in the current meal
        for (int j = i; j < i + K && j < N; j++) {
            maxVal = max(maxVal, V[j]);
        }

        // Check if the difference between maximum and minimum nutritional value is within the limit
        if (maxVal - minVal <= M) {
            meals++;            // Increment the number of meals
            i += K;             // Move the pointer to the next food items
        } else {
            return -1;          // The food items cannot be divided into meals according to the criteria
        }
    }

    return meals;
}

int main() {
    int N = 8;                        // Number of food items
    int M = 2;                        // Maximum allowed nutritional value difference in a meal
    int K = 3;                        // Minimum number of food items required in one meal
    vector<int> V = { 3, 5, 6, 7, 8, 10, 12, 15 };  // Nutritional values of food items

    int result = minMeals(N, M, K, V);
    cout << result << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int lint; // Assuming `lint` is a typedef for a long long int

lint foodItems(int input1, int input2, int input3, vector<int>& inputA) {
    // Write your code here
    int N = input1;
    lint M = input2;
    int K = input3;
    vector<int> V = inputA;

    // Perform operations using the provided inputs
    
    // Return the result
}

int main() {
    // Test the function with example inputs
    int input1 = 5;
    int input2 = 10;
    int input3 = 3;
    vector<int> inputA = {1, 2, 3, 4, 5};

    try {
        lint result = foodItems(input1, input2, input3, inputA);
        cout << "Result: " << result << endl;
    } catch (const char* message) {
        cerr << "Error: " << message << endl;
    }
    
    return 0;
}
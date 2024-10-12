//22520468
//Nguyen Huy Hoang
//Session 02 - Exercise 04
#include <iostream>

using namespace std;

// Node structure for stack
struct Node {
    int index; // Index of the fruit in prices
    Node* next; // Pointer to the next node

    Node(int i) : index(i), next(nullptr) {}
};

// Stack implementation using a linked list
class Stack {
private:
    Node* topNode; // Pointer to the top node of the stack

public:
    Stack() : topNode(nullptr) {}

    // Push an index onto the stack
    void push(int index) {
        Node* newNode = new Node(index);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Pop an index from the stack
    void pop() {
        if (topNode) {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    // Get the index of the top element
    int top() {
        if (topNode) {
            return topNode->index;
        }
        return -1; // Error value
    }

    // Check if the stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // Destructor to clean up the stack
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Function to calculate the minimum coins needed to buy all fruits
int minimumCoins(int prices[], int n) {
    // Create a stack to hold indices
    Stack stack;

    // Add the indices to the stack
    for (int i = 0; i < n; ++i) {
        stack.push(i);
    }

    // Calculate minimum coins needed
    for (int i = (n - 1) / 2; i > 0; --i) {
        // Find the minimum price in the range
        int minPriceIndex = -1;
        int minPrice = INT_MAX;

        for (int j = i; j < 2 * i + 1 && j < n; ++j) {
            if (prices[j] < minPrice) {
                minPrice = prices[j];
                minPriceIndex = j;
            }
        }

        // Add the minimum price to the current fruit's price
        prices[i - 1] += prices[minPriceIndex];
    }

    return prices[0];
}

int main() {
    int prices[] = {3,1,2};// Example 1 prices
	int prices2[] = {1,10,1,1};// Example 2 prices
	int prices3[] = {26,18,6,12,49,7,45,45};// Example 3 prices
    int n = sizeof(prices) / sizeof(prices[0]); // Number of fruits
	int k = sizeof(prices2) / sizeof(prices2[0]); // Number of fruits
    int l = sizeof(prices3) / sizeof(prices3[0]); // Number of fruits

    int result = minimumCoins(prices, n); // Calculate the minimum coins needed
    int result2 = minimumCoins(prices2, k); // Calculate the minimum coins needed
    int result3 = minimumCoins(prices3, l); // Calculate the minimum coins needed

    cout << "Minimum coins needed: " << result << endl; // Output the result
    cout << "Minimum coins needed: " << result2 << endl; // Output the result
    cout << "Minimum coins needed: " << result3 << endl; // Output the result

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Definition of a tree node
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to apply the greedy algorithm
int greedyMaxSum(TreeNode* root, vector<int>& path) {
    if (!root) return 0;

    // Add the current node's value to the path
    path.push_back(root->value);

    // Select the maximum value between left and right child nodes
    if (root->left && root->right) {
        if (root->left->value > root->right->value) {
            return root->value + greedyMaxSum(root->left, path);
        } else {
            return root->value + greedyMaxSum(root->right, path);
        }
    } else if (root->left) {
        return root->value + greedyMaxSum(root->left, path);
    } else if (root->right) {
        return root->value + greedyMaxSum(root->right, path);
    }

    return root->value; // Leaf node
}

int main() {
    // Creating the binary tree from the image:
    //        6
    //       / \
    //      3   4
    //     /   / \
    //   20   14  11

    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(3);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(20);
    root->right->left = new TreeNode(14);
    root->right->right = new TreeNode(11);

    // Array to store the path chosen by the greedy algorithm
    vector<int> path;

    // Apply greedy algorithm to find the maximum sum
    int maxSum = greedyMaxSum(root, path);

    // Display the result
    cout << "Maximum sum using the greedy algorithm: " << maxSum << endl;
    cout << "Path taken: ";
    for (int val : path) {
        cout << val << " ";
    }

    return 0;
}

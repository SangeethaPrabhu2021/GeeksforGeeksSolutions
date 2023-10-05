#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;

        // Flatten the left subtree
        flatten(root->left);

        // Save the right subtree for later reattachment
        TreeNode* rightSubtree = root->right;

        // Reattach the flattened left subtree to the root's right
        root->right = root->left;
        root->left = nullptr;

        // Move to the end of the newly attached subtree
        while (root->right) {
            root = root->right;
        }

        // Attach the original right subtree
        root->right = rightSubtree;

        // Flatten the original right subtree
        flatten(rightSubtree);
    }
};

// Helper function to print the flattened linked list
void printFlattenedList(TreeNode* head) {
    while (head) {
        std::cout << head->val << " -> ";
        head = head->right;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    Solution solution;
    solution.flatten(root);

    // Print the flattened list
    printFlattenedList(root);

    // Clean up the allocated memory
    delete root->right->right;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}

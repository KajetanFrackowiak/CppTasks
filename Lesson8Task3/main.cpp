#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRec(root, value);
    }

    TreeNode* insertRec(TreeNode* root, int value) {
        if (root == nullptr) {
            return new TreeNode(value);
            return new TreeNode(value);
        }

        if (value < root->data) {
            root->left = insertRec(root->left, value);
        } else if (value > root->data) {
            root->right = insertRec(root->right, value);

        return root;
        }
    }

    void inorderTraversal(TreeNode* root) {
        if (root != nullptr) {
            inorderTraversal(root->left);
            std::cout << root->data << " ";
            inorderTraversal(root->right);
        }
    }

    void display() {
        std::cout << "Inorder traversal: ";
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTree myTree;
    int choose = 0;
    while (choose != 3) {
        std::cout << "Choose what you want to do: 1-add on tree, 2-display tree, 3-end:" << std::endl;
        std::cin >> choose;

        switch (choose) {
            case 1:
                int num;
                std::cout << "Write number that you want to add on tree:" << std::endl;
                std::cin >> num;
                myTree.insert(num);
                break;
            case 2:
                myTree.display();
                break;
            case 3:
                std::cout << "See you :)" << std::endl;
                break;
            default:
                std::cout << "Incorrect data" << std::endl;
        }
    }
    return 0;
}


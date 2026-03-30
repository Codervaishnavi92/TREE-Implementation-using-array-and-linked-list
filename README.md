
# 🌳 Tree Implementation (Array & Linked List)

## 📌 Overview

This project demonstrates the implementation of **Tree Data Structure** using:

* Array representation
* Linked List representation

It covers basic tree operations like insertion, traversal, and searching.

---

## 🧠 Concepts Covered

* Tree Data Structure
* Binary Tree
* Array-based Tree Representation
* Linked List-based Tree (Node-based)
* Tree Traversals:

  * Inorder
  * Preorder
  * Postorder

---

## ⚙️ Implementation Details

### 1️⃣ Array Representation

* Tree is stored in an array.
* For any node at index `i`:

  * Left Child → `2*i`
  * Right Child → `2*i + 1`
* Suitable for **complete binary trees**.

#### ✅ Advantages:

* Easy to implement
* No need for pointers

#### ❌ Disadvantages:

* Wastes space for sparse trees
* Fixed size

---

### 2️⃣ Linked List Representation

* Each node contains:

  * Data
  * Pointer to left child
  * Pointer to right child

#### Node Structure (C++):

```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
};
```

#### ✅ Advantages:

* Dynamic size
* Efficient memory usage

#### ❌ Disadvantages:

* Extra memory for pointers
* Slightly complex implementation

---

## 🔄 Tree Traversals

### 🔹 Inorder (Left → Root → Right)

```cpp
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
```

### 🔹 Preorder (Root → Left → Right)

```cpp
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
```

### 🔹 Postorder (Left → Right → Root)

```cpp
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
```

---

## 🚀 How to Run

1. Clone the repository:

```bash
git clone https://github.com/your-username/tree-implementation.git
```

2. Navigate to the project folder:

```bash
cd tree-implementation
```

3. Compile the code:

```bash
g++ main.cpp -o tree
```

4. Run the program:

```bash
./tree
```

---

## 📂 Project Structure

```
tree-implementation/
│── array_tree.cpp
│── linkedlist_tree.cpp
│── main.cpp
│── README.md
```

---

## 🎯 Applications of Trees

* Expression evaluation
* File systems
* Databases (B-Trees, BST)
* Searching and sorting algorithms

---

## 👩‍💻 Author

Vaishnavi Yadav



# Final Assignment

In order to put everything together we will have a last assignment joining all the concepts we learned in class, we will now try to take a concept from the theory to our code.

In order to exercise our knowledge on references we will today implement a binary search tree. Let's first understand the concept of it.

## Binary Tree Search

![](https://media.giphy.com/media/5mWKEFFh5BGnBhoGn0/source.gif).

In summary, copied and pasted from [Wikipedia](https://en.wikipedia.org/wiki/Search_tree)

A Binary Search Tree is a node-based data structure where each node contains a key and two subtrees, the left and right. For all nodes, the left subtree's key must be less than the node's key, and the right subtree's key must be greater than the node's key. These subtrees must all qualify as binary search trees.

![](https://upload.wikimedia.org/wikipedia/commons/d/da/Binary_search_tree.svg)

Now we need to divide this into small steps and build our tree. Let's make it with only nodes and use a simple integer as reference (a key) to our tree.

So our node will be composed by 3 elements, (1) A reference, (2) a left leaf, (3) a right leaf. In this exercise, we will use the simpliest approach possible, where our value will have only one integer.

*NOTICE* Learning Binary trees isn't part of the course, but by now you are expected to know how to implement following this step by step.

Take a piece of paper and draw everything you'll do from now on.

Create each of the following functions:

(1)

     struct Node *nodeBuilder(int i),
 this function takes an integer (the key) and returns a pointer to a new **Node** (our struct);
    If the key is zero, it returns *NULL*

When building a new node, the leafs are NULL.

(2)

    int insert(int i, struct Node *head)
this function takes an integer as reference and returns 1 if the **Node** was added or 0 if it was not. It takes also the head of the tree as reference.

(3)

    struct Node *search(int i, struct Node *head)

This function searches the key inside the tree, if found, returns the pointer, otherwise, returns *NULL*.

(4)

    void printAll(struct Node *head)
This function prints all the elements in the tree.

**PS** You don't need to read from the user input, but you are requested to have insertions on the tree on your code and use all the functions.

Feel free to create as many functions as you need.

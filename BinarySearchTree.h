// Header file for SinglyLinkedList.cpp data structure

#ifndef __SSL_H_INCLUDED__   // if x.h hasn't been included yet...
#define __SLL_H_INCLUDED__   //   #define this so the compiler knows it has been included

// include these libraries
#include "stdlib.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Node for the Linked List
class Node{
        public:
            int Data;
            Node *Left;
            Node *Right;
            // Constructor
            Node(){
                Left = NULL;
                Right = NULL;
            }
            Node(int el){
                 Data = el;
                 Left = NULL;
                 Right = NULL;
            }
}; // end class Node

// Linked List: used to form and edit linked list data structure
class BinarySearchTree{
    private:
       // Root Node of BST
       Node *Root;
    public:
        // Constructor
        BinarySearchTree(){
            Root = NULL;
        }

        // Methods
        bool IsEmpty(){
            return Root==NULL;
        }
        void Insert(int,Node *); // insert element into BST
        void Insert(int); // driver insert function used in main
        int Search(int); // Search for the given value in BST
        void Clear();     // Clear all Nodes from BST
        //Delete(int); // delete given Node from BST
        void Visited(Node*);
        void InOrderTraversal(Node*); // traverse L->Root->R
        void PostOrderTraversal(Node*); // traverse L->R->Root
        void Print(); // Print out the tree


};

#endif


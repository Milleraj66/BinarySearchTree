//#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main()
{
    // BST object
    BinarySearchTree BST1;

    // Insert elements into BST: 5,4,3,6,7
    BST1.Insert(5);
    BST1.Insert(7);
    BST1.Insert(4);
    BST1.Insert(3);
    BST1.Insert(6);
    BST1.Insert(8);

    BST1.Print();
    return 0;
}

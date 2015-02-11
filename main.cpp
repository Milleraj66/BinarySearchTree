//#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main()
{
    // BST object
    BinarySearchTree BST1;

    // Insert elements into BST: 5,4,3,6,7,8
    //2 4 1 3 5 7 6 8
    /*
    BST1.Insert('D');
    BST1.Insert('B');
    BST1.Insert('G');
    BST1.Insert('A');
    BST1.Insert('C');
    BST1.Insert('F');
    BST1.Insert('I');
    BST1.Insert('E');
    BST1.Insert('H');
    */
    // Print InOrder traversal first then PostOrder traversal
    for(int i = 5; i < 10;i++){
        BST1.Insert(i);
    }
    BST1.Insert(3);
    BST1.Insert(4);
    BST1.Insert(2);

    BST1.Print();
    cout << "Height of 5: " << BST1.NodeHeight(5) << endl;
    cout << "Height of 6: " << BST1.NodeHeight(6) << endl;
    cout << "Height of 7: " << BST1.NodeHeight(7) << endl;
    cout << "Height of 8: " << BST1.NodeHeight(8) << endl;
    cout << "Height of 9: " << BST1.NodeHeight(9) << endl;
    cout << "Height of 3: " << BST1.NodeHeight(3) << endl;
    cout << "Height of 4: " << BST1.NodeHeight(4) << endl;
    cout << "Height of 2: " << BST1.NodeHeight(2) << endl;

    // Valid search element, should return element
    //cout << "Valid Search for 8, should return 8: " << BST1.Search(8) << endl;
    // INValid search element, should return 0
    //cout << "InValid Search for 2, should return O: " << BST1.Search(2) << endl;

    // Clear method not worknig
    //BST1.Clear();
    //BST1.Print();
    return 0;
}

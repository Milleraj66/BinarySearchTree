// Binary Search Tree Class Implementations
#include "BinarySearchTree.h"

//Purpose: Insert a node with the data given my paramter to the BST
//Implementations: recursive, must pass in the root node

//02-02-15: fixed Insert::ie(Root==NULL)
// Insert, print w/ Postfix and Inorder traversal working
// should implement levels
void BinarySearchTree::Insert(int el){
    Insert(el,Root);
}

//Implementations: iterative, must pass in the root node
void BinarySearchTree::Insert(int element,Node *tmp){
    // If the tree is empty insert element as root node
    if(Root == NULL){
        Root = new Node(element);
    }
    // Else parse the tree to insert Node in correct location
    else{
        // if the element is equal to current node, tell user it is already in BST
        if(element == tmp->Data)
            cout << "The element " << element << " is already in the BST" << endl;
        // else if the element is smaller than the current node, move to Left leaf of current node
        else if(element < tmp->Data){
            // if this Node has no leafs, then insert element into leaf node to the left
            if(tmp->Left == NULL){
                tmp->Left = new Node(element);
            }
            // else move to left leaf node
            else{
                Insert(element, tmp->Left);
            }
        }
        // else the element is larger than the current node, move to Right leaf of current node
        else{
            // if this Node has no leafs, then insert element into leaf node to the left
            if(tmp->Right == NULL){
                tmp->Right = new Node(element);
            }
            // else move to left leaf node
            else{
                Insert(element, tmp->Right);
            }
        }
    }//END First ELSE

}//END Insert Method
int BinarySearchTree::Search(int){

}
void BinarySearchTree::Clear(){

}
// Print out the current data element
void BinarySearchTree::Visited(Node *tmp){
    cout << tmp->Data << " " ;
}
void BinarySearchTree::InOrderTraversal(Node *tmp) {
    if(tmp != NULL){
        InOrderTraversal(tmp->Left);
        Visited(tmp);
        InOrderTraversal(tmp->Right);
    }
    //else
        //cout << "BST is empty: InOrder" << endl;
}
void BinarySearchTree::PostOrderTraversal(Node *tmp){
    if(tmp!=NULL){
        PostOrderTraversal(tmp->Left);
        PostOrderTraversal(tmp->Right);
        Visited(tmp);
    }
}
void BinarySearchTree::Print(){
    InOrderTraversal(Root);
    cout << endl;
    PostOrderTraversal(Root);
    cout << endl;
}

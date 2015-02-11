// Binary Search Tree Class Implementations
#include "BinarySearchTree.h"

//Purpose: Insert a node with the data given my paramter to the BST
//Implementations: recursive, must pass in the root node

//02-02-15: fixed Insert::ie(Root==NULL)
// Insert, print w/ Postfix and Inorder traversal working, Search working
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
// Driver Search function used by user only
int BinarySearchTree::Search(int Key){
    return (Search(Key, Root));
}
// Recursive search function
int BinarySearchTree::Search(int Key, Node *tmp){
    // If the current root element is the key return that data value
    if(tmp->Data == Key ){
        return (tmp->Data);
    }
    // if current root node does not have children then element is not in tree return FALSE == NULL
    else if(tmp->Left == NULL && tmp->Right == NULL){
        return ( false );
    }
    // else parse tree to left or right
    else{
        // else if the element is smaller than the current node, move to Left leaf of current node
        if(Key < tmp->Data){
            Search(Key, tmp->Left);
        }
        // else the element is larger than the current node, move to Right leaf of current node
        else{
            Search(Key, tmp->Right);
        }
    }//END First ELSE

}
/*
// recursice Clear function removes all nodes from tree
void BinarySearchTree::Clear(){
    // Base case when postorder traversal gets to root
    PostOrderTraversalClear(Root);
    Root = NULL;
}
void BinarySearchTree::PostOrderTraversalClear(Node *tmp){
    if(tmp!=NULL){
        PostOrderTraversal(tmp->Left);
        PostOrderTraversal(tmp->Right);
        VisitedClear(tmp);
    }
}
void BinarySearchTree::VisitedClear(Node *tmp){
    tmp = NULL;
}
*/
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
void BinarySearchTree::PreOrderTraversal(Node *tmp) {
    if(tmp != NULL){
        Visited(tmp);
        PreOrderTraversal(tmp->Left);
        PreOrderTraversal(tmp->Right);
    }
    //else
        //cout << "BST is empty: InOrder" << endl;
}

void BinarySearchTree::Print(){
    cout << "InOrder: ";
    InOrderTraversal(Root);
    cout << endl;
    cout << "PostOrder: ";
    PostOrderTraversal(Root);
    cout << endl;
    cout << "PreOrder: ";
    PreOrderTraversal(Root);
    cout << endl;
}

// Driver function, passes the data element to determine where its height is
int BinarySearchTree::NodeHeight(int key){
    // initialize counter that will be incremented each hieght drop
    int Counter = 0;
    return (NodeHeight(Counter, key, Root));
}//END First ELSE
// Search for the data element of the node paramater
// will increment counter each time we go down height
int BinarySearchTree::NodeHeight(int counter, int Key, Node* tmp){
     // If the current root element is the key return the current height == counter
    if(tmp->Data == Key ){
        return (counter);
    }
    // if current root node does not have children then element is not in tree return FALSE == NULL
    else if(tmp->Left == NULL && tmp->Right == NULL){
        return ( false );
    }
    // else parse tree to left or right
    else{
        // else if the element is smaller than the current node, move to Left leaf of current node
        // increment our height == counter
        if(Key < tmp->Data){
            NodeHeight(counter+1, Key, tmp->Left);
        }
        // else the element is larger than the current node, move to Right leaf of current node
        // increment our height == counter
        else{
            NodeHeight(counter+1, Key, tmp->Right);
        }
    }//END First ELSE

}

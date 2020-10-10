#include "cpplib.h"
#include "limits"
#include <numeric>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>


// Question 1


vector<int> CPPLib::keepOdd(const vector<int>& input) {
    
    
    std::vector<int> copyvec(input.size());
    
        std::copy_if(input.begin(), input.end(), copyvec.begin(), [](int x) {
            return ((x % 2) == 1);
        });
    
    
    auto count = std::count_if(copyvec.begin(), copyvec.end(), [](int y) {
        return (y != 0);
    });
    
    copyvec.resize(count);
    
    return copyvec;
    
}

vector<int> CPPLib::transform(const vector<int>& input) {

    vector <int> output(input.size());
    
    
    std::transform( input.begin(), input.end(), output.begin(),
        [](int x) {
        
            if (x % 2 == 1){
                return (x +1);
            }
            else {
                return (x - 1);
            }
        }
                   
                   );
    
    return output;
}

int CPPLib::sum(const vector<int>& input) {
    
    int sum = 0;
    
    sum =  std::accumulate (input.begin(), input.end(), 0 );
    
    return sum;
    
    
    
}

// Question 2

void CPPLib::Inorder (TreeNode *a, std::vector<int> &result){
    
    if (a == nullptr){
        
        return;
    }
    
    Inorder(a->left, result);
    result.push_back(a->val);
    Inorder(a->right, result);
    
}

int CPPLib::NumberOfNodes(TreeNode* root) {
    
    int treesize = 0;
    
    std::vector<int>result;
    
    if (root == nullptr)
        return -1;
    
    else {
          Inorder(root, result);
          }
        
    treesize = result.size();
          return treesize;
    
    
}

int CPPLib::SumOfNodes(TreeNode* root) {
        
        
        int sum = 0;
        
        std::vector<int>result;
        
        if (root == nullptr)
            return -1;
        
        else {
              Inorder(root, result);
              }
            
              sum = std::accumulate(result.begin(), result.end(), 0);
              return sum;
    
}


int CPPLib::Inorder_depth (TreeNode *a){

    if (a == nullptr){

        return 0;
    }

    int left_depth = Inorder_depth(a->left);
 //   result.push_back(a->val);

    int right_depth = Inorder_depth(a->right);

    if (left_depth > right_depth){
        return left_depth + 1;
    }
    else{
        return right_depth + 1;
    }
}

int CPPLib::DepthOfTree(TreeNode* root) {
    
    int MaxDepth = 0;
    if (root == nullptr){
        return -1;
    }
    else{
        MaxDepth = Inorder_depth(root);
    }
    
    return MaxDepth - 1;
}

int CPPLib::DiameterOfTree(TreeNode* root) {
    
}

// Question 3


BST::BST(/*xxx*/){
    this->root_ = nullptr;
}


BST::BST(std::vector<int> initial_values){

    
    if (initial_values.size() == 0){
        this->root_ = nullptr;
    }
    else{
            this->root_ = new TreeNode(initial_values[0]);
    
    for (int i=1; i<initial_values.size(); i++){
        
        TreeNode *curr = root_;
        
        for (int j=0; j<initial_values.size(); j++){
            
            if (initial_values[i] < curr->val  ){
                
                if (curr->left != nullptr){
                    curr = curr -> left;
                }
                else {
                    curr->left = new TreeNode (initial_values[i]);
                    break;
                }
            }
            else {
                if (curr->right != nullptr){
                    curr = curr -> right;
                }
                else {
                    curr->right = new TreeNode (initial_values[i]);
                    break;
                }
            }
        
        }
    
 }
 
}
}


BST::~BST(){
    
}

void BST::push(int key){
 
    if (root_ == nullptr){
         root_ = new TreeNode(key);
        }
    else {
        
           TreeNode *curr = root_;
            while (curr != nullptr) {
            
            if (key < curr->val){
                
                if (curr->left != nullptr){
                    curr = curr->left;
                }
                else{
                    curr->left = new TreeNode(key);
                    break;
                }
            }
            else{
                
                if (curr->right != nullptr){
                    curr = curr->right;
                }
                else{
                    curr->right = new TreeNode(key);
                    break;
                }
            }
            
        }
    }
}



bool BST::find(int key){
    
    TreeNode *curr = root_;
    
    bool output = false;
    
    while (curr != nullptr) {
        
        if (key == curr->val){
            output = true;
            break;
        }
        else if (key < curr->val){
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
               
    }
    
    return output;
    
}

bool BST::erase(int key){
    
    TreeNode *curr = root_;
    TreeNode *parent = root_;
    
    bool output = false;
    
    while (curr != nullptr) {
        
        if (key == curr->val){
            break;
        }
        else if (key < curr->val){
            parent = curr;
            curr = curr->left;
        }
        else {
            parent = curr;
            curr = curr->right;
        }
               
    }
    
    if (curr == nullptr){//didn't find
        output = false;
    }
    else {
        
        if  (  (curr->left == nullptr) && (curr->right == nullptr)   ){
            if (curr->val > parent->val)  { //curr is the right child
                parent->right = nullptr;
                delete curr;
                output = true;
            }
            else{ // curr is the left child
                parent->left = nullptr;
                delete curr;
                output = true;
            }
        }
        else if ( (curr->left != nullptr)  && (curr->right == nullptr) ){  //one child, left
            
            if (curr->val > parent->val)  { //curr is the right child
                   parent->right = curr->left;
                   delete curr;
                   output = true;
            }
               else{ // curr is the left child
                   parent->left = curr->left;
                   delete curr;
                   output = true;
               }
        }
        else if ( (curr->left == nullptr)  && (curr->right != nullptr) ){  //one child, right
            
            if (curr->val > parent->val)  { //curr is the right child
                   parent->right = curr->right;
                   delete curr;
                   output = true;
               }
               else{ // curr is the left child
                   parent->left = curr->right;
                   delete curr;
                   output = true;
               }
        }
        else{//has two child
            
            TreeNode *rightcurr = curr->right;
            TreeNode *rightcurrparent = curr;
            
            while (rightcurr->left != nullptr){
                rightcurrparent = rightcurr; //min node at right subtree
                rightcurr = rightcurr -> left; //parent of this min node
            }
            
            curr->val = rightcurr->val;
            
            if (rightcurr->right == nullptr){ //this min node has no child
                rightcurrparent ->right = nullptr;
                delete rightcurr;
                output = true;
            }
            else{ //this min node has one right child
                rightcurrparent -> right = rightcurr->right;
                delete rightcurr;
                output = true;
            }
            
        }
        
    }
    
    return output;
    
}



// Question 4


void CPPLib::BSTInorder (TreeNode *a, bool &output){
    
    if (a == nullptr){
        
        return;
    }
    
    TreeNode *leftchild = a->left;
    TreeNode *rightchild = a->right;
    
    //a does not have child, don't care
    
    if ( (a->left != nullptr)&& (leftchild->val > a->val) ) {  //only have left child
        output = false;
    }
    if ( (a->right != nullptr)&& (rightchild->val < a->val) ) { //only have right child
        output = false;
    }
    
    BSTInorder(a->left, output);
    BSTInorder(a->right, output);
    
}


bool CPPLib::isBST(TreeNode* root){
    
    bool output = true;
    if (root == nullptr) {
        
        return true;
    }
    else {
        BSTInorder (root, output);
        return output;
    }
    
    

}

//int CPPLib::findLCA(TreeNode* root, int val_a, int val_b){

//}


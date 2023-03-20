Node* insert(Node* root, int k){
    if(!root){
        root = new Node(k);
        return root; 
    }
    if(k>root->data){
        root->right = insert(root->right, k);
    }
    else if(k<root->data){
        root->left = insert(root->left, k);
    }
    return root;
}
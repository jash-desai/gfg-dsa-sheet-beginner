bool search(Node* root, int x){
    if(x==root->data) return 1;
    if(x<root->data){
        if(root->left) return search(root->left, x);
        else return 0;
    }
    if(x>root->data){
        if(root->right) return search(root->right, x);
        else return 0;
    }
    return 0;
}
void rec(Node* root, vector<int> &v){
    v.push_back(root->data);
    if(root->left and !(root->right)){
        rec(root->left, v);
    }if(!(root->left) and root->right){
        rec(root->right, v);
    }if(root->left and root->right){
        rec(root->left, v);
        rec(root->right, v);
    }
}
vector <int> preorder(Node* root){
    vector<int> v;
    rec(root, v);
    return v;
}
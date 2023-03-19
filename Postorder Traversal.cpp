void rec(Node* root, vector<int>&v){
    if(!root) return;
    rec(root->left,v);
    rec(root->right,v);
    v.push_back(root->data);
}
vector<int> postOrder(Node* root){
    vector<int> v;
    rec(root, v);
    return v;
}
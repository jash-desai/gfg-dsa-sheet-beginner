class Solution {
  public:
    void rec(Node* root, vector<int>&v){
      if(!root) return;
      rec(root->left, v);
      v.push_back(root->data);
      rec(root->right, v);
    }
    vector<int> inOrder(Node* root){
        vector<int> v;
        rec(root, v);
        return v;
    }
};
class node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = null;
        right = null;
    }

};
Inorder: Left -> Root -> Right
void inorder(Node* root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 // Preorderg
void preorder(Node* root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main()
{
    
    Node* root = new Node(1);


    root->left = new Node(2);
    root->right = new Node(3);

    
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder: ";
    inorder(root);

    return 0;
}

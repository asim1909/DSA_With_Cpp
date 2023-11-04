#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter the data: "<<endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }
    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;  // use a queue for level Order traversal
    q.push(NULL);

    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) { // purana level complete traverse ho
            cout << endl;
            if (!q.empty()) {  // queue mai hai not empty..
                q.push(NULL);
            }
        }
        else{
            cout << temp ->data <<" ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp ->right) {
                q.push(temp->right);
            }
        }
    }
}

void in_order(node* root) {  // L N R
    if(root == NULL){
        return;
    }
    
    in_order(root->left);
    cout << root-> data << " ";
    in_order(root->right);
}   

void pre_order(node* root) { // N L R
    if(root ==NULL){
        return;
    }

    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(node* root) { // L R N
    if (root == NULL) {
        return;
    }

    post_order(root->left);
    post_order(root->right);
    cout << root->data << " ";
    
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;
    cout << "Enter data for root"<<endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp-> data <<endl;
        int left_data;
        cin >> left_data;

        if (left_data != -1) {
            temp -> left = new node(left_data);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp-> data <<endl;
        int right_data;
        cin >> right_data;

        if (right_data != -1) {
            temp -> right = new node(right_data);
            q.push(temp->right);
        }
    }
}

int main() {
    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    /*
    // creating a tree
    root = buildTree(root); 

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


    // level order
    cout << "Printing the level order traversal output "<< endl;
    levelOrderTraversal(root); 

    cout << endl << "Printing the in order traversal output "<< endl;
    in_order(root);

    cout << endl << "Printing the pre order: " << endl;
    pre_order(root);

    cout << "Printing the post order: " << endl;
    post_order(root);
    */

    return 0;
}
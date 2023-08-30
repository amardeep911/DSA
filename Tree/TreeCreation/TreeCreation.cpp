#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data";
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;
    cout << "Enter the data for inseting in left" << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for inserting in right" << data << endl;
    root->right = buildTree(root->right);
}
void levelOrderTransverse(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    int data;
    node *root = NULL;

    root = buildTree(root);

    levelOrderTransverse(root);
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
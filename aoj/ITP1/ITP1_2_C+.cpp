#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int n;
    Node *left = 0;
    Node *right = 0;
};

void insert(int n, Node *p)
{
    if (p->n < n)
    {
        if (p->right == 0)
        {
            Node *next = new Node{n, 0, 0};
            p->right = next;
        }
        else
        {
            insert(n, p->right);
        }
    }
    else
    {
        if (p->left == 0)
        {
            Node *next = new Node{n, 0, 0};
            p->left = next;
        }
        else
        {
            insert(n, p->left);
        }
    }
}

void output(Node *p)
{
    if (p->left != 0)
    {
        output(p->left);
        cout << " ";
    }
    cout << p->n;
    if (p->right != 0)
    {
        cout << " ";
        output(p->right);
    }
}

int main()
{
    int input[3] = {0};
    cin >> input[0] >> input[1] >> input[2];

    Node *t;
    t = new Node{input[0], 0, 0};

    for (int i = 1; i < sizeof(input) / sizeof(input[0]); i++)
    {
        insert(input[i], t);
    }

    output(t);
    cout << endl;
    return 0;
}

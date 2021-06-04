//---------------------------------------------------------------------------
#include <list>
#ifndef treeH
#define treeH
#include "list.h"
#include <vcl.h>
#include <cmath>
//---------------------------------------------------------------------------

struct Node
{
    int num;
	String fio;
    Node* left;
    Node* right;
    Node* parent;
};

struct Str
{
   int num;
   String fio;
};

class tree
{
public:
	tree(){};
	~tree(){};
	static int min;

	Node* root = NULL;
	String info;
	int count(Node* temp);
	int sum(Node *temp);
	int mean(Node *temp);

	void add(String fio, int num, Node* root);
    void del(Node* root, int key);
    void deletenode(int num, Node* root);
	void clear(Node* temp);
	Node *find(Node* root, int key);


	void symmetric(Node *temp, TMemo *Memo, List<Str> *list);

	Node* arrToTree(List<Str> *list, int start, int end);

    void balance(tree* root, TMemo *Memo);


	void preOrder(Node* root, TMemo *Memo);
	void pastOrder(Node* root, TMemo *Memo);

	Node *getroot();
	void ViewTree(Node *t, int kl, TTreeView *TreeView1);
    int task(Node *root);
};

void balance(tree* root);
void preshow(Node* temp, List<Str> list);

#endif

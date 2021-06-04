//---------------------------------------------------------------------------

#pragma hdrstop

#include "tree.h"
//---------------------------------------------------------------------------
void tree::add(String fio, int num, Node *root)
{
	if (root == NULL)
    {
        Node *nd = new Node();
        nd->fio = fio;
        nd->num = num;
        nd->left = NULL;
        nd->right = NULL;
        nd->parent = NULL;
        this->root = nd;
        return;
    }
    else
    {
        Node *temp = root;
		if (num < temp->num)
        {
            if (temp->left == NULL)
            {
                Node *nd = new Node();
                nd->fio = fio;
                nd->num = num;
                nd->left = NULL;
                nd->right = NULL;
                nd->parent = root;
                temp->left = nd;
                return;
            }
            else
            {
                this->add(fio, num, temp->left);
            }
        }
        else if (num > temp->num)
        {
			if (temp->right == NULL)
            {
                Node *nd = new Node();
                nd->fio = fio;
                nd->num = num;
                nd->left = NULL;
                nd->right = NULL;
                nd->parent = root;
                temp->right = nd;
                return;
            }
            else
            {
                this->add(fio, num, temp->right);
            }
        }
        else
        {
            return;
        }
    }
}

void tree::del(Node *target, int key)
{
   Node* temp = this->find(target, key);
   if(temp == NULL)
   {
	   ShowMessage("Выбранный элемент не найден!");
       return;
   }

   if(temp == getroot()) {
	   ShowMessage("Невозможно удалить корневой элемент!");
	   return;
   }

   if(temp->left != NULL && temp->right != NULL)
   {
       if(temp->parent->left == temp)
       {
		   Node* deleted = temp;
           Node* tmp;
		   temp->parent->left = temp->left;
           tmp = temp->left;
           while(tmp->right != NULL)
           {
              tmp = tmp->right;
           }
           tmp->right = deleted->right;
       }
       free(temp);
       return;
   }
   else
   {
       if(temp->left == NULL && temp->right == NULL)
       {
           if(temp->parent->left == target)
               temp->parent->left = NULL;
           else
               temp->parent->right = NULL;
           free(temp);
           return;
       }
       else
       {
           if(temp->left)
           {
               if(temp->parent->left == temp)
               {
                   temp->parent->left = temp->left;
               }
               else
                   temp->parent->right = temp->left;
               free(temp);
               return;
           }
           else
           {
               if(temp->parent->left == temp)
               {
                   temp->parent->left = temp->right;
               }
               else
                   temp->parent->right = temp->right;
               free(temp);
               return;
           }
       }
   }
}

void tree::deletenode(int num, Node* root)
{
    if (root == nullptr) return;
        Node* curr = root;
        Node* parent = nullptr;
        while (curr && curr->num != num)
        {
            parent = curr;
            if (curr->num > num)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
        if (!curr) return;
        if (parent && curr->left == nullptr)
        {
            if (parent && parent->left == curr)
                parent->left = curr->right;
            if (parent && parent->right == curr)
                parent->right = curr->right;
            delete curr;
            return;
        }
        if (parent && curr->right == nullptr)
        {
            if (parent && parent->left == curr)
                parent->left = curr->left;
            if (parent && parent->right == curr)
                parent->right = curr->left;
            delete curr;
            return;
        }
        if (!parent && curr->left == nullptr)
        {
            root = curr -> right;
            return;
        }
        if (!parent && curr->right == nullptr)
        {
            root = curr -> left;
            return;
        }
        Node* replace = curr->right;
        while (replace->left)
            replace = replace->left;
        int replace_value = replace->num;
		this->deletenode(replace_value, this->getroot());
        curr->num = replace_value;
}

void tree::clear(Node* temp)
{
    if(temp == NULL)
    {
		return;
	}
	clear(temp->left);
	clear(temp->right);
	free(temp);
}

Node *tree::find(Node *root, int key)
{
   while (root)
   {
        if (root->num > key) {
            root = root->left;
            continue;
        } else if (root->num < key) {
            root = root->right;
			continue;
        } else {
            return root;
        }
    }
	return NULL;
}

void tree::symmetric(Node *temp, TMemo *Memo, List<Str> *list)
{
    Str a;
	if(temp == NULL)
    {
        return;
    }
	this->symmetric(temp->left, Memo, list);
	Memo -> Lines -> Add(temp -> fio);
	Memo -> Lines ->Add(temp -> num);
	this->symmetric(temp->right, Memo, list);
	a.num=temp->num;
    a.fio=temp->fio;
	list->Add(a);
}

Node *tree::arrToTree(List<Str> *arr, int start, int end)
{
    if (start > end)
       return nullptr;
    else
    {
       int mid = (start + end)/2;
       Node* root = new Node();
       root->fio = (*arr)[mid].fio;
       root->num = (*arr)[mid].num;

       root->left = arrToTree(arr, start, mid - 1);
	   root->right = arrToTree(arr, mid + 1, end);
	   return root;
	}
}

void tree::balance(tree *root, TMemo *Memo)
{
	List<Str> *lst = new List<Str>();

	this->symmetric(root->root, Memo, lst);

	  bool sorted = true;
	  int right = (*lst).Count() - 1;
      int left = 1;
      do {
		bool sorted = true;
        for (int i = left; i <= right; i++) {
          if ((*lst)[i - 1].num > (*lst)[i].num) {

            Str a = (*lst)[i-1];
            (*lst)[i-1] = (*lst)[i];
            (*lst)[i] = a;
			sorted = false;
          }
        }
        right--;
        for (int i = right; i >= left; i--) {
          if ((*lst)[i].num < (*lst)[i - 1].num) {
              Str a = (*lst)[i];
              (*lst)[i] = (*lst)[i-1];
              (*lst)[i-1] = a;
			sorted = false;
          }
        }
        left++;
	  } while (!sorted);

	  clear(root->root);
	  root->root = NULL;

	  Node* newRoot = arrToTree(lst , 0, lst->Count() - 1);
	  root->root = newRoot;
	  return;
}

void tree::preOrder(Node *temp, TMemo *Memo)//pr
{
	if(temp == NULL)
	{
		return;
	}

	Memo -> Lines -> Add(temp -> fio);
	Memo -> Lines ->Add(temp -> num);

	this->preOrder(temp->left, Memo);
	this->preOrder(temp->right, Memo);
}

void tree::pastOrder(Node *temp, TMemo *Memo)//obr7
{
    if(temp == NULL)
    {
        return;
	}
	this->pastOrder(temp->left, Memo);
	this->pastOrder(temp->right, Memo);

	Memo -> Lines -> Add(temp -> fio);
	Memo -> Lines ->Add(temp -> num);
}

int tree::sum(Node *temp)
{
	int s = temp -> num;

	if(temp -> left != NULL) s += sum(temp -> left);
	if(temp -> right != NULL) s += sum(temp -> right);
	
	return s;
}

int tree::count(Node *temp) {
	if(temp == NULL) return 0;

	return 1 + count(temp -> left) + count(temp -> right);
}

int tree::mean(Node *temp) {
	return sum(temp) / count(temp);
}

Node *tree::getroot()
{
	return this->root;
}

void tree::ViewTree(Node *t, int kl, TTreeView *TreeView1)
{           if (t == NULL)
				return;

			if (kl == -1)
				TreeView1->Items->AddFirst(NULL,t->fio+" = "+IntToStr(t->num));

			else
				TreeView1->Items->AddChildFirst(TreeView1 -> Items -> Item[kl], t->fio+" = " + IntToStr(t->num));

			kl++;
			ViewTree(t -> left, kl, TreeView1);
			ViewTree(t -> right, kl, TreeView1);

			kl--;
}


int tree::task(Node* root)

{
    if (root == NULL)

	return 0;

	int res = root->num;

	int lres = task(root->left);

	int rres = task(root->right);

	if (abs(lres - mean(getroot())) < abs(res - mean(getroot()))) {
		res = lres;
	}

	if (abs(rres - mean(getroot())) < abs(res - mean(getroot()))) {
		res = rres;
	}

    return res;

}


#pragma package(smart_init)

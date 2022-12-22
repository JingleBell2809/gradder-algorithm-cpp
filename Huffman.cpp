#include <iostream>
#include <cstdlib>
using namespace std;
class node
{
	public:
	char c; 
	node *l; 
	node *r; 
	int v;
	node(int t_v,char t_c)
	{
		c=t_c;
		v=t_v;
		l=NULL;
		r=NULL;
	}	
};

class tree
{
	public:
	node *h;
	
	void createTree(int a[], char c[], int size)	
	{
		h=new node(a[0],c[0]);
		node *n=h;
		for(int i=1; i<size; i=i+2 )
		{
			n->l = new node(a[i], c[i]);
			n->r = new node(a[i+1], c[i+1]);
			n = n->l;			
		}	
	}
	
	void DFS_In_order(node *m)
	{
		if(m != NULL )
		{
			cout<<m->v<<",";
			DFS_In_order(m->l);
			DFS_In_order(m->r);			
		}
	}
	
	void DFS_In_order(node *m, string str)
	{
		if(!m)
		{
			return;
		}
		if (m->c != '$')
		{
			cout<<m->c<<" : "<<str<<"\n";
		}
		DFS_In_order(m->l, str+"0");
		DFS_In_order(m->r, str+"1");
	}
};

tree* merge(tree *t1, tree *t2)
{
	tree *n = new tree();
	n->h = new node((t1->h->v)+ (t2->h->v), '$');
	if(t2->h->v  >  t1->h->v)
	{
		n->h->l = t1->h;
		n->h->r = t2->h;
	}	
	else
	{
		n->h->l = t2->h;
		n->h->r = t1->h;
	}
	return n;
}

int main()
{
	char c[] = {'a','b','c','d','e','f','g','h'};
	char c_r_o[8][8], c_o[8][8];
	int v[] = {1,2,3,4,5,6,7,8};
	int r_o[8][8],o[8][8];
	int size = 8, size_c[8], size_r = 1;
	tree *my_tree[8];	
	
	for(int j=0; j<size; j++)
	{
		bool cannot_add = true;
		for(int i=0; i<size_r; i++)	
		{
			if(v[j] >= o[i][size_c[i]-1])
			{
				o[i][size_c[i]] = v[j];
				c_o[i][size_c[i]] = c[j];
				size_c[i]++;
				
				if(size_c[i]%2 == 0)	
				{
					o[i][size_c[i]] = o[i][size_c[i]-1] + o[i][size_c[i]-2];
					c_o[i][size_c[i]] = '$';
					size_c[i]++;					
				}
				cannot_add = false;
				break;				
			}
		}	
		if(cannot_add)
		{
			o[size_r][0]=v[j];
			c_o[size_r][0]=c[j];
			size_c[size_r]++;
			size_r++;			
		}
	}
	
	for(int j=0; j<size_r; j++)
	{
		int k = 0;
		for(int i=size_c[i]-1 ;i>=0; i--)	
		{
			r_o[j][k] = o[j][i];
			c_r_o[j][k] = c_o[j][i];
			k++;			
		}	
	}
	
	for(int j=0; j<size_r; j++)
	{
		my_tree[j] = new tree();
		my_tree[j]->createTree(r_o[j], c_r_o[j], size_c[j]);
	}
	
	for(int j=0; j<size_r; j++)
	{
		for(int i=j+1 ;i<size_r; i++)
		{
			if(my_tree[i]->h->v  <  my_tree[j]->h->v)
			{
				tree *t_tree = my_tree[i];
				my_tree[i] = my_tree[j];
				my_tree[j] = t_tree;				
			}
		}
	}
	
	tree *answer = my_tree[0];
	
	for(int j=1; j<size_r; j++)
	{
		answer = merge(answer, my_tree[j]);
		cout<<answer;
	}
	
	answer->DFS_In_order(answer->h);
	cout<<endl;
	answer->DFS_In_order(answer->h," ");
}






















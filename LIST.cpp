#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *Pnext;

};
struct Ls{
	Node *phead;
	Node *Ptail;
};
 void crlist(Ls &a)
 {
 	a.phead=a.Ptail=NULL;
 }
 
int kiemtrarong(Ls a)
 {
 	if(a.phead==NULL)
 	return 1;
 	return 0;
 }
 
Node *crnode(int x)
{
	Node *p=new Node;
	p->data=x;
	p->Pnext=NULL;
	return p;
}
void addhead(Ls &a,Node *p)
{
	if(a.phead==NULL)
	a.phead=a.Ptail=p;
	else
	{
		p->Pnext=a.phead;
		a.phead=p;
	}
	a.Ptail->Pnext=a.phead; ////vong
}
void addtail(Ls &a, Node *p)
{
	if(a.phead==NULL)
	a.phead=a.Ptail=p;
	else
	{
		a.Ptail->Pnext=p;
		a.Ptail=p;
	}
	a.Ptail->Pnext=a.phead; ////vong
}
void xuat(Ls a)
{
	Node *p=a.phead;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->Pnext;
	}
}

int main(){
	
	return 0;
}

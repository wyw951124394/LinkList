#ifndef __LINKLIST_H_

#define firstPos 0

enum Comparison
{
	equal, greater, smaller
};

#define ElemType int

enum STATUS
{
	INFEASIBLE = -2, ERROR = -1, FALSE = 0, TRUE = -1, OK = 2
};

typedef struct List
{
	ElemType data;
	struct List *next;
}List;

List* CreateListT(int n);
List* CreateListH(int n);
int GetListLength(List *L);
ElemType GetElem(List *list, int x);
void ListInsert(List *list, int x, ElemType e);
bool LocateElem(List *list, int e, Comparison relation);
bool ListDelete(List *list, ElemType e);

#endif /*__LINKLIST_H__


List* CreateListT(int n)
{
   //create Header
   List *L;
   L = (List*)malloc(sizeof(List));
   L->next = NULL;
   
   //
   List *r;
   r = L;
   
   for(int i=0;i<n;i++)
   {  
      int x;
      scanf("%d",&x);
      
     List *p;
     p =(List*)malloc(sizeof(List));
     
     p->data = x;
     r->next = p ;
     r= p;
   }
   
   r->next = NULL; 
   
   return L;
   
}
List* CreateListH(int n)
{

 //create Header
   List *L;
   L = (List*)malloc(sizeof(List));
   L->next = NULL;
   
   
   for(int i=0;i<n;i++)
   {
     int x;
     scanf("%d",&x);
     
     List *p;
     p =(List*)malloc(sizeof(List));
     
     p->data =x; 
     
     p->next = L->next;
      
     L->next = p; 
      
   }
      
     return L;
  
}
int GetListLength(List *L)
{  
   int listLength = 0;
   List *p = L->next;
   while(p)
   {
     listLength++;
     p=p->next;
   }
   return listLength;

}

//the linklist first Element pos is 0
ElemType GetElem(List *list, int x)
{
    List *p;
    
    p = list->next;
    
    ElemType e;
    
    while(x>firstPos)
    {
      p =p->next;
      --x;
    }
    
    e = p->data;
    
    return e;
    
}

void ListInsert(List *list, int x, ElemType e)
{
    List *p =list;
    
    List *q;
    
    q=(List*)malloc(sizeof(List));
    
    for(int i=1;i<x;i++)
    {
     p=p->next;
    }
    
    q->data = e;
    
    q->next = p->next;
    p->next = q;


}
bool LocateElem(List *list, int e, Comparison relation)
{
    if(relation == Comparisopn::equal)
    {
        List *p = list->next;
        while(p&&p->data!=e)
        {
          p=p->next;
        }
        
       return p!=NULL;
}
bool ListDelete(List *list, ElemType e)
{
  List *p = list;
  List *q;
  q =(List*)malloc(sizeof(List));
  
  while(p->next&&p->next->data!=e)
  {
   p=p->next;
  }
  
  if(p->next)
  {
     q = p->next ;
     
     p->next = q->next;
     
     free(q);
     
     return TRUE;
     
  }
  
  return FALSE;

}

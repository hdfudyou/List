#ifndef __LIST_H
#define __LIST_H

typedef int elemType;
typedef struct NodeList{

    int element;//ֵ
    struct NodeList *next;
}Node;

uint8_t InitialList(Node **pNode);
void CreateList(Node *pNode,uint8_t Num);
void PrintList(Node *pNode);
void ClearList(Node *pNode);
uint8_t SizeList(Node *pNode);
uint8_t IsEmptyList(Node *pNode);
elemType* GetElemAddr(Node *pNode,int x);
Node* ModifyElem(Node *pNode,int pos,int x);
Node *InsertHeadList(Node *pNode,int x);
Node *InsertTailList(Node *pNode,int x);


#endif


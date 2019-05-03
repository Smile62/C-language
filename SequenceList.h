#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

//��ʼ��˳���
void InitList(SeqList * seqList, ElementType * elemArray, int length);

//��˳����в���Ԫ��
void InsertElement(SeqList * seqList, int index, ElementType element);

//ɾ��˳���Ԫ��
ElementType * DeleteElement(SeqList * seqList, int index);

//����˳���Ԫ��
ElementType * GetElement(SeqList * seqList, int index);

//��ӡ���ݱ�
void PrintfList(SeqList * seqList);

//������ݱ�
void ClearList(SeqList * seqList);
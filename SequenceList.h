#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

//初始化顺序表
void InitList(SeqList * seqList, ElementType * elemArray, int length);

//向顺序表中插入元素
void InsertElement(SeqList * seqList, int index, ElementType element);

//删除顺序表元素
ElementType * DeleteElement(SeqList * seqList, int index);

//查找顺序表元素
ElementType * GetElement(SeqList * seqList, int index);

//打印数据表
void PrintfList(SeqList * seqList);

//清空数据表
void ClearList(SeqList * seqList);
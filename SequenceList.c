#include"SequenceList.h"

//初始化顺序表
void InitList(SeqList * seqList, ElementType * elemArray, int length)
{
	if (length > MAX_SIZE)
	{
		printf("创建数据表失败！");
		return;
	}
	seqList->length = 0;
	int i;
	for (i = 0; i < length; i++)
	{
		InsertElement(seqList,i,elemArray[i]);
	}
}

//向顺序表中插入元素
void InsertElement(SeqList * seqList, int index, ElementType element) 
{
	if (seqList->length + 1 >= MAX_SIZE)
	{
		printf("插入失败，顺序表已满！\n");
		return;
	}
	if (index < 0 || index >= MAX_SIZE)
	{
		printf("插入失败，数据越界！");
		return;
	}
	if (index > seqList->length)
	{
		printf("插入失败，数据存储不连续！");
		return;
	}
	int i;
	for (i = seqList->length - 1; i > index; i--)
	{
		seqList->datas[i + 1] = seqList->datas[i];
	}
	seqList->datas[index] = element;
	seqList->length++;
}

//删除数据表元素
ElementType * DeleteElement(SeqList * seqList, int index)
{
	if (index < 0 || index > MAX_SIZE - 1)
	{
		printf("删除失败，未找到该数据！");
		return NULL;
	}
	ElementType * delElement = (ElementType *)malloc(sizeof(ElementType));
	*delElement = *GetElement(seqList, index);
	int i;
	for (i = index - 1; i < seqList->length - 1; i++)
	{
		seqList->datas[i] = seqList->datas[i + 1];
	}
	seqList->length--;
	return delElement;
}

//查找顺序表元素
ElementType * GetElement(SeqList * seqList, int index)
{
	if (index < 0 || index > MAX_SIZE - 1)
	{
		printf("查找失败，未找到该数据！");
		return NULL;
	}
	ElementType * element;
	element = &seqList->datas[index - 1];
	return element;
}

//清空数据表
void ClearList(SeqList * seqList)
{
	seqList->length = 0;
	printf("数据表清空完成！");
}

//打印数据表
void PrintfList(SeqList * seqList)
{
	int i;
	for (i = 0; i < seqList->length; i++)
	{
		printf("%d\t%s\n", seqList->datas[i].id, seqList->datas[i].name);
	}
}
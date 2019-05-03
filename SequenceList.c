#include"SequenceList.h"

//��ʼ��˳���
void InitList(SeqList * seqList, ElementType * elemArray, int length)
{
	if (length > MAX_SIZE)
	{
		printf("�������ݱ�ʧ�ܣ�");
		return;
	}
	seqList->length = 0;
	int i;
	for (i = 0; i < length; i++)
	{
		InsertElement(seqList,i,elemArray[i]);
	}
}

//��˳����в���Ԫ��
void InsertElement(SeqList * seqList, int index, ElementType element) 
{
	if (seqList->length + 1 >= MAX_SIZE)
	{
		printf("����ʧ�ܣ�˳���������\n");
		return;
	}
	if (index < 0 || index >= MAX_SIZE)
	{
		printf("����ʧ�ܣ�����Խ�磡");
		return;
	}
	if (index > seqList->length)
	{
		printf("����ʧ�ܣ����ݴ洢��������");
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

//ɾ�����ݱ�Ԫ��
ElementType * DeleteElement(SeqList * seqList, int index)
{
	if (index < 0 || index > MAX_SIZE - 1)
	{
		printf("ɾ��ʧ�ܣ�δ�ҵ������ݣ�");
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

//����˳���Ԫ��
ElementType * GetElement(SeqList * seqList, int index)
{
	if (index < 0 || index > MAX_SIZE - 1)
	{
		printf("����ʧ�ܣ�δ�ҵ������ݣ�");
		return NULL;
	}
	ElementType * element;
	element = &seqList->datas[index - 1];
	return element;
}

//������ݱ�
void ClearList(SeqList * seqList)
{
	seqList->length = 0;
	printf("���ݱ������ɣ�");
}

//��ӡ���ݱ�
void PrintfList(SeqList * seqList)
{
	int i;
	for (i = 0; i < seqList->length; i++)
	{
		printf("%d\t%s\n", seqList->datas[i].id, seqList->datas[i].name);
	}
}
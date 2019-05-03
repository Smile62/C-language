#include<stdio.h>
#include"SequenceList.h"

void show(SeqList * seqList);

//�������ݱ�
void TestSequenceList();

int main()
{
	SeqList seqList = { {1,"������̼"},0 };
	PrintfList(&seqList);
	getchar();
	return 0;
}

void show(SeqList * seqList)
{
	int i;
	printf("1.����˳�������\n");
	printf("2.ɾ��˳�������\n");
	printf("3.����˳�������\n");
	printf("4.���˳�������\n");
	printf("��ѡ�������ţ�");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("�밴���¸�ʽ��������ӵ����ݣ�\n");
		printf("����1��������̼\n");
		printf("�����룺");
		int id;
		char * name;
		scanf("%d,%s", &id, name);
		ElementType * TranData;
		// = {id,*name}
		TranData->id = id;
		TranData->name = *name;

		InsertElement(&seqList, id, *TranData);
		break;
	case 2:
		printf("��������ɾ�����ݵı�ţ�");
		break;
	case 3:
		printf("���������������ݵı�ţ�");
		break;
	case 4:
		ClearList(&seqList);
		break;
	default:
		printf("����������������룺");
		break;
	}

}

void TestSequenceList()
{
	SeqList seqList;
	ElementType * delElement;
	//InitList(&seqList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
	printf("˳����ʼ���ݣ�\n");
	PrintfList(&seqList);
	printf("ɾ�����������ݣ�\n");
	delElement = DeleteElement(&seqList, 2);
	PrintfList(&seqList);
	printf("��ɾ���������ݣ�\n");
	printf("%d\t%s\n", delElement->id, delElement->name);
	free(delElement);
}
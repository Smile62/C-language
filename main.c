#include<stdio.h>
#include"SequenceList.h"

void show(SeqList * seqList);

//测试数据表
void TestSequenceList();

int main()
{
	SeqList seqList = { {1,"二氧化碳"},0 };
	PrintfList(&seqList);
	getchar();
	return 0;
}

void show(SeqList * seqList)
{
	int i;
	printf("1.插入顺序表数据\n");
	printf("2.删除顺序表数据\n");
	printf("3.查找顺序表数据\n");
	printf("4.清空顺序表数据\n");
	printf("请选择操作序号：");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("请按如下格式输入欲添加的数据：\n");
		printf("例：1，二氧化碳\n");
		printf("请输入：");
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
		printf("请输入欲删除数据的编号：");
		break;
	case 3:
		printf("请输入欲查找数据的编号：");
		break;
	case 4:
		ClearList(&seqList);
		break;
	default:
		printf("输入错误！请重新输入：");
		break;
	}

}

void TestSequenceList()
{
	SeqList seqList;
	ElementType * delElement;
	//InitList(&seqList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
	printf("顺序表初始数据：\n");
	PrintfList(&seqList);
	printf("删除第三个数据：\n");
	delElement = DeleteElement(&seqList, 2);
	PrintfList(&seqList);
	printf("被删除数据内容：\n");
	printf("%d\t%s\n", delElement->id, delElement->name);
	free(delElement);
}
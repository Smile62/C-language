#pragma once
#include<stdio.h>
#define MAX_SIZE 255

//��������Ԫ��
typedef struct {
	int id;
	char * name;
}ElementType;

//����˳���ṹ
typedef struct {
	ElementType datas[MAX_SIZE];
	int length;
}SeqList;
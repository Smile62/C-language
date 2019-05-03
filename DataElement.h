#pragma once
#include<stdio.h>
#define MAX_SIZE 255

//定义数据元素
typedef struct {
	int id;
	char * name;
}ElementType;

//定义顺序表结构
typedef struct {
	ElementType datas[MAX_SIZE];
	int length;
}SeqList;
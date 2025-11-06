#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	int roll;
        char name[100];
        float marks;
        struct st *next;
};
void add(struct st**);
void delete1(struct st**);
void deleteroll(struct st**);
void deletename(struct st**);
void save(struct st*);
void print(struct st*);
void reverse(struct st*);
void deleteall(struct st**);


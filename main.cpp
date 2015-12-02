//
//  main.cpp
//  list
//
//  Created by 20141105049 on 15/12/2.
//  Copyright © 2015年 20141105049. All rights reserved.
//


#include <iostream>
#include <string.h>
struct student
{
    char name[100];
    int number;
    student *next;
};
int main(int argc, const char * argv[])
{
    int i;
    student *p,*q,*head;
    head=new student;
    head->next=0;
    p=head;
    for(i=0;i<4;i++)
    {
        q=new student;
        p->next=q;
        q->next=0;
        scanf("%s %d\n",q->name,&(q->number));
        p=q;
    }
    p=head->next;
    while(p!=0)
    {
        printf("%s %d\n",p->name,p->number);
        p=p->next;
    }
    return 0;
}

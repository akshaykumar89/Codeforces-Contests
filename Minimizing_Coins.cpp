#include<stdio.h>
#include<stdlib.h>

 struct node
 {
    int power;
    int coef;
    struct node* next;
 };

 void Add_node(int Coeff, int Power, struct node** temp)
{
    struct node *r, *z;
    z = *temp;
    if (z == NULL) {
        r = (struct node*)malloc(sizeof(struct node));
        r->coef = Coeff;
        r->power = Power;
        *temp = r;
        r->next = (struct node*)malloc(sizeof(struct node));
        r = r->next;
        r->next = NULL;
    }
    else {
        r->coef = Coeff;
        r->power = Power;
        r->next = (struct node*)malloc(sizeof(struct node));
        r = r->next;
        r->next = NULL;
    }
}

 

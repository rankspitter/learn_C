
#include<stdio.h>
#include<string.h>


typedef struct Person
{
        char name[20];
} person;

typedef struct Group
{
        person comp;
        int phone;
	char alias[20];
} group;



int main()
{
        group p1;

        strcpy(p1.comp.name, "Winter");
	strcpt(p1.alias, "armamentor");

        printf("Hi %s!! you are frist here", p1.comp.name);



        return 0;
}


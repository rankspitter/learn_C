#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[20];
    char position[20];
    int age;
} person;

typedef struct Group {
    person comp;
    char alias[20];
} group;

void printPersonInfo(group p) {
    printf("%s\n%s\nposition: %s\nage: %d\n\n", p.comp.name, p.alias, p.comp.position, p.comp.age);
}

int main() {
    group p1 = {{"Karina", "Main Dancer", 23}, "rocket puncher !!"};
    group p2 = {{"Winter", "Lead Vocalist", 22}, "armamentor !!"};
    group p3 = {{"Gisell", "Main Rapper", 22}, "got xenogloss !!"};
    group p4 = {{"Ningning", "Main Vocals", 20}, "ed hacker !!"};

    printPersonInfo(p1);
    printPersonInfo(p2);
    printPersonInfo(p3);
    printPersonInfo(p4);

    return 0;
}

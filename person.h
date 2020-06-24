#include "Ex1.h"
#ifndef PERSON
#define PERSON
typedef struct _Person{
    char *prenom, *nom;
    Date *date;
} Person;

void print_person(Person *p);
Person *create_person(char* nom, char* prenom, Date* date);
Person *copy_person(Person *p1);
#endif

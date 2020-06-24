#include <stdlib.h>
#include <stdio.h>
#include "Person.h"

Person *create_person(char* nom, char* prenom, Date *date){
    Person *p = (Person*) malloc(sizeof(Person));
    p->nom = nom;
    p->prenom = prenom;
    p->date = date;
}

void print_person(Person *p){
    printf("%s %s ne(e) le ", p->nom, p->prenom);
    print_date(p->date);
}

Person *copy_person(Person *p1){
    Person *p = (Person*) malloc(sizeof(Person));
    p->date = p1->date;
    p->nom = p1->nom;
    p->prenom = p1->prenom;
}
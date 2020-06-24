#include <stdio.h>
#include "Ex1.h"
#include "Person.h"
int main(){
    Date *d1 = create_date(24, 6, 2020);
    print_date(d1);
    Person *p1 = create_person("Jean", "Dupont", d1);
    print_person(p1);
    Date *d2 = copy_date(d1);
    print_date(d2);
    Date *d3 = create_date(24, 7, 2020);
    printf("%d", equal_date(d2, d3));
    printf("%d", equal_date(d2, d1));
    Person *p2 = copy_person(p1);
    print_person(p1);

    List *L = create_list(5);
    

}
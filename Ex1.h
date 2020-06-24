#ifndef DATE
#define DATE
typedef struct _Date{
    int month;
    int day;
    int year;
} Date;

typedef struct _List{
    Date *L;
} List;

Date *create_date(int day, int month, int year);
void print_date(Date *date);
int equal_date(Date *d1, Date *d2);
Date *copy_date(Date *d1);

List *create_list(len);
#endif


#include <stdio.h>
#include <stdlib.h>
#include "file.h"


void inputPersonFromConsole(struct persone *p)
{
    printf("Введите имя : ");
    scanf("%s", p->firstname);
    printf("Введите фамилию : ");
    scanf("%s", p->lastname);
    printf ("Введите iq: ");
    scanf("%d", &p->iq);
    printf("Введите мощь: ");
    scanf("%d", &p->power);
    printf("Введите дату рождения\n Число: ");
    scanf("%d", &p->bd.day);
    printf("Месяц: ");
    scanf("%d", &p->bd.month);
    printf("Год: ");
    scanf("%d", &p->bd.year);
    printf("\nВы ввели : %s %s, дата рождения %d %d %d года",
    p->firstname, p->lastname, p->bd.day, p->bd.month, p->bd.year);
    getchar(); getchar();
}
void outputPersonFromConsole(struct persone p)
{
    printf("\nВы ввели : %s %s, дата рождения %d %d %d года",
    p.firstname, p.lastname, p.bd.day, p.bd.month, p.bd.year);
}


int main()
{
    system("chcp 1251");
    system("cls");
    struct persone p;
 //   inputPersonFromConsole(&p);
 //   inputPersonFromToFile(p);
  //  outputPersonFromConsole(p);

    int person_Count = personCount();
    struct persone *personArrDyn;
    personArrDyn = (struct persone*)malloc(person_Count  * sizeof(struct persone));
    readPersonFromFile(personArrDyn,person_Count);
    for(int i=0; i<person_Count; i++)
    {
        outputPersonFromConsole(personArrDyn[i]);
    }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "file.h"


void inputPersonFromConsole(struct persone *p)
{
    printf("������� ��� : ");
    scanf("%s", p->firstname);
    printf("������� ������� : ");
    scanf("%s", p->lastname);
    printf ("������� iq: ");
    scanf("%d", &p->iq);
    printf("������� ����: ");
    scanf("%d", &p->power);
    printf("������� ���� ��������\n �����: ");
    scanf("%d", &p->bd.day);
    printf("�����: ");
    scanf("%d", &p->bd.month);
    printf("���: ");
    scanf("%d", &p->bd.year);
    printf("\n�� ����� : %s %s, ���� �������� %d %d %d ����",
    p->firstname, p->lastname, p->bd.day, p->bd.month, p->bd.year);
    getchar(); getchar();
}
void outputPersonFromConsole(struct persone p)
{
    printf("\n�� ����� : %s %s, ���� �������� %d %d %d ����",
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

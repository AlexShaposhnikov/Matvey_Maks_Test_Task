#include "constant.h"
void inputPersonFromToFile(struct persone p)
{
   FILE *fp;
   fp = fopen("tmp/name.maks", "a");
   if(fp != 0)
   {
       //fprintf(Cpoint,"%f        %f        %f \n",b[i7],b[i7+1],b[i7+2]);
       fprintf(fp,"Персона : %s %s, дата рождения %d %d %d года iq: %d power %d\n",
    p.firstname, p.lastname, p.bd.day, p.bd.month, p.bd.year,p.iq,p.power);

    //fwrite (p, sizeof(struct persone), 1, fp);
   }
   fclose(fp);
}
int personCount()
{
    FILE *fil;
    int i = 0;
    char buf[BUF_SIZE];
    fil = fopen ("tmp/test.txt", "r");
    while(fgets(&buf[0], BUF_SIZE, fil))
    {
        i++;
    }
    fclose (fil);
    return i;
}

void readPersonFromFile(struct persone *personArrDyn, int person_Count)
{
    //int person_Count = personCount();
    FILE *fil;
    int i = 0;
    char buf[BUF_SIZE];
    char bufTemp[20];
    fil = fopen ("tmp/test.txt", "r");
    if(fil!=NULL)
    {
        while(fgets(&buf[0], BUF_SIZE, fil))
        {
            sscanf (&buf[0], "%s %s %s %s %s %s %d %d %d %s %s %d %s %d", bufTemp, bufTemp, personArrDyn[i].firstname, personArrDyn[i].lastname,
                    bufTemp, bufTemp, &personArrDyn[i].bd.day, &personArrDyn[i].bd.month, &personArrDyn[i].bd.year, bufTemp, bufTemp, &personArrDyn[i].iq,
                    bufTemp,  &personArrDyn[i].power);
    //        outputPersonFromConsole(personArrDyn[i]);
            i++;
        }
    }
    fclose (fil);

}

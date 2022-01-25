
const int BUF_SIZE = 500;

struct date
{
  int day;     // 4 байта
  int month; // 4 байта
  int year;    // 4 байта
};
struct persone
{
    char lastname[20];   // фамилия
    char firstname[20]; // имя
    int personId;
    int iq;
    int power;
    struct date bd;     // дата рождения
};

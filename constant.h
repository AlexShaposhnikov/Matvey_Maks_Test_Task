
const int BUF_SIZE = 500;

struct date
{
  int day;     // 4 �����
  int month; // 4 �����
  int year;    // 4 �����
};
struct persone
{
    char lastname[20];   // �������
    char firstname[20]; // ���
    int personId;
    int iq;
    int power;
    struct date bd;     // ���� ��������
};

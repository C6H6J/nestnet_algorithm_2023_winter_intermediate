#include <stdio.h>

int main() {
    int coin[6] = { 500,100,50,10,5,1 };
    int money;
    int i = 0, cnt = 0;
    scanf_s("%d", &money);

    money = 1000 - money;
    while (money > 0) 
    {
        //������ �Ž��������� Ŭ ��
        if (coin[i] > money) 
        {
            i++;
            continue;
        }
        //������ �Ž��������� �۰ų� ���� ��
        else 
        {
            money -= coin[i];
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

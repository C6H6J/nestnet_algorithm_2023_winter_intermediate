#include <stdio.h>
#include <stdlib.h>
int num[1000000];
int compare(const void* front, const void* back)
//� ������ ����ų �� �ִ� ������, �ش� �����͸� ������ �� ���� ��� ������
{
    int num1 = *(int*)front;
    int num2 = *(int*)back;
    //const void*�� ����� ������a�� ����Ű�� �޸� �ּҿ� �ִ� ���� ������ �ؼ��ؼ� ��ȯ

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main(void)
{
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &num[i]);
    }
    qsort(num, n, sizeof(int), compare);//������ �迭, ��Ұ���, ���ũ��, ���Լ�
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", num[j]);
    }
    return 0;
}
/*
qsort�Լ��� �� ���� �Լ���� �Ҹ���. 
stdlib.h ����� �ʿ�� �ϰ�, 
qsort(������ �迭, ��Ұ���,���ũ��, ���Լ�); �̷��� �����ȴ� 
���Լ��� ������������ �Ҷ���
a>b�̸� return ��������, a<b�̸� return ���� ����, a==b�̸� return 0�ϸ� �ȴ�
�̶� �Լ� ���鶧�� constvoid�� �̿��� ��� ���� ������ 2���� ������ش�.
*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    // �켱������ 5ų�α׷� ������ ����ϰ� ���� �������� 3ų�α׷� ������ ä��
    while (N > 0) {
        if (N % 5 == 0) {
            count += N / 5;
            N = 0;
            break;
        }
        N -= 3;
        count++;
    }

    // ��Ȯ�ϰ� Nų�α׷��� ���� �� ���� ���
    if (N < 0)
        printf("-1\n");
    else
        printf("%d\n", count);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	while (N != 1)  // N�� 1�� �ƴ� ��
	{
		for (int i = 2; i <= N; i++)  // 2���� �μ� Ȯ��
		{
			if (N % i == 0)  // ������ �������� ���
			{
				printf("%d\n", i);
				N /= i;  // N = �μ��� ���� ��
				break;
			}
		}
	}

	return 0;
}
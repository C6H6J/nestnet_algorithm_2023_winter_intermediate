#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int E, S, M;  // �Է¹��� ���� E, S, M
	int year = 1;  // �츮����� ����

	scanf("%d %d %d", &E, &S, &M);

	if (E == 15)  // E, S, M �� 15, 28, 19�� �� 0���� �ʱ�ȭ
	{
		E = 0;
	}
	if (S == 28)
	{
		S = 0;
	}
	if (M == 19)
	{
		M = 0;
	}

	while (1)  // �������� E, S, M�� �Ǵ� year ���ϱ�
	{
		if (year % 15 == E && year % 28 == S && year % 19 == M)
		{
			break;
		}
		else
		{
			year++;
		}
	}

	printf("%d", year);

	return 0;
}
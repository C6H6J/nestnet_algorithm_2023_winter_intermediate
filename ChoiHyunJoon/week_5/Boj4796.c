#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int L, P, V;
	int case_n = 1;  // case #

	while (1)   // L, P, V�� ��� 0�� �ƴҶ� �ݺ�
	{
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 && P == 0 && V == 0)
		{
			break;
		}
		else
		{
			int day = 0;  // ķ���� ��� ���� ��¥ �ʱ�ȭ

			day += (V / P) * L;  // �����ϴ� �� ���� �� ����� ����, �����ϴ� �� �� * ��밡�� �� ��

			if ((V % P) > L)  // ��ü�ް�(V) �� �����ϴ� �� ��(P)�� ���� �������� ��밡�� �� ��(L) ���� ũ�� L �ϸ�ŭ �� ��밡��
			{
				day += L;
			}
			else  // �׷��� ������, ex) L�� 5 �� �� V % P == 3 �̸� 3�ϸ�ŭ �� ��밡��
			{
				day += V % P;
			}
			printf("Case %d: %d\n", case_n, day);
			case_n++;
		}
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		int count = 0;  // ����� ����

		for (int j = 1; j <= sqrt(i); j++)  // i�� �����ٱ����� Ȯ��
		{
			if ((i % j) == 0)
			{
				count += 1;
			}
			if (count == 2)
			{
				break;
			}
		}
		if (i != 1 && count == 1)  // ���ڰ� 1�� �ƴϰ� ����� 1�ۿ� ���� �� ���
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
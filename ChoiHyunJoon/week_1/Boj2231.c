#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n;  // �Է¹��� ���
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int sum = 0;  //������ Ȯ���� ���� ���
		int temp = i;  // while�� �ȿ��� i���� �ٷ�� ���� ���

		sum += i;
		while (1)
		{
			sum += temp % 10;  // ���� �ڸ� ���ϱ�
			temp /= 10;  // 10���� ���� �� ���� �ڸ����� ���� �ڸ��� ��ġ
			if (temp == 0)  // ���� �ڸ��� ������ ����
			{
				break;
			}
		}
		if (sum == n)
		{
			printf("%d\n", i);
			break;
		}
		else if (i == n)  // �����ڰ� ���� ��� 0���
		{
			printf("0");
		}
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B, a, b;
	int cod, com;  // �ִ�����, �ּҰ����
	scanf("%d %d", &A, &B);
	if (B > A)  // �Է¹��� �� �� ũ�⿡ ���� A, B �缳��
	{
		int temp;
		temp = A;
		A = B;
		B = temp;
	}

	a = A, b = B;
	while (1)  // ��Ŭ���� ȣ����, �������� 0�� �� b ��� (�ִ� �����)
	{
		if ((a % b) == 0) 
		{
			cod = b;
			printf("%d\n", cod);
			break;
		}
		else
		{
			int temp = a;
			a = b;
			b = temp % b;
		}
	}

	com = A * B / cod;  // �ּҰ���� = A * B / �ִ�����

	printf("%d", com);
	
	return 0;
}
#include <stdio.h>
int main()
{
	int a, b;
	int max, min;//ū�� ������
	int quo, rem;//�� ������
	int gcd, lcm;//�ִ����� �ּҰ����
	
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	while (1)
	{
		quo = max / min;
		rem = max % min;

		if (rem == 0)
			break;
		max = min;
		min = rem;
	}
	lcm = min;
	gcd = (a * b) / lcm;//�μ��� ��= �ִ�����*�ּҰ����
	printf("%d\n%d\n", lcm, gcd);
	return 0;
}
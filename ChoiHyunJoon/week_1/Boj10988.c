#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char word[101];  // �ܾ� �Է¹��� �迭

	int D = 1;  // �Ǻ� ����

	scanf("%s", &word);

	for (int i = 0; i < strlen(word) / 2; i++)
	{
		if (word[i] != word[strlen(word) - i - 1])  // ��Ī�Ǵ� �迭���ҳ��� ���� ������ D=0, �ݺ� ����
		{
			D = 0;
			break;
		}
	}
	
	printf("%d", D);

	return 0;
}
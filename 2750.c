#include <stdio.h>

int main()
{
	int N, num[1000], temp;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < N; i++)
	{
		temp = num[i];
		int j = i - 1; //�̿��ϴ� ���ڵ��� ��
		for (; j >= 0; j--)//i��° ���ڸ� ������ ���ڵ�� ��� ��
		{
			if (num[j] < temp) break;
			num[j + 1] = num[j]; //������ �� Ŭ��� swap
		}
		num[j + 1] = temp;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", num[i]);
	}
}
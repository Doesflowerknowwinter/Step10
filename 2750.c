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
		int j = i - 1; //이웃하는 숫자들을 비교
		for (; j >= 0; j--)//i번째 숫자를 왼쪽의 숫자들과 모두 비교
		{
			if (num[j] < temp) break;
			num[j + 1] = num[j]; //왼쪽이 더 클경우 swap
		}
		num[j + 1] = temp;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", num[i]);
	}
}
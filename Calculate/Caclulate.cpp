#include <iostream>

using namespace std;

int calculateSum(int num1, int num2, int num3, int num4, int num5)
{
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum;
}

double calculateAvg(int num1, int num2, int num3, int num4, int num5)
{
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum / 5;
}

void ascending(int arr[], int n)
{
	int i;
	int j;

	for (int i = 0; i < n - 1; i++) 
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[j] < arr[minIndex]) 
			{
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

void descending(int arr[], int n)
{
	int i;
	int j;

	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

int main()
{
	int numbers[5];
	int num;

	cout << "첫 번째 숫자를 입력해주세요: ";
	cin >> numbers[0];

	cout << "두 번째 숫자를 입력해주세요: ";
	cin >> numbers[1];

	cout << "세 번째 숫자를 입력해주세요: ";
	cin >> numbers[2];

	cout << "네 번째 숫자를 입력해주세요: ";
	cin >> numbers[3];

	cout << "다섯 번째 숫자를 입력해주세요: ";
	cin >> numbers[4];

	cout << "총합: " << calculateSum(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]) << endl;
	cout << "평균: " << calculateAvg(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]) << endl;

	cout << "1. 오름차순 정렬 2. 내림차순 정렬";
	cin >> num;
	if (num == 1)
	{
		ascending(numbers, 5);
		cout << "오름차순 정렬: " << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << ", " << numbers[3] << ", " << numbers[4] << endl;
	}
	else if (num == 2)
	{
		descending(numbers, 5);
		cout << "내림차순 정렬: " << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << ", " << numbers[3] << ", " << numbers[4] << endl;
	}
	return 0;
}
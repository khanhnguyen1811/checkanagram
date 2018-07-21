#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std; 
void sortStr(char *input) {
	int coutArr[256] = { 0 }, length, i, j;
	length = strlen(input);
	for (i = 0; i < length; i++)
	{
		coutArr[input[i]]++;
	}
	for (i = 0, j = 0; i < 256; i++)
	{
		if (coutArr[i] != 0)
		{
			while (coutArr[i] >0)
			{
				input[j++] = i;
				coutArr[i]--;
			}
		}
	}
	input[i] = '\0';
}
int checkAna(char *arr1, char *arr2) {
	if (strlen(arr1) != strlen(arr2))
	{
		return 0;
	}
	sortStr(arr1);
	sortStr(arr2);
	if (strcmp(arr1, arr2) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	//return 0;
}

int main() {
	char arr1[100], arr2[100];
	cout << "nhap arr1: "; cin.getline(arr1, 100);
	cout << "nhap arr2: "; cin.getline(arr2, 100);
	if (checkAna(arr1, arr2) == 1)
	{
		cout << "anagram";
	}
	else
	{
		cout << "not anagram";
	}
	return 0;
}
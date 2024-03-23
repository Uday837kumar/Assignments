// 021-CallbackFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
#include <stdio.h>
 
int chkifpresent(int* arrPtr, int numElems, int (*func)(int num));
int isDivBySevenAndNine(int num);
int isDivByThreeAndFive(int num);
 
int main()
{
	int numArr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
 
	int flg = chkifpresent(numArr, 10, isDivBySevenAndNine);
	if (flg == 1)
		printf("There is at least one element that satisfies the condition\n");
	else
		printf("There is no element that satisfies the condition\n");
 
	flg = chkifpresent(numArr, 10, isDivByThreeAndFive);
	if (flg == 1)
		printf("There is at least one element that satisfies the condition\n");
	else
		printf("There is no element that satisfies the condition\n");
 
}
 
int isDivBySevenAndNine(int num)
{
	if (num % 7 == 0 && num % 9 == 0)
		return 1;
	return 0;
}
 
int isDivByThreeAndFive(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
		return 1;
	return 0;
 
}
 
 
int chkifpresent(int* arrPtr, int numElems, int (*func)(int num))
{
	int idx;
 
	// Check if the array contains any element that is divisible by 7 and 9
	for (idx = 0; idx < numElems; idx++)
	{
		if (func(arrPtr[idx]))
			return 1;
	}
 
	return 0;
 
 
}
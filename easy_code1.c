#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//判断字符串是否具有下标以及字符数组的下标。

int main() {
	int i = 0;
	char arr[] = { "abcedf" };
	char arr2[] = { 'a','b','c','d','e','f','\0'};
	int a = strlen(arr2) - 1;
	while(i <= a) {
		printf("%c\t", arr2[i]);
		i++;
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ж��ַ����Ƿ�����±��Լ��ַ�������±ꡣ

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


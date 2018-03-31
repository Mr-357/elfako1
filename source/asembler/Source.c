//#include <iostream>
#include <stdio.h>


int add(int x, int y) {
	_asm {
		mov eax,x
		mov ebx,y
		add eax,ebx
	}
}
int main()
{
	int x = 2;
	int y = 4;
	int z = 0;
	z = add(x, y);
	printf("%d", z);
	system("pause");
}
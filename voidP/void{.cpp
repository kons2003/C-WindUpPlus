#include <stdio.h>

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };
	void* pv;

	pv = a;			// 가능
	pv = &a[2];		// 가능

	*pv = 35;		// 오류
	pv++;			// 오류

	*(int*)pv = 35;	// 가능

	return 0;
}

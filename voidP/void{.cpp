#include <stdio.h>

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };
	void* pv;

	pv = a;			// ����
	pv = &a[2];		// ����

	*pv = 35;		// ����
	pv++;			// ����

	*(int*)pv = 35;	// ����

	return 0;
}

#include <stdio.h>

int CleanInputBuffer() {
	while (getchar() != '\n') {};
}

int main() {
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	CleanInputBuffer();
		
	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);
}

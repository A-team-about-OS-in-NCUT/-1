#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char oldname[100], newname[100];
	printf("�������һ���ļ�������·��: ");
	gets(oldname);
	printf("�����޸�Ϊ: ");
	gets(newname);
	if (argc != 3) {
		printf("1.c %s %s", oldname, newname);
		exit(1);
	}
	if (rename(oldname, newname) == 0)
		printf("�Ѿ����ļ� %s �޸�Ϊ %s.\n", oldname, newname);
	else
		perror("rename call failed");
	return 0;
}
#include <stdio.h>
#include <fcntl.h>

int main(void) {
	char oldname[100], newname[100];
	printf("�������һ���ļ�������·��: ");
	gets(oldname);
	printf("�����޸�Ϊ: ");
	gets(newname);
	if (rename(oldname, newname) == 0)
		printf("�Ѿ����ļ� %s �޸�Ϊ %s.\n", oldname, newname);
	else
		perror("rename call failed");
	return 0;
}
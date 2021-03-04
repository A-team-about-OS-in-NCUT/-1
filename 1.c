#include <stdio.h>
#include <fcntl.h>

int main(void) {
	char oldname[100], newname[100];
	printf("请告诉我一个文件的完整路径: ");
	gets(oldname);
	printf("您想修改为: ");
	gets(newname);
	if (rename(oldname, newname) == 0)
		printf("已经把文件 %s 修改为 %s.\n", oldname, newname);
	else
		perror("rename call failed");
	return 0;
}
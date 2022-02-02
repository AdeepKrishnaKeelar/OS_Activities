#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<dirent.h>
void listfiles(const char *path);
int main() {
  char *path;
  path = (char*)malloc(100*sizeof(char));
  scanf("%s",path);
  listfiles(path);
  return 0;
}
void listfiles(const char *path) {
struct dirent *dp;
DIR *dir = opendir(path);
if(!dir) 
	return;
while((dp=readdir(dir))!=NULL) {
	printf("%s\n",dp->d_name);
}
closedir(dir);
}

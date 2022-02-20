#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<dirent.h>

void listfiles(const char *path);
int main() {
  char *path,ch[3];
  do {
  path = (char*)malloc(100*sizeof(char));
  scanf("%s",path);
  listfiles(path);
  printf("Do you wish to check again..? Yes to accept, else anything");
  scanf("%s",ch);
  }while((strcmp(ch,"Yes")==0)||(strcmp(ch,"Y")==0)||(strcmp(ch,"yes")==0));
  return 0;
}

void listfiles(const char *path) {
struct dirent *dp;
DIR *dir = opendir(path);
if(!dir) {
  printf("Entered path does not exist!\n");
	return;
} while((dp=readdir(dir))!=NULL) {
	printf("%s\n",dp->d_name);
}
closedir(dir);
}

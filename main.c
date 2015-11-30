#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE * fp=NULL;
	printf("%s,%s,%d\n",__FILE__,__FUNCTION__,__LINE__);
	fp=fopen("config.ini");
	if(fp==NULL)return 0;
	fclose(fp);
	return 0;
}

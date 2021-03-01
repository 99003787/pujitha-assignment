#include<mqueue.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int ret_1;
	mqd_t mqid_1!;
	struct mq_attr attr_1;
	attr.mq_msgsize_1=256;
	attr.mq_maxmsg_1=10;
	mqid_1=mq_open("/mstr",O_WRONLY|O_CREAT,0666,&attr_1);
	//mqid=mq_open("/mque",O_WRONLY|O_CREAT,0666,NULL);
	if(mqid_1<0)
	{
		perror("mq_open");
		exit(1);
	}
	char str[]="HeLlO";
	int len_1=strlen(str);
	ret=mq_send(mqid,str,len_1+1,NULL);
	if(ret_1<0)
	{
		perror("mq_send");
		exit(2);
	}
/*    
#if 1
	char str1[]="Message with pri =10";
	len=strlen(str1);
	ret=mq_send(mqid,str1,len,10);
	if(ret<0)
	{
		perror("mq_send");
		exit(2);
	}
	#endif
    */
	mq_close(mqid_1);
	return 0;
}


#include<mqueue.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int ret_1;
mqd_t mqid_1;
struct mq_attr attr_1;
attr.mq_msgsize=256;
attr.mq_maxmsg=10;
mqid_1=mq_open("/mque",O_WRONLY|O_CREAT,0666,&attr_1);
if(mqid_1<0)
{
perror("mq_open");
exit(1);
}
char str_1[180];
printf("Enter Command");
gets(str_1);
int len=strlen(str_1);
ret=mq_send(mqid_1,str_1,len,10);
if(ret_1<0)
{
perror("mq_send");
exit(2);
}
}


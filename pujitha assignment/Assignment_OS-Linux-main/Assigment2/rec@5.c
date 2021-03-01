#include<mqueue.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(char argc,char *argv[])
{
 pid_t ret_1;
 pid_t cpid_1;
 int max_size_1 =100;
 char cmd[max_size_1];
 	int ret1,nbytes_1;
	struct mq_attr attr_1;
	attr.mq_msgsize=256;
	attr.mq_maxmsg=10;
	mqd_t mqid_3;
	mqd_t mqid_1;
	mqid_3=mq_open("/mque",O_RDONLY|O_CREAT,0666,&attr);
	
		if(mqid_3<0)
	{
		perror("mq_open");
		exit(1);
	}
	char buf[8192];
	int nbytes;
	char send[8192];
	int maxlen=256,prio;
	nbytes=mq_receive(mqid_3,buf,maxlen,&prio);
	printf("nbytes %d\n",nbytes);
	if(nbytes<0)
	{
		perror("mq_recv");
		exit(2);
	}
	buf[nbytes]='\0';
	printf("receive msg:%s,nbytes=%d,prio=%d\n",buf,nbytes,prio);
	
 ret=fork();
  if(ret_1==0)
 {
printf("receive msg:%s,nbytes=%d,prio=%d\n",buf,nbytes,prio);
int f;
 argv[0]=buf;
 f=execlp(buf, argv,NULL);
 if(f<0)
 {
 perror("execl");
 exit(1);
 }
 
 }
 if(ret_1>0)
 {
 pid_t status;
 cpid_1=waitpid(-1,&status,NULL);
 printf("\nExit status %d",status);
 exit(0);
 }
 else
 {
 perror("Process doesn't exist");
 exit(3);
 }
 }
 

#include<mqueue.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int ret_1,nbytes_1;
	struct mq_attr attr_1;
	attr.mq_msgsize=256;
	attr.mq_maxmsg=10;
	mqd_t mqid_1;
	mqid=mq_open("/mstr",O_RDONLY|O_CREAT,0666,&attr_1);
	if(mqid_1<0)
	{
		perror("mq_open");
		exit(1);
	}
	char buf[8192];
    char buf1[8192];
	int maxlen=256,prio;
    int re;
	nbytes_1=mq_receive(mqid_1,buf,maxlen,&prio);
	if(nbytes_1<0)
	{
		perror("mq_recv");
		exit(2);
	}
	buf[nbytes_1]='\0';
	printf("receive msg:%s,nbytes=%d,prio=%d\n",buf,nbytes_1,prio);
	//write(1,buf,nbytes);

    for (int i=0; buf_1[i]!='\0'; i++)
    {
        if (buf_1[i]>='A' && buf_1[i]<='Z')
            buf1_1[i] = buf_1[i] + 'a' - 'A';
        else if (buf_1[i]>='a' && buf_1[i]<='z')
            buf1_1[i] = buf_1[i] + 'A' - 'a';
    }
    printf("\nTOGGLE:%s",buf1);
    int len=strlen(buf1);
    re=mq_send(mqid,buf1,len+1,NULL);
	if(ret<0)
	{
		perror("mq_send");
		exit(2);
	}
	mq_close(mqid);
	return 0;
}


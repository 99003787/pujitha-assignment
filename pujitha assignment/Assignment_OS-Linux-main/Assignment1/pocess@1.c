#include<unistd.h>
#include<stdio.h>

int main()
{
	pid_t ret_1;
	printf("welcome...pid=%d\n",getpid());
    char c_1[100]="ls",c_2[100],c_3[100]="-l",c_4[100],c5[100];
     printf("enter one command\n");
       gets(c_1);
       gets(c_3);
	   gets(c_4);
	   gets(c_5);
	   	ret_1=fork();
	if(ret_1<0)
	{
		perror("fork");
		exit(1);
	}
	if(ret_1==0)
	{
		printf("child-1-hello,pid=%d,ppid=%d\n",
				getpid(),getppid());
		int e=execlp(strcpy(c_2,c_1), strcpy(c_2,c_1),NULL);
		if(e<0)
		{
            printf("\nerror\n");
			perror("execv");
			exit(1);
		}
	}
	else		//ret>0
	{
		printf("parent--hello,pid=%d,ppid=%d\n",
				getpid(),getppid());
				int ret1=fork();
		if(ret_1==0)
		{
		printf("child-2-hello,pid=%d,ppid=%d\n",
				getpid(),getppid());
		int k=execlp(strcpy(c_2,c_3), strcpy(c_2,c_3),NULL);
		if(e<0)
		{
            printf("\nerror\n");
			perror("execv");
			exit(1);
			}
		}
		else
		{
			if(fork()==0)
			{
				int e=execlp(strcpy(c_2,c_4), strcpy(c_2,c_4),NULL);
				if(e<0)
				{
            		printf("\nerror\n");
					perror("execv");
					exit(1);
				}
			}
			else{
				if(fork()==0)
				{
					int e=execlp(strcpy(c_2,c5), strcpy(c_2,c5),NULL);
				if(e<0)
				{
            		printf("\nerror\n");
					perror("execv");
					exit(1);
				}
				}
				else{
					printf("\n4th ccommand\n");
				}
				printf("\n3rd command\n");
			}
		}
		}
	printf("Thank you..pid=%d\n",getpid());
	return 0;
}
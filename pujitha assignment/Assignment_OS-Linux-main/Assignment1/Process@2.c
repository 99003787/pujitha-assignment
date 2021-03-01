#include<stdio.h>
#include<unistd.h>
int main()
{
    int ret_1;
    
    char *c_1="gcc";
    char *c_2="test.c";
    char *c_3="test.o";
    char *c_4="-o p2.out";
    
    ret_1=fork();
    if(ret_1<0)
    {
        printf("error in creating child process\n");
        exit(0);
    }

    if(ret==0)
    {
        int t=execlp(c_1,c_1,c_2,"-c",NULL);
        if(t<0)
        {
            printf("error in exec\n");
        }
    }
    else
    {
        int status_1=waitpid(-1,&_1,NULL);
        printf("in main");
        int ret_2=fork();
        if(ret_2==0)
        {
            int t=execlp(c_1,c_1,c_3,c_4,NULL);
              if(t<0)
        {
            printf("error in exec\n");
        }
        }
        else
        {

        }
    }
}
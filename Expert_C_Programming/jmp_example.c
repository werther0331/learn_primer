#include <setjmp.h>
#include <stdio.h>

jmp_buf buf;

void banana()
{
    printf("enter %s\n", __FUNCTION__);
    longjmp(buf, 1);

    printf("you'll never see this, because i longjump'd \n");
}

int main(int argc, char **argv)
{
    if(setjmp(buf)){
        printf("back in main\n");
    }
    else {
        printf("first time through\n");
        banana();
    }
    return 0;
}

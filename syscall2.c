#include <stdio.h>
#include <unistd.h>
#include <linux/kernel.h>
#include <sys/syscall.h>

#define __NR_simple_add 319

long simple_add_syscall(int n1, int n2, int* result) {
    return syscall(__NR_simple_add,n1,n2,&result);
    return -1;
}

int main(int argc, char *argv[]) {
	int n1 = 4;  // set these two variables to do additions
	int n2 = 2;  // with different numbers
	int result;
    simple_add_syscall(n1,n2,&result);
    return 0;
}

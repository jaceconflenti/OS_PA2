#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long sys_simple_add(int n1, int n2, int* result)
{
printk(KERN_ALERT "Adding the first number, %d, with the second number, %d.\n", n1, n2);
*result = (n1 + n2);
printk(KERN_ALERT "The result is %d.\n", *result);
return 0;
}

## Passing Parameters to Functions ##

There are two methods:

1. Call By Value
2. Call By Reference

**Call By Value**

Here values of variables are passed to the called function. 
The called function uses a copy of the actual arguments to perform its intended task. 
So, the changes made are only reflected in the called function and values of variables in the main function remain unaffected.

*Merit:* - Arguments can be passed as variables, literals or expressions.

*Demerit:* - Copying data consumes additional storage space and affects performance.

**Call By Reference**

Here the addresses of variables are passed to the called function to access the actual argument used in the function call. 
The called function uses the actual arguments to perform its intended task.
So, the changes made are also reflected in the main function and thus values of variables in the main function are affected.

*Merit:* - Better time and space efficiency.

*Demerit:* - Changes are reflected in main function too, i.e. data may get overwritten.

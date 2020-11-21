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

**Output**

![image](https://user-images.githubusercontent.com/54772502/99881861-3dba1100-2c42-11eb-9836-9900c24eb3b6.png)



**Call By Reference**

Here the addresses of variables are passed to the called function to access the actual argument used in the function call. 
The called function uses the actual arguments to perform its intended task.
So, the changes made are also reflected in the main function and thus values of variables in the main function are affected.

*Merit:* - Better time and space efficiency.

*Demerit:* - Changes are reflected in main function too, i.e. data may get overwritten.

**Output**

![image](https://user-images.githubusercontent.com/54772502/99881898-a608f280-2c42-11eb-99c1-eeb2d658b254.png)

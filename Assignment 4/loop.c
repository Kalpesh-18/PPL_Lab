#include<stdio.h>
int main()
{
	int i = 2;
	for(int j = 1;j < 10;j++)
	{
		j += i;
	}
	return 0; 
}


/*
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000001129 <+0>:	endbr64 
   0x000000000000112d <+4>:	push   %rbp
   0x000000000000112e <+5>:	mov    %rsp,%rbp
   0x0000000000001131 <+8>:	movl   $0x2,-0x4(%rbp)
   0x0000000000001138 <+15>:	movl   $0x1,-0x8(%rbp)
   0x000000000000113f <+22>:	jmp    0x114b <main+34>
   0x0000000000001141 <+24>:	mov    -0x4(%rbp),%eax
   0x0000000000001144 <+27>:	add    %eax,-0x8(%rbp)
   0x0000000000001147 <+30>:	addl   $0x1,-0x8(%rbp)
   0x000000000000114b <+34>:	cmpl   $0x9,-0x8(%rbp)
   0x000000000000114f <+38>:	jle    0x1141 <main+24>
   0x0000000000001151 <+40>:	mov    $0x0,%eax
   0x0000000000001156 <+45>:	pop    %rbp
   0x0000000000001157 <+46>:	retq   
End of assembler dump.


*/

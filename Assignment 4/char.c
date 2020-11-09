#include<stdio.h>
int main()
{
	char a = 'Z';
	char b = 'Y';
	return 0; 
}


/*
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000001129 <+0>:	endbr64 
   0x000000000000112d <+4>:	push   %rbp
   0x000000000000112e <+5>:	mov    %rsp,%rbp
   0x0000000000001131 <+8>:	movb   $0x5a,-0x2(%rbp)
   0x0000000000001135 <+12>:	movb   $0x59,-0x1(%rbp)
   0x0000000000001139 <+16>:	mov    $0x0,%eax
   0x000000000000113e <+21>:	pop    %rbp
   0x000000000000113f <+22>:	retq   
End of assembler dump.

*/

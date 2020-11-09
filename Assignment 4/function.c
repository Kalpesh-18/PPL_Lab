#include <stdio.h>

//function add definition
int add(int a, int b) {
    return a + b;
}

int main() {

    //declaration and initialization
    int a = 10;
    int b = 20;

    //declaration and function add call
    int c = add(a, b);

    //print output
    printf("%d", c);

    return 0;
}


/*
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000001161 <+0>:	endbr64 
   0x0000000000001165 <+4>:	push   %rbp
   0x0000000000001166 <+5>:	mov    %rsp,%rbp
   0x0000000000001169 <+8>:	sub    $0x10,%rsp
   0x000000000000116d <+12>:	movl   $0xa,-0xc(%rbp)
   0x0000000000001174 <+19>:	movl   $0x14,-0x8(%rbp)
   0x000000000000117b <+26>:	mov    -0x8(%rbp),%edx
   0x000000000000117e <+29>:	mov    -0xc(%rbp),%eax
   0x0000000000001181 <+32>:	mov    %edx,%esi
   0x0000000000001183 <+34>:	mov    %eax,%edi
   0x0000000000001185 <+36>:	callq  0x1149 <add>
   0x000000000000118a <+41>:	mov    %eax,-0x4(%rbp)
   0x000000000000118d <+44>:	mov    -0x4(%rbp),%eax
   0x0000000000001190 <+47>:	mov    %eax,%esi
   0x0000000000001192 <+49>:	lea    0xe6b(%rip),%rdi        # 0x2004
   0x0000000000001199 <+56>:	mov    $0x0,%eax
   0x000000000000119e <+61>:	callq  0x1050 <printf@plt>
   0x00000000000011a3 <+66>:	mov    $0x0,%eax
   0x00000000000011a8 <+71>:	leaveq 
   0x00000000000011a9 <+72>:	retq   
End of assembler dump.
*/

	.file	"hello.c"
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
 subq $4000, %rsp
	pushq	$0
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	pushq	-8(%rbp)
	pushq	$6
	pop	%rbx
	pop	%rax
	subl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
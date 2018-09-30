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
	pushq	$72
	pop	%rbx
	movl	 %ebx, -4(%rbp)
	pushq	$18
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	pushq	$1
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setne	%al
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -16(%rbp)
	pushq	-12(%rbp)
	pushq	-16(%rbp)
	pop	%rbx
	pop	%rax
	andl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -20(%rbp)
	pushq	-20(%rbp)
	pop	%rbx
	movl	 %ebx, -24(%rbp)
	pushq	-24(%rbp)
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

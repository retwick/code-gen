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
	pushq	$6
	pop	%rbx
	movl	 %ebx, -4(%rbp)
jmp .L0
.L1:
	pushq	-4(%rbp)
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-8(%rbp)
	pushq	$1
	pop	%rbx
	pop	%rax
	subl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -4(%rbp)
.L0:
	pushq	-4(%rbp)
	pushq	$1
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setge	%al
	pushq	%rax
	pop	%rax
	cmpl	$0, %eax
	jne .L1
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits

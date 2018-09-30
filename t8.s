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
	pushq	$1
	pop	%rax
	negl %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	pushq	$2999
	pop	%rbx
	movl	 %ebx, -4(%rbp)
	pushq	$2999
	pushq	$6
	pop	%rbx
	pop	%rax
	cltd
	idivl	%ebx
	movl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	pushq	$0
	pop	%rbx
	movl	 %ebx, -16(%rbp)
	pushq	$90
	pop	%rbx
	movl	 %ebx, -36(%rbp)
	pushq	$85
	pop	%rbx
	movl	 %ebx, -40(%rbp)
	pushq	-12(%rbp)
	pushq	$2
	pop	%rbx
	pop	%rax
	cltd
	idivl	%ebx
	movl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	pushq	-12(%rbp)
	pop	%rbx
	movl	 %ebx, -4(%rbp)
	pushq	-8(%rbp)
	pushq	-16(%rbp)
	pop	%rbx
	pop	%rax
	cmp $0, %eax
je	.L0
	cmp $0, %ebx
je	.L0
	movl	$1, %eax
	jmp	.L1
.L0:
	movl $0, %eax
.L1:
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -20(%rbp)
	pushq	$21
	pushq	-4(%rbp)
	pop	%rbx
	pop	%rax
	imull	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -24(%rbp)
	pushq	$786
	pushq	-24(%rbp)
	pop	%rbx
	pop	%rax
	subl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -28(%rbp)
	pushq	$13
	pushq	$51
	pop	%rbx
	pop	%rax
	imull	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -32(%rbp)
	pushq	-32(%rbp)
	pushq	$3
	pop	%rbx
	pop	%rax
	cltd
	idivl	%ebx
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -32(%rbp)
	pushq	-32(%rbp)
	pushq	-28(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setg	%al
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -40(%rbp)
	pushq	-40(%rbp)
	pop	%rbx
	cmpl	$0, %ebx
	sete %al
	movzbl	%al, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -44(%rbp)
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits

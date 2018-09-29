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
	pushq	$120
	pop	%rbx
	movl	 %ebx, -4(%rbp)
	pushq	$40
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	sete	%al
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setne	%al
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setle	%al
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setl	%al
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setge	%al
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setg	%al
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	addl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	subl	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	imull	%ebx, %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits

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
	pushq	$42
	pop	%rbx
	movl	 %ebx, -4(%rbp)
	pushq	$51
	pop	%rbx
	movl	 %ebx, -8(%rbp)
	pushq	$99
	pop	%rax
	negl %eax
	pushq	%rax
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	pushq	-4(%rbp)
	pushq	-8(%rbp)
	pop	%rbx
	pop	%rax
	cmpl	%ebx, %eax
	setle	%al
	pushq	%rax
	pop	%rbx
	je .L0
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
	pushq	$1
	pop	%rbx
	movl	 %ebx, -12(%rbp)
	 jmp .L1
.L0:
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
.L1:
	pushq	-12(%rbp)
	pop	%rbx
	cmpl	$0, %ebx
	je .L2
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, 	%eax
	call	printf
.L2:
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits

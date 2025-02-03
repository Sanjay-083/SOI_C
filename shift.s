	.file	"shift.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "the value of r is %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$5, 28(%esp)
	movl	$0, 24(%esp)
	movl	28(%esp), %eax
	addl	%eax, 24(%esp)
	movl	28(%esp), %eax
	sall	$2, %eax
	addl	%eax, 24(%esp)
	movl	28(%esp), %eax
	sall	$3, %eax
	addl	%eax, 24(%esp)
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (tdm-1) 5.1.0"
	.def	_printf;	.scl	2;	.type	32;	.endef

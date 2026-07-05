	.file	"condition.c"
	.text
	.globl	main                            # -- Begin function main
	.p2align	4
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$50, -8(%rbp)
	movl	$60, -12(%rbp)
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.LBB0_4
# %bb.1:
	cmpl	$20, -8(%rbp)
	jge	.LBB0_3
# %bb.2:
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
.LBB0_3:
	jmp	.LBB0_8
.LBB0_4:
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jne	.LBB0_6
# %bb.5:
	movl	$30, -8(%rbp)
	jmp	.LBB0_7
.LBB0_6:
	movl	$50, -8(%rbp)
.LBB0_7:
	jmp	.LBB0_8
.LBB0_8:
	movl	-8(%rbp), %eax
	movl	-12(%rbp), %ecx
	subl	%ecx, %eax
	movl	$50, %ecx
	movl	$40, %eax
	cmovnel	%ecx, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %esi
	leaq	.L.str(%rip), %rdi
	xorl	%eax, %eax
                                        # kill: def $al killed $al killed $eax
	callq	printf@PLT
	movl	-8(%rbp), %eax
	subl	$10, %eax
	jne	.LBB0_10
	jmp	.LBB0_9
.LBB0_9:
	movl	$0, -8(%rbp)
	jmp	.LBB0_11
.LBB0_10:
	movl	-8(%rbp), %eax
	movl	%eax, -8(%rbp)
.LBB0_11:
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"%d"
	.size	.L.str, 3

	.ident	"clang version 22.1.6"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym printf

	.file	"obj/tmppass.bc"
	.section	.debug_frame,"",@progbits
.Lsection_debug_frame:
	.section	.debug_info,"",@progbits
.Lsection_info:
	.section	.debug_abbrev,"",@progbits
.Lsection_abbrev:
	.section	.debug_aranges,"",@progbits
.Lsection_aranges:
	.section	.debug_macinfo,"",@progbits
.Lsection_macinfo:
	.section	.debug_line,"",@progbits
.Lsection_line:
	.section	.debug_loc,"",@progbits
.Lsection_loc:
	.section	.debug_pubnames,"",@progbits
.Lsection_pubnames:
	.section	.debug_str,"",@progbits
.Lsection_str:
	.section	.debug_ranges,"",@progbits
.Lsection_ranges:
	.text
.Ltext_begin:
	.data
.Ldata_begin:


	.text
	.align	16
	.globl	bounded_buf_init
	.type	bounded_buf_init,@function
bounded_buf_init:                                           # @bounded_buf_init
.Lfunc_begin1:
.Llabel8:
.LBB1_0:                                                    # %entry
	pushq	%r15
.Llabel3:
	pushq	%r14
.Llabel4:
	pushq	%r12
.Llabel5:
	pushq	%rbx
.Llabel6:
	subq	$40, %rsp
.Llabel7:
	movq	%rsi, %rbx
	movq	%rdi, %r14
	movl	$1, %edi
	leaq	32(%rsp), %r15
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%r14, 32(%rsp)
	movl	$2, %edi
	leaq	24(%rsp), %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 24(%rsp)
	movl	$3, %edi
	leaq	16(%rsp), %rsi
.Llabel9:
	call	_Z13myMemoryWriteiPv                        # SrcLine 38
	movl	$0, 16(%rsp)                                # SrcLine 38
	movl	$4, %edi
	movq	%r15, %rsi
.Llabel10:
	call	_Z12myMemoryReadiPv                         # SrcLine 40
	cmpq	$0, 32(%rsp)                                # SrcLine 40
	je	.LBB1_10
.LBB1_1:                                                    # %bb1
	movl	$6, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel11:
	call	_Z12myMemoryReadiPv                         # SrcLine 42
	movq	32(%rsp), %r14                              # SrcLine 42
	movl	$7, %edi
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 42
	movl	$11329274, (%r14)                           # SrcLine 42
	movl	$8, %edi
	movq	%rbx, %rsi
.Llabel12:
	call	_Z12myMemoryReadiPv                         # SrcLine 44
	movq	32(%rsp), %rdi                              # SrcLine 44
	xorl	%eax, %eax
	movl	%eax, %esi
	addq	$8, %rdi                                    # SrcLine 44
	call	pthread_mutex_init                          # SrcLine 44
	movl	%eax, %ebx
	movl	$9, %edi
	leaq	16(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 44
	movl	%ebx, 16(%rsp)                              # SrcLine 44
	movl	$10, %edi
	movq	%r14, %rsi
.Llabel13:
	call	_Z12myMemoryReadiPv                         # SrcLine 45
	cmpl	$0, 16(%rsp)                                # SrcLine 45
	je	.LBB1_4                                     # SrcLine 45
.LBB1_2:                                                    # %bb2
	movl	$11, %edi
	leaq	16(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 45
	movl	16(%rsp), %ebx                              # SrcLine 45
	movl	$12, %edi
.LBB1_3:                                                    # %bb2
	leaq	12(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 45
	movl	%ebx, 12(%rsp)                              # SrcLine 45
	jmp	.LBB1_8
.LBB1_4:                                                    # %bb3
	movl	$13, %edi
	leaq	32(%rsp), %rsi
.Llabel14:
	call	_Z12myMemoryReadiPv                         # SrcLine 47
	movq	32(%rsp), %rdi                              # SrcLine 47
	xorl	%eax, %eax
	movl	%eax, %esi
	addq	$48, %rdi                                   # SrcLine 47
	call	pthread_cond_init                           # SrcLine 47
	movl	%eax, %ebx
	movl	$14, %edi
	leaq	16(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 47
	movl	%ebx, 16(%rsp)                              # SrcLine 47
	movl	$15, %edi
	movq	%r14, %rsi
.Llabel15:
	call	_Z12myMemoryReadiPv                         # SrcLine 48
	cmpl	$0, 16(%rsp)                                # SrcLine 48
	jne	.LBB1_11
.LBB1_5:                                                    # %bb5
	movl	$19, %edi
	leaq	32(%rsp), %rsi
.Llabel16:
	call	_Z12myMemoryReadiPv                         # SrcLine 54
	movq	32(%rsp), %rdi                              # SrcLine 54
	xorl	%eax, %eax
	movl	%eax, %esi
	addq	$96, %rdi                                   # SrcLine 54
	call	pthread_cond_init                           # SrcLine 54
	movl	%eax, %ebx
	movl	$20, %edi
	leaq	16(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 54
	movl	%ebx, 16(%rsp)                              # SrcLine 54
	movl	$21, %edi
	movq	%r14, %rsi
.Llabel17:
	call	_Z12myMemoryReadiPv                         # SrcLine 55
	cmpl	$0, 16(%rsp)                                # SrcLine 55
	jne	.LBB1_12
.LBB1_6:                                                    # %bb7
	movl	$26, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel18:
	call	_Z12myMemoryReadiPv                         # SrcLine 62
	movq	32(%rsp), %r14                              # SrcLine 62
	leaq	144(%r14), %rsi                             # SrcLine 62
	movl	$27, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 62
	movq	$0, 144(%r14)                               # SrcLine 62
	movl	$28, %edi
	movq	%rbx, %rsi
.Llabel19:
	call	_Z12myMemoryReadiPv                         # SrcLine 63
	movq	32(%rsp), %r14                              # SrcLine 63
	movl	$29, %edi
	leaq	24(%rsp), %r15
	movq	%r15, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 63
	movq	24(%rsp), %r12                              # SrcLine 63
	leaq	152(%r14), %rsi                             # SrcLine 63
	movl	$30, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 63
	movq	%r12, 152(%r14)                             # SrcLine 63
	movl	$31, %edi
	movq	%rbx, %rsi
.Llabel20:
	call	_Z12myMemoryReadiPv                         # SrcLine 64
	movq	32(%rsp), %r14                              # SrcLine 64
	leaq	160(%r14), %rsi                             # SrcLine 64
	movl	$32, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 64
	movq	$0, 160(%r14)                               # SrcLine 64
	movl	$33, %edi
	movq	%rbx, %rsi
.Llabel21:
	call	_Z12myMemoryReadiPv                         # SrcLine 65
	movq	32(%rsp), %r14                              # SrcLine 65
	leaq	168(%r14), %rsi                             # SrcLine 65
	movl	$34, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 65
	movq	$0, 168(%r14)                               # SrcLine 65
	movl	$35, %edi
	movq	%r15, %rsi
.Llabel22:
	call	_Z12myMemoryReadiPv                         # SrcLine 66
	movq	24(%rsp), %rdi                              # SrcLine 66
	shlq	$3, %rdi                                    # SrcLine 66
	call	malloc                                      # SrcLine 66
	movq	%rax, %r14
	movl	$36, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 66
	movq	32(%rsp), %r15                              # SrcLine 66
	leaq	192(%r15), %rsi                             # SrcLine 66
	movl	$37, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 66
	movq	%r14, 192(%r15)                             # SrcLine 66
	movl	$38, %edi
	movq	%rbx, %rsi
.Llabel23:
	call	_Z12myMemoryReadiPv                         # SrcLine 67
	movq	32(%rsp), %rbx                              # SrcLine 67
	leaq	192(%rbx), %rsi                             # SrcLine 67
	movl	$39, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 67
	cmpq	$0, 192(%rbx)                               # SrcLine 67
	je	.LBB1_13
.LBB1_7:                                                    # %bb9
	movl	$44, %edi
	leaq	24(%rsp), %rsi
.Llabel24:
	call	_Z12myMemoryReadiPv                         # SrcLine 75
	movq	24(%rsp), %rbx                              # SrcLine 75
	movl	$45, %edi
	leaq	32(%rsp), %r14
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 75
	movq	32(%rsp), %r15                              # SrcLine 75
	leaq	192(%r15), %rsi                             # SrcLine 75
	movl	$46, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 75
	movq	192(%r15), %rdi                             # SrcLine 75
	movq	%rbx, %rdx                                  # SrcLine 75
	shlq	$3, %rdx                                    # SrcLine 75
	xorl	%esi, %esi
	call	memset                                      # SrcLine 75
	movl	$47, %edi
	movq	%r14, %rsi
.Llabel25:
	call	_Z12myMemoryReadiPv                         # SrcLine 76
	movq	32(%rsp), %rbx                              # SrcLine 76
	leaq	168(%rbx), %rsi                             # SrcLine 76
	movl	$48, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 76
	movq	$0, 168(%rbx)                               # SrcLine 76
	movl	$49, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 76
	movq	32(%rsp), %rbx                              # SrcLine 76
	leaq	168(%rbx), %rsi                             # SrcLine 76
	movl	$50, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 76
	movq	168(%rbx), %rbx                             # SrcLine 76
	movl	$51, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 76
	movq	32(%rsp), %r14                              # SrcLine 76
	leaq	160(%r14), %rsi                             # SrcLine 76
	movl	$52, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 76
	movq	%rbx, 160(%r14)                             # SrcLine 76
	movl	$53, %edi
	leaq	12(%rsp), %rsi
.Llabel26:
	call	_Z13myMemoryWriteiPv                        # SrcLine 77
	movl	$0, 12(%rsp)                                # SrcLine 77
.LBB1_8:                                                    # %bb10
	movl	$54, %edi
	leaq	12(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 77
	movl	12(%rsp), %ebx                              # SrcLine 77
	movl	$55, %edi
	leaq	20(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 77
	movl	%ebx, 20(%rsp)                              # SrcLine 77
.LBB1_9:                                                    # %return
	movl	$56, %edi
	leaq	20(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	20(%rsp), %eax
.Llabel2:
	addq	$40, %rsp                                   # SrcLine 77
	popq	%rbx                                        # SrcLine 77
	popq	%r12                                        # SrcLine 77
	popq	%r14                                        # SrcLine 77
	popq	%r15                                        # SrcLine 77
	ret                                                 # SrcLine 77
.LBB1_10:                                                   # %bb
	movl	$5, %edi
	leaq	12(%rsp), %rsi
.Llabel27:
	call	_Z13myMemoryWriteiPv                        # SrcLine 40
	movl	$22, 12(%rsp)                               # SrcLine 40
	jmp	.LBB1_8
.LBB1_11:                                                   # %bb4
	movl	$16, %edi
	leaq	32(%rsp), %rsi
.Llabel28:
	call	_Z12myMemoryReadiPv                         # SrcLine 50
	movq	32(%rsp), %rdi                              # SrcLine 50
	addq	$8, %rdi                                    # SrcLine 50
	call	pthread_mutex_destroy                       # SrcLine 50
	movl	$17, %edi
	leaq	16(%rsp), %rsi
.Llabel29:
	call	_Z12myMemoryReadiPv                         # SrcLine 51
	movl	16(%rsp), %ebx                              # SrcLine 51
	movl	$18, %edi
	jmp	.LBB1_3
.LBB1_12:                                                   # %bb6
	movl	$22, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel30:
	call	_Z12myMemoryReadiPv                         # SrcLine 57
	movq	32(%rsp), %rdi                              # SrcLine 57
	addq	$48, %rdi                                   # SrcLine 57
	call	pthread_cond_destroy                        # SrcLine 57
	movl	$23, %edi
	movq	%rbx, %rsi
.Llabel31:
	call	_Z12myMemoryReadiPv                         # SrcLine 58
	movq	32(%rsp), %rdi                              # SrcLine 58
	addq	$8, %rdi                                    # SrcLine 58
	call	pthread_mutex_destroy                       # SrcLine 58
	movl	$24, %edi
	leaq	16(%rsp), %rsi
.Llabel32:
	call	_Z12myMemoryReadiPv                         # SrcLine 59
	movl	16(%rsp), %ebx                              # SrcLine 59
	movl	$25, %edi
	jmp	.LBB1_3
.LBB1_13:                                                   # %bb8
	movl	$40, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel33:
	call	_Z12myMemoryReadiPv                         # SrcLine 69
	movq	32(%rsp), %rdi                              # SrcLine 69
	addq	$8, %rdi                                    # SrcLine 69
	call	pthread_mutex_destroy                       # SrcLine 69
	movl	$41, %edi
	movq	%rbx, %rsi
.Llabel34:
	call	_Z12myMemoryReadiPv                         # SrcLine 70
	movq	32(%rsp), %rdi                              # SrcLine 70
	addq	$48, %rdi                                   # SrcLine 70
	call	pthread_cond_destroy                        # SrcLine 70
	movl	$42, %edi
	movq	%rbx, %rsi
.Llabel35:
	call	_Z12myMemoryReadiPv                         # SrcLine 71
	movq	32(%rsp), %rdi                              # SrcLine 71
	addq	$96, %rdi                                   # SrcLine 71
	call	pthread_cond_destroy                        # SrcLine 71
	movl	$43, %edi
	leaq	12(%rsp), %rsi
.Llabel36:
	call	_Z13myMemoryWriteiPv                        # SrcLine 72
	movl	$12, 12(%rsp)                               # SrcLine 72
	jmp	.LBB1_8
	.size	bounded_buf_init, .-bounded_buf_init
.Lfunc_end1:


	.align	16
	.globl	bounded_buf_destroy
	.type	bounded_buf_destroy,@function
bounded_buf_destroy:                                        # @bounded_buf_destroy
.Lfunc_begin2:
.Llabel46:
.LBB2_0:                                                    # %entry
	pushq	%rbp
.Llabel39:
	pushq	%r15
.Llabel40:
	pushq	%r14
.Llabel41:
	pushq	%r13
.Llabel42:
	pushq	%r12
.Llabel43:
	pushq	%rbx
.Llabel44:
	subq	$40, %rsp
.Llabel45:
	movq	%rdi, %rbx
	movl	$57, %edi
	leaq	32(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 32(%rsp)
	movl	$58, %edi
	leaq	12(%rsp), %rsi
.Llabel47:
	call	_Z13myMemoryWriteiPv                        # SrcLine 83
	movl	$0, 12(%rsp)                                # SrcLine 83
	movl	$59, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 83
	movl	$0, 16(%rsp)                                # SrcLine 83
	movl	$60, %edi
	leaq	20(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 83
	movl	$0, 20(%rsp)                                # SrcLine 83
	movl	$61, %edi
	movq	%r14, %rsi
.Llabel48:
	call	_Z12myMemoryReadiPv                         # SrcLine 85
	cmpq	$0, 32(%rsp)                                # SrcLine 85
	je	.LBB2_25
.LBB2_1:                                                    # %bb
	movl	$62, %edi
	leaq	32(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 85
	movq	32(%rsp), %rbx                              # SrcLine 85
	movl	$63, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 85
	cmpl	$11329274, (%rbx)                           # SrcLine 85
	jne	.LBB2_25
.LBB2_2:                                                    # %bb2
	movl	$65, %edi
	leaq	32(%rsp), %rsi
.Llabel49:
	call	_Z12myMemoryReadiPv                         # SrcLine 88
	movq	32(%rsp), %rdi                              # SrcLine 88
	addq	$8, %rdi                                    # SrcLine 88
	call	pthread_mutex_lock                          # SrcLine 88
	movl	%eax, %ebx
	movl	$66, %edi
	leaq	12(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 88
	movl	%ebx, 12(%rsp)                              # SrcLine 88
	movl	$67, %edi
	movq	%r14, %rsi
.Llabel50:
	call	_Z12myMemoryReadiPv                         # SrcLine 89
	cmpl	$0, 12(%rsp)                                # SrcLine 89
	jne	.LBB2_26
.LBB2_3:                                                    # %bb4
	movl	$70, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel51:
	call	_Z12myMemoryReadiPv                         # SrcLine 91
	movq	32(%rsp), %r14                              # SrcLine 91
	movl	$71, %edi
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 91
	movl	$0, (%r14)                                  # SrcLine 91
	movl	$72, %edi
	movq	%rbx, %rsi
.Llabel52:
	call	_Z12myMemoryReadiPv                         # SrcLine 92
	movq	32(%rsp), %rdi                              # SrcLine 92
	addq	$8, %rdi                                    # SrcLine 92
	call	pthread_mutex_unlock                        # SrcLine 92
	movl	%eax, %ebx
	movl	$73, %edi
	leaq	12(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 92
	movl	%ebx, 12(%rsp)                              # SrcLine 92
	movl	$74, %edi
	movq	%r14, %rsi
.Llabel53:
	call	_Z12myMemoryReadiPv                         # SrcLine 93
	cmpl	$0, 12(%rsp)                                # SrcLine 93
	jne	.LBB2_27
.LBB2_4:                                                    # %bb6
	movl	$77, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel54:
	call	_Z12myMemoryReadiPv                         # SrcLine 95
	movq	32(%rsp), %rdi                              # SrcLine 95
	addq	$8, %rdi                                    # SrcLine 95
	call	pthread_mutex_destroy                       # SrcLine 95
	movl	%eax, %r14d
	movl	$78, %edi
	leaq	12(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 95
	movl	%r14d, 12(%rsp)                             # SrcLine 95
	movl	$79, %edi
	movq	%rbx, %rsi
.Llabel55:
	call	_Z12myMemoryReadiPv                         # SrcLine 96
	movq	32(%rsp), %rdi                              # SrcLine 96
	addq	$48, %rdi                                   # SrcLine 96
	call	pthread_cond_destroy                        # SrcLine 96
	movl	%eax, %r14d
	movl	$80, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 96
	movl	%r14d, 16(%rsp)                             # SrcLine 96
	movl	$81, %edi
	movq	%rbx, %rsi
.Llabel56:
	call	_Z12myMemoryReadiPv                         # SrcLine 97
	movq	32(%rsp), %rdi                              # SrcLine 97
	addq	$96, %rdi                                   # SrcLine 97
	call	pthread_cond_destroy                        # SrcLine 97
	movl	%eax, %r14d
	movl	$82, %edi
	leaq	20(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 97
	movl	%r14d, 20(%rsp)                             # SrcLine 97
	movl	$83, %edi
	movq	%rbx, %rsi
.Llabel57:
	call	_Z12myMemoryReadiPv                         # SrcLine 100
	movq	32(%rsp), %r14                              # SrcLine 100
	leaq	168(%r14), %rsi                             # SrcLine 100
	movl	$84, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 100
	movq	168(%r14), %r14                             # SrcLine 100
	movl	$85, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 100
	movq	32(%rsp), %rbx                              # SrcLine 100
	leaq	160(%rbx), %rsi                             # SrcLine 100
	movl	$86, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 100
	cmpq	160(%rbx), %r14                             # SrcLine 100
	jb	.LBB2_8                                     # SrcLine 100
.LBB2_5:                                                    # %bb7
	movl	$87, %edi
	leaq	32(%rsp), %rsi
.Llabel58:
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movq	32(%rsp), %rbx                              # SrcLine 101
	leaq	160(%rbx), %rsi                             # SrcLine 101
	movl	$88, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movl	160(%rbx), %ebx                             # SrcLine 101
	movl	$89, %edi
	leaq	24(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 101
	movl	%ebx, 24(%rsp)                              # SrcLine 101
	leaq	24(%rsp), %rbx
	leaq	32(%rsp), %r14
	movl	$94, %r15d
	movl	$95, %r12d
	jmp	.LBB2_7
.LBB2_6:                                                    # %bb8
                                                            # Loop Depth 1
                                                            # Loop Header is BB2_7
                                                            # Inner Loop
	movl	$90, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movq	32(%rsp), %r13                              # SrcLine 101
	leaq	192(%r13), %rsi                             # SrcLine 101
	movl	$91, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movq	192(%r13), %r13                             # SrcLine 101
	movl	$92, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movslq	24(%rsp), %rbp                              # SrcLine 101
	leaq	(%r13,%rbp,8), %rsi                         # SrcLine 101
	movl	$93, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movq	(%r13,%rbp,8), %rdi                         # SrcLine 101
	call	free                                        # SrcLine 101
	movl	%r15d, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movl	24(%rsp), %r13d                             # SrcLine 101
	movl	%r12d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 101
	incl	%r13d                                       # SrcLine 101
	movl	%r13d, 24(%rsp)                             # SrcLine 101
.LBB2_7:                                                    # %bb9
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$96, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movslq	24(%rsp), %r13                              # SrcLine 101
	movl	$97, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	movq	32(%rsp), %rbp                              # SrcLine 101
	leaq	168(%rbp), %rsi                             # SrcLine 101
	movl	$98, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 101
	cmpq	168(%rbp), %r13                             # SrcLine 101
	jb	.LBB2_6
	jmp	.LBB2_14
.LBB2_8:                                                    # %bb11
	movl	$99, %edi
	leaq	32(%rsp), %rsi
.Llabel59:
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movq	32(%rsp), %rbx                              # SrcLine 104
	leaq	160(%rbx), %rsi                             # SrcLine 104
	movl	$100, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movl	160(%rbx), %ebx                             # SrcLine 104
	movl	$101, %edi
	leaq	24(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 104
	movl	%ebx, 24(%rsp)                              # SrcLine 104
	leaq	24(%rsp), %rbx
	leaq	32(%rsp), %r14
	movl	$106, %r15d
	movl	$107, %r12d
	jmp	.LBB2_10
.LBB2_9:                                                    # %bb12
                                                            # Loop Depth 1
                                                            # Loop Header is BB2_10
                                                            # Inner Loop
	movl	$102, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movq	32(%rsp), %r13                              # SrcLine 104
	leaq	192(%r13), %rsi                             # SrcLine 104
	movl	$103, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movq	192(%r13), %r13                             # SrcLine 104
	movl	$104, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movslq	24(%rsp), %rbp                              # SrcLine 104
	leaq	(%r13,%rbp,8), %rsi                         # SrcLine 104
	movl	$105, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movq	(%r13,%rbp,8), %rdi                         # SrcLine 104
	call	free                                        # SrcLine 104
	movl	%r15d, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movl	24(%rsp), %r13d                             # SrcLine 104
	movl	%r12d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 104
	incl	%r13d                                       # SrcLine 104
	movl	%r13d, 24(%rsp)                             # SrcLine 104
.LBB2_10:                                                   # %bb13
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$108, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movslq	24(%rsp), %r13                              # SrcLine 104
	movl	$109, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	movq	32(%rsp), %rbp                              # SrcLine 104
	leaq	152(%rbp), %rsi                             # SrcLine 104
	movl	$110, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 104
	cmpq	152(%rbp), %r13                             # SrcLine 104
	jb	.LBB2_9                                     # SrcLine 104
.LBB2_11:                                                   # %bb14
	movl	$111, %edi
	leaq	24(%rsp), %rsi
.Llabel60:
	call	_Z13myMemoryWriteiPv                        # SrcLine 105
	movl	$0, 24(%rsp)                                # SrcLine 105
	leaq	24(%rsp), %rbx
	leaq	32(%rsp), %r14
	movl	$116, %r15d
	movl	$117, %r12d
	jmp	.LBB2_13
.LBB2_12:                                                   # %bb15
                                                            # Loop Depth 1
                                                            # Loop Header is BB2_13
                                                            # Inner Loop
	movl	$112, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movq	32(%rsp), %r13                              # SrcLine 105
	leaq	192(%r13), %rsi                             # SrcLine 105
	movl	$113, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movq	192(%r13), %r13                             # SrcLine 105
	movl	$114, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movslq	24(%rsp), %rbp                              # SrcLine 105
	leaq	(%r13,%rbp,8), %rsi                         # SrcLine 105
	movl	$115, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movq	(%r13,%rbp,8), %rdi                         # SrcLine 105
	call	free                                        # SrcLine 105
	movl	%r15d, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movl	24(%rsp), %r13d                             # SrcLine 105
	movl	%r12d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 105
	incl	%r13d                                       # SrcLine 105
	movl	%r13d, 24(%rsp)                             # SrcLine 105
.LBB2_13:                                                   # %bb16
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$118, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movslq	24(%rsp), %r13                              # SrcLine 105
	movl	$119, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	movq	32(%rsp), %rbp                              # SrcLine 105
	leaq	168(%rbp), %rsi                             # SrcLine 105
	movl	$120, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 105
	cmpq	168(%rbp), %r13                             # SrcLine 105
	jb	.LBB2_12                                    # SrcLine 105
.LBB2_14:                                                   # %bb17
	movl	$121, %edi
	leaq	32(%rsp), %rsi
.Llabel61:
	call	_Z12myMemoryReadiPv                         # SrcLine 108
	movq	32(%rsp), %rbx                              # SrcLine 108
	leaq	192(%rbx), %rsi                             # SrcLine 108
	movl	$122, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 108
	movq	192(%rbx), %rdi                             # SrcLine 108
	call	free                                        # SrcLine 108
	movl	$123, %edi
	leaq	12(%rsp), %rsi
.Llabel62:
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	cmpl	$0, 12(%rsp)                                # SrcLine 109
	jne	.LBB2_19                                    # SrcLine 109
.LBB2_15:                                                   # %bb18
	movl	$124, %edi
	leaq	16(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	cmpl	$0, 16(%rsp)                                # SrcLine 109
	jne	.LBB2_28
.LBB2_16:                                                   # %bb20
	movl	$127, %edi
	leaq	20(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	movl	20(%rsp), %ebx                              # SrcLine 109
	movl	$128, %edi
.LBB2_17:                                                   # %bb20
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 109
	movl	%ebx, 8(%rsp)                               # SrcLine 109
.LBB2_18:                                                   # %bb21
	movl	$129, %edi
	leaq	8(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	movl	8(%rsp), %ebx                               # SrcLine 109
	movl	$130, %edi
	jmp	.LBB2_20
.LBB2_19:                                                   # %bb22
	movl	$131, %edi
	leaq	12(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	movl	12(%rsp), %ebx                              # SrcLine 109
	movl	$132, %edi
.LBB2_20:                                                   # %bb22
	leaq	4(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 109
	movl	%ebx, 4(%rsp)                               # SrcLine 109
.LBB2_21:                                                   # %bb23
	movl	$133, %edi
	leaq	4(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	movl	4(%rsp), %ebx                               # SrcLine 109
	movl	$134, %edi
.LBB2_22:                                                   # %bb23
	leaq	(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 109
	movl	%ebx, (%rsp)                                # SrcLine 109
.LBB2_23:                                                   # %bb24
	movl	$135, %edi
	leaq	(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	movl	(%rsp), %ebx                                # SrcLine 109
	movl	$136, %edi
	leaq	28(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 109
	movl	%ebx, 28(%rsp)                              # SrcLine 109
.LBB2_24:                                                   # %return
	movl	$137, %edi
	leaq	28(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	28(%rsp), %eax
.Llabel38:
	addq	$40, %rsp                                   # SrcLine 109
	popq	%rbx                                        # SrcLine 109
	popq	%r12                                        # SrcLine 109
	popq	%r13                                        # SrcLine 109
	popq	%r14                                        # SrcLine 109
	popq	%r15                                        # SrcLine 109
	popq	%rbp                                        # SrcLine 109
	ret                                                 # SrcLine 109
.LBB2_25:                                                   # %bb1
	movl	$64, %edi
	leaq	(%rsp), %rsi
.Llabel63:
	call	_Z13myMemoryWriteiPv                        # SrcLine 86
	movl	$22, (%rsp)                                 # SrcLine 86
	jmp	.LBB2_23
.LBB2_26:                                                   # %bb3
	movl	$68, %edi
	leaq	12(%rsp), %rsi
.Llabel64:
	call	_Z12myMemoryReadiPv                         # SrcLine 89
	movl	12(%rsp), %ebx                              # SrcLine 89
	movl	$69, %edi
	jmp	.LBB2_22
.LBB2_27:                                                   # %bb5
	movl	$75, %edi
	leaq	12(%rsp), %rsi
.Llabel65:
	call	_Z12myMemoryReadiPv                         # SrcLine 93
	movl	12(%rsp), %ebx                              # SrcLine 93
	movl	$76, %edi
	jmp	.LBB2_22
.LBB2_28:                                                   # %bb19
	movl	$125, %edi
	leaq	16(%rsp), %rsi
.Llabel66:
	call	_Z12myMemoryReadiPv                         # SrcLine 109
	movl	16(%rsp), %ebx                              # SrcLine 109
	movl	$126, %edi
	jmp	.LBB2_17
	.size	bounded_buf_destroy, .-bounded_buf_destroy
.Lfunc_end2:


	.align	16
	.globl	bounded_buf_putcleanup
	.type	bounded_buf_putcleanup,@function
bounded_buf_putcleanup:                                     # @bounded_buf_putcleanup
.Lfunc_begin3:
.Llabel73:
.LBB3_0:                                                    # %entry
	pushq	%r15
.Llabel69:
	pushq	%r14
.Llabel70:
	pushq	%rbx
.Llabel71:
	subq	$16, %rsp
.Llabel72:
	movq	%rdi, %rbx
	movl	$138, %edi
	leaq	8(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 8(%rsp)
	movl	$139, %edi
	movq	%r14, %rsi
.Llabel74:
	call	_Z12myMemoryReadiPv                         # SrcLine 115
	movq	8(%rsp), %rbx                               # SrcLine 115
	movl	$140, %edi
	leaq	(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 115
	movq	%rbx, (%rsp)                                # SrcLine 115
	movl	$141, %edi
	movq	%r14, %rsi
.Llabel75:
	call	_Z12myMemoryReadiPv                         # SrcLine 116
	movq	(%rsp), %rbx                                # SrcLine 116
	leaq	176(%rbx), %rsi                             # SrcLine 116
	movl	$142, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 116
	movq	176(%rbx), %rbx                             # SrcLine 116
	movl	$143, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 116
	movq	(%rsp), %r15                                # SrcLine 116
	leaq	176(%r15), %rsi                             # SrcLine 116
	movl	$144, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 116
	decq	%rbx                                        # SrcLine 116
	movq	%rbx, 176(%r15)                             # SrcLine 116
	movl	$145, %edi
	movq	%r14, %rsi
.Llabel76:
	call	_Z12myMemoryReadiPv                         # SrcLine 117
	movq	(%rsp), %rdi                                # SrcLine 117
	addq	$8, %rdi                                    # SrcLine 117
	call	pthread_mutex_unlock                        # SrcLine 117
.LBB3_1:                                                    # %return
.Llabel77:
.Llabel68:
	addq	$16, %rsp                                   # SrcLine 118
	popq	%rbx                                        # SrcLine 118
	popq	%r14                                        # SrcLine 118
	popq	%r15                                        # SrcLine 118
	ret                                                 # SrcLine 118
	.size	bounded_buf_putcleanup, .-bounded_buf_putcleanup
.Lfunc_end3:


	.align	16
	.globl	bounded_buf_getcleanup
	.type	bounded_buf_getcleanup,@function
bounded_buf_getcleanup:                                     # @bounded_buf_getcleanup
.Lfunc_begin4:
.Llabel84:
.LBB4_0:                                                    # %entry
	pushq	%r15
.Llabel80:
	pushq	%r14
.Llabel81:
	pushq	%rbx
.Llabel82:
	subq	$16, %rsp
.Llabel83:
	movq	%rdi, %rbx
	movl	$146, %edi
	leaq	8(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 8(%rsp)
	movl	$147, %edi
	movq	%r14, %rsi
.Llabel85:
	call	_Z12myMemoryReadiPv                         # SrcLine 123
	movq	8(%rsp), %rbx                               # SrcLine 123
	movl	$148, %edi
	leaq	(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 123
	movq	%rbx, (%rsp)                                # SrcLine 123
	movl	$149, %edi
	movq	%r14, %rsi
.Llabel86:
	call	_Z12myMemoryReadiPv                         # SrcLine 124
	movq	(%rsp), %rbx                                # SrcLine 124
	leaq	184(%rbx), %rsi                             # SrcLine 124
	movl	$150, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 124
	movq	184(%rbx), %rbx                             # SrcLine 124
	movl	$151, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 124
	movq	(%rsp), %r15                                # SrcLine 124
	leaq	184(%r15), %rsi                             # SrcLine 124
	movl	$152, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 124
	decq	%rbx                                        # SrcLine 124
	movq	%rbx, 184(%r15)                             # SrcLine 124
	movl	$153, %edi
	movq	%r14, %rsi
.Llabel87:
	call	_Z12myMemoryReadiPv                         # SrcLine 125
	movq	(%rsp), %rdi                                # SrcLine 125
	addq	$8, %rdi                                    # SrcLine 125
	call	pthread_mutex_unlock                        # SrcLine 125
.LBB4_1:                                                    # %return
.Llabel88:
.Llabel79:
	addq	$16, %rsp                                   # SrcLine 126
	popq	%rbx                                        # SrcLine 126
	popq	%r14                                        # SrcLine 126
	popq	%r15                                        # SrcLine 126
	ret                                                 # SrcLine 126
	.size	bounded_buf_getcleanup, .-bounded_buf_getcleanup
.Lfunc_end4:


	.align	16
	.globl	bounded_buf_put
	.type	bounded_buf_put,@function
bounded_buf_put:                                            # @bounded_buf_put
.Lfunc_begin5:
.Llabel98:
.LBB5_0:                                                    # %entry
	pushq	%rbp
.Llabel91:
	pushq	%r15
.Llabel92:
	pushq	%r14
.Llabel93:
	pushq	%r13
.Llabel94:
	pushq	%r12
.Llabel95:
	pushq	%rbx
.Llabel96:
	subq	$40, %rsp
.Llabel97:
	movq	%rsi, %rbx
	movq	%rdi, %r14
	movl	$154, %edi
	leaq	32(%rsp), %r15
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%r14, 32(%rsp)
	movl	$155, %edi
	leaq	24(%rsp), %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 24(%rsp)
	movl	$156, %edi
	leaq	8(%rsp), %rsi
.Llabel99:
	call	_Z13myMemoryWriteiPv                        # SrcLine 130
	movl	$0, 8(%rsp)                                 # SrcLine 130
	movl	$157, %edi
	leaq	12(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 130
	movl	$0, 12(%rsp)                                # SrcLine 130
	movl	$158, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 130
	movl	$0, 16(%rsp)                                # SrcLine 130
	movl	$159, %edi
	movq	%r15, %rsi
.Llabel100:
	call	_Z12myMemoryReadiPv                         # SrcLine 132
	cmpq	$0, 32(%rsp)                                # SrcLine 132
	je	.LBB5_18
.LBB5_1:                                                    # %bb
	movl	$160, %edi
	leaq	32(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 132
	movq	32(%rsp), %rbx                              # SrcLine 132
	movl	$161, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 132
	cmpl	$11329274, (%rbx)                           # SrcLine 132
	jne	.LBB5_18
.LBB5_2:                                                    # %bb2
	movl	$163, %edi
	leaq	32(%rsp), %rsi
.Llabel101:
	call	_Z12myMemoryReadiPv                         # SrcLine 135
	movq	32(%rsp), %rdi                              # SrcLine 135
	addq	$8, %rdi                                    # SrcLine 135
	call	pthread_mutex_lock                          # SrcLine 135
	movl	%eax, %ebx
	movl	$164, %edi
	leaq	8(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 135
	movl	%ebx, 8(%rsp)                               # SrcLine 135
	movl	$165, %edi
	movq	%r14, %rsi
.Llabel102:
	call	_Z12myMemoryReadiPv                         # SrcLine 136
	cmpl	$0, 8(%rsp)                                 # SrcLine 136
	jne	.LBB5_19
.LBB5_3:                                                    # %bb4
	movl	$168, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel103:
	call	_Z12myMemoryReadiPv                         # SrcLine 139
	movq	32(%rsp), %r14                              # SrcLine 139
	leaq	168(%r14), %rsi                             # SrcLine 139
	movl	$169, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 139
	movq	168(%r14), %r14                             # SrcLine 139
	movl	$170, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 139
	movq	32(%rsp), %r15                              # SrcLine 139
	leaq	152(%r15), %rsi                             # SrcLine 139
	movl	$171, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 139
	xorl	%eax, %eax                                  # SrcLine 139
	movl	%eax, %edx                                  # SrcLine 139
	movq	%r14, %rax                                  # SrcLine 139
	incq	%rax                                        # SrcLine 139
	divq	152(%r15)                                   # SrcLine 139
	movq	%rdx, %r14
	movl	$172, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 139
	movq	32(%rsp), %rbx                              # SrcLine 139
	leaq	160(%rbx), %rsi                             # SrcLine 139
	movl	$173, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 139
	cmpq	160(%rbx), %r14                             # SrcLine 139
	jne	.LBB5_8
.LBB5_4:                                                    # %bb5
	movl	$174, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel104:
	call	_Z12myMemoryReadiPv                         # SrcLine 141
	movq	32(%rsp), %r14                              # SrcLine 141
	leaq	176(%r14), %rsi                             # SrcLine 141
	movl	$175, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 141
	movq	176(%r14), %r14                             # SrcLine 141
	movl	$176, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 141
	movq	32(%rsp), %rbx                              # SrcLine 141
	leaq	176(%rbx), %rsi                             # SrcLine 141
	movl	$177, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 141
	incq	%r14                                        # SrcLine 141
	movq	%r14, 176(%rbx)                             # SrcLine 141
	leaq	32(%rsp), %rbx
	movl	$180, %r14d
	leaq	8(%rsp), %r15
	movl	$181, %r12d
	jmp	.LBB5_6
.LBB5_5:                                                    # %bb6
                                                            # Loop Depth 1
                                                            # Loop Header is BB5_6
                                                            # Inner Loop
	movl	$178, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel105:
	call	_Z12myMemoryReadiPv                         # SrcLine 144
	movq	32(%rsp), %r13                              # SrcLine 144
	movl	$179, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 144
	movq	32(%rsp), %rdi                              # SrcLine 144
	movq	%r13, %rsi                                  # SrcLine 144
	addq	$8, %rsi                                    # SrcLine 144
	addq	$48, %rdi                                   # SrcLine 144
	call	pthread_cond_wait                           # SrcLine 144
	movl	%eax, %r13d
	movl	%r14d, %edi
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 144
	movl	%r13d, 8(%rsp)                              # SrcLine 144
	movl	%r12d, %edi
	movq	%r15, %rsi
.Llabel106:
	call	_Z12myMemoryReadiPv                         # SrcLine 145
	cmpl	$0, 8(%rsp)                                 # SrcLine 145
	jne	.LBB5_7
.LBB5_6:                                                    # %bb7
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$182, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel107:
	call	_Z12myMemoryReadiPv                         # SrcLine 143
	movq	32(%rsp), %r13                              # SrcLine 143
	leaq	168(%r13), %rsi                             # SrcLine 143
	movl	$183, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 143
	movq	168(%r13), %r13                             # SrcLine 143
	movl	$184, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 143
	movq	32(%rsp), %rbp                              # SrcLine 143
	leaq	152(%rbp), %rsi                             # SrcLine 143
	movl	$185, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 143
	xorl	%eax, %eax                                  # SrcLine 143
	movl	%eax, %edx                                  # SrcLine 143
	movq	%r13, %rax                                  # SrcLine 143
	incq	%rax                                        # SrcLine 143
	divq	152(%rbp)                                   # SrcLine 143
	movq	%rdx, %r13
	movl	$186, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 143
	movq	32(%rsp), %rbp                              # SrcLine 143
	leaq	160(%rbp), %rsi                             # SrcLine 143
	movl	$187, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 143
	cmpq	160(%rbp), %r13                             # SrcLine 143
	je	.LBB5_5                                     # SrcLine 143
.LBB5_7:                                                    # %bb8
	movl	$188, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel108:
	call	_Z12myMemoryReadiPv                         # SrcLine 148
	movq	32(%rsp), %r14                              # SrcLine 148
	leaq	176(%r14), %rsi                             # SrcLine 148
	movl	$189, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 148
	movq	176(%r14), %r14                             # SrcLine 148
	movl	$190, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 148
	movq	32(%rsp), %rbx                              # SrcLine 148
	leaq	176(%rbx), %rsi                             # SrcLine 148
	movl	$191, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 148
	decq	%r14                                        # SrcLine 148
	movq	%r14, 176(%rbx)                             # SrcLine 148
.LBB5_8:                                                    # %bb9
	movl	$192, %edi
	leaq	8(%rsp), %rsi
.Llabel109:
	call	_Z12myMemoryReadiPv                         # SrcLine 151
	cmpl	$0, 8(%rsp)                                 # SrcLine 151
	jne	.LBB5_11
.LBB5_9:                                                    # %bb10
	movl	$193, %edi
	leaq	32(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel110:
	call	_Z12myMemoryReadiPv                         # SrcLine 152
	movq	32(%rsp), %r14                              # SrcLine 152
	leaq	192(%r14), %rsi                             # SrcLine 152
	movl	$194, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 152
	movq	192(%r14), %r14                             # SrcLine 152
	movl	$195, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 152
	movq	32(%rsp), %r15                              # SrcLine 152
	leaq	168(%r15), %rsi                             # SrcLine 152
	movl	$196, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 152
	movq	168(%r15), %r15                             # SrcLine 152
	movl	$197, %edi
	leaq	24(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 152
	leaq	(%r14,%r15,8), %rsi                         # SrcLine 152
	movq	24(%rsp), %r12                              # SrcLine 152
	movl	$198, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 152
	movq	%r12, (%r14,%r15,8)                         # SrcLine 152
	movl	$199, %edi
	movq	%rbx, %rsi
.Llabel111:
	call	_Z12myMemoryReadiPv                         # SrcLine 153
	movq	32(%rsp), %r14                              # SrcLine 153
	leaq	168(%r14), %rsi                             # SrcLine 153
	movl	$200, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 153
	movq	168(%r14), %r14                             # SrcLine 153
	movl	$201, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 153
	movq	32(%rsp), %r15                              # SrcLine 153
	leaq	152(%r15), %rsi                             # SrcLine 153
	movl	$202, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 153
	xorl	%eax, %eax                                  # SrcLine 153
	movl	%eax, %edx                                  # SrcLine 153
	movq	%r14, %rax                                  # SrcLine 153
	incq	%rax                                        # SrcLine 153
	divq	152(%r15)                                   # SrcLine 153
	movq	%rdx, %r14
	movl	$203, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 153
	movq	32(%rsp), %r15                              # SrcLine 153
	leaq	168(%r15), %rsi                             # SrcLine 153
	movl	$204, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 153
	movq	%r14, 168(%r15)                             # SrcLine 153
	movl	$205, %edi
	movq	%rbx, %rsi
.Llabel112:
	call	_Z12myMemoryReadiPv                         # SrcLine 154
	movq	32(%rsp), %rbx                              # SrcLine 154
	leaq	184(%rbx), %rsi                             # SrcLine 154
	movl	$206, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 154
	cmpq	$0, 184(%rbx)                               # SrcLine 154
	je	.LBB5_11
.LBB5_10:                                                   # %bb11
	movl	$207, %edi
	leaq	32(%rsp), %rsi
.Llabel113:
	call	_Z12myMemoryReadiPv                         # SrcLine 155
	movq	32(%rsp), %rdi                              # SrcLine 155
	addq	$96, %rdi                                   # SrcLine 155
	call	pthread_cond_signal                         # SrcLine 155
	movl	%eax, %ebx
	movl	$208, %edi
	leaq	12(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 155
	movl	%ebx, 12(%rsp)                              # SrcLine 155
.LBB5_11:                                                   # %bb12
	movl	$209, %edi
	leaq	32(%rsp), %rsi
.Llabel114:
	call	_Z12myMemoryReadiPv                         # SrcLine 159
	movq	32(%rsp), %rdi                              # SrcLine 159
	addq	$8, %rdi                                    # SrcLine 159
	call	pthread_mutex_unlock                        # SrcLine 159
	movl	%eax, %ebx
	movl	$210, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 159
	movl	%ebx, 16(%rsp)                              # SrcLine 159
	movl	$211, %edi
	leaq	8(%rsp), %rsi
.Llabel115:
	call	_Z12myMemoryReadiPv                         # SrcLine 160
	cmpl	$0, 8(%rsp)                                 # SrcLine 160
	je	.LBB5_20
.LBB5_12:                                                   # %bb14
	movl	$214, %edi
	leaq	8(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 160
	movl	8(%rsp), %ebx                               # SrcLine 160
	movl	$215, %edi
.LBB5_13:                                                   # %bb14
	leaq	4(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 160
	movl	%ebx, 4(%rsp)                               # SrcLine 160
.LBB5_14:                                                   # %bb15
	movl	$216, %edi
	leaq	4(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 160
	movl	4(%rsp), %ebx                               # SrcLine 160
	movl	$217, %edi
.LBB5_15:                                                   # %bb15
	leaq	(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 160
	movl	%ebx, (%rsp)                                # SrcLine 160
.LBB5_16:                                                   # %bb16
	movl	$218, %edi
	leaq	(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 160
	movl	(%rsp), %ebx                                # SrcLine 160
	movl	$219, %edi
	leaq	20(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 160
	movl	%ebx, 20(%rsp)                              # SrcLine 160
.LBB5_17:                                                   # %return
	movl	$220, %edi
	leaq	20(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	20(%rsp), %eax
.Llabel90:
	addq	$40, %rsp                                   # SrcLine 160
	popq	%rbx                                        # SrcLine 160
	popq	%r12                                        # SrcLine 160
	popq	%r13                                        # SrcLine 160
	popq	%r14                                        # SrcLine 160
	popq	%r15                                        # SrcLine 160
	popq	%rbp                                        # SrcLine 160
	ret                                                 # SrcLine 160
.LBB5_18:                                                   # %bb1
	movl	$162, %edi
	leaq	(%rsp), %rsi
.Llabel116:
	call	_Z13myMemoryWriteiPv                        # SrcLine 133
	movl	$22, (%rsp)                                 # SrcLine 133
	jmp	.LBB5_16
.LBB5_19:                                                   # %bb3
	movl	$166, %edi
	leaq	8(%rsp), %rsi
.Llabel117:
	call	_Z12myMemoryReadiPv                         # SrcLine 136
	movl	8(%rsp), %ebx                               # SrcLine 136
	movl	$167, %edi
	jmp	.LBB5_15
.LBB5_20:                                                   # %bb13
	movl	$212, %edi
	leaq	16(%rsp), %rsi
.Llabel118:
	call	_Z12myMemoryReadiPv                         # SrcLine 160
	movl	16(%rsp), %ebx                              # SrcLine 160
	movl	$213, %edi
	jmp	.LBB5_13
	.size	bounded_buf_put, .-bounded_buf_put
.Lfunc_end5:


	.align	16
	.globl	bounded_buf_get
	.type	bounded_buf_get,@function
bounded_buf_get:                                            # @bounded_buf_get
.Lfunc_begin6:
.Llabel128:
.LBB6_0:                                                    # %entry
	pushq	%rbp
.Llabel121:
	pushq	%r15
.Llabel122:
	pushq	%r14
.Llabel123:
	pushq	%r13
.Llabel124:
	pushq	%r12
.Llabel125:
	pushq	%rbx
.Llabel126:
	subq	$184, %rsp
.Llabel127:
	movq	%rsi, %rbx
	movq	%rdi, %r14
	movl	$221, %edi
	leaq	176(%rsp), %r15
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%r14, 176(%rsp)
	movl	$222, %edi
	leaq	168(%rsp), %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 168(%rsp)
	movl	$223, %edi
	leaq	20(%rsp), %rsi
.Llabel129:
	call	_Z13myMemoryWriteiPv                        # SrcLine 166
	movl	$0, 20(%rsp)                                # SrcLine 166
	movl	$224, %edi
	leaq	24(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 166
	movl	$0, 24(%rsp)                                # SrcLine 166
	movl	$225, %edi
	leaq	28(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 166
	movl	$0, 28(%rsp)                                # SrcLine 166
	movl	$226, %edi
	movq	%r15, %rsi
.Llabel130:
	call	_Z12myMemoryReadiPv                         # SrcLine 168
	cmpq	$0, 176(%rsp)                               # SrcLine 168
	je	.LBB6_24
.LBB6_1:                                                    # %bb
	movl	$227, %edi
	leaq	168(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 168
	cmpq	$0, 168(%rsp)                               # SrcLine 168
	je	.LBB6_24
.LBB6_2:                                                    # %bb1
	movl	$228, %edi
	leaq	176(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 168
	movq	176(%rsp), %rbx                             # SrcLine 168
	movl	$229, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 168
	cmpl	$11329274, (%rbx)                           # SrcLine 168
	jne	.LBB6_24
.LBB6_3:                                                    # %bb3
	movl	$231, %edi
	leaq	176(%rsp), %rsi
.Llabel131:
	call	_Z12myMemoryReadiPv                         # SrcLine 171
	movq	176(%rsp), %rdi                             # SrcLine 171
	addq	$8, %rdi                                    # SrcLine 171
	call	pthread_mutex_lock                          # SrcLine 171
	movl	%eax, %ebx
	movl	$232, %edi
	leaq	20(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 171
	movl	%ebx, 20(%rsp)                              # SrcLine 171
	movl	$233, %edi
	movq	%r14, %rsi
.Llabel132:
	call	_Z12myMemoryReadiPv                         # SrcLine 172
	cmpl	$0, 20(%rsp)                                # SrcLine 172
	jne	.LBB6_25
.LBB6_4:                                                    # %bb5
	movl	$236, %edi
	leaq	176(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel133:
	call	_Z12myMemoryReadiPv                         # SrcLine 174
	movq	176(%rsp), %r14                             # SrcLine 174
	leaq	160(%r14), %rsi                             # SrcLine 174
	movl	$237, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 174
	movq	160(%r14), %r14                             # SrcLine 174
	movl	$238, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 174
	movq	176(%rsp), %rbx                             # SrcLine 174
	leaq	168(%rbx), %rsi                             # SrcLine 174
	movl	$239, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 174
	cmpq	168(%rbx), %r14                             # SrcLine 174
	jne	.LBB6_10
.LBB6_5:                                                    # %bb6
	movl	$240, %edi
	leaq	176(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel134:
	call	_Z12myMemoryReadiPv                         # SrcLine 176
	movq	176(%rsp), %r14                             # SrcLine 176
	leaq	184(%r14), %rsi                             # SrcLine 176
	movl	$241, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 176
	movq	184(%r14), %r14                             # SrcLine 176
	movl	$242, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 176
	movq	176(%rsp), %r15                             # SrcLine 176
	leaq	184(%r15), %rsi                             # SrcLine 176
	movl	$243, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 176
	incq	%r14                                        # SrcLine 176
	movq	%r14, 184(%r15)                             # SrcLine 176
	movl	$244, %edi
	leaq	144(%rsp), %rsi
.Llabel135:
	call	_Z13myMemoryWriteiPv                        # SrcLine 177
	movq	$bounded_buf_getcleanup, 144(%rsp)          # SrcLine 177
	movl	$245, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 177
	movq	176(%rsp), %rbx                             # SrcLine 177
	movl	$246, %edi
	leaq	152(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 177
	movq	%rbx, 152(%rsp)                             # SrcLine 177
	leaq	32(%rsp), %rdi
	xorl	%esi, %esi
	call	__sigsetjmp                                 # SrcLine 177
	movl	%eax, %ebx
	movl	$247, %edi
	leaq	160(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 177
	movl	%ebx, 160(%rsp)                             # SrcLine 177
	movl	$248, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 177
	movslq	160(%rsp), %rax                             # SrcLine 177
	testq	%rax, %rax                                  # SrcLine 177
	jne	.LBB6_26
.LBB6_6:                                                    # %bb8
	leaq	32(%rsp), %rdi
	call	__pthread_register_cancel                   # SrcLine 177
	leaq	176(%rsp), %rbx
	movl	$253, %r14d
	leaq	20(%rsp), %r15
	movl	$254, %r12d
	jmp	.LBB6_8
.LBB6_7:                                                    # %bb9
                                                            # Loop Depth 1
                                                            # Loop Header is BB6_8
                                                            # Inner Loop
	movl	$251, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel136:
	call	_Z12myMemoryReadiPv                         # SrcLine 181
	movq	176(%rsp), %r13                             # SrcLine 181
	movl	$252, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 181
	movq	176(%rsp), %rdi                             # SrcLine 181
	movq	%r13, %rsi                                  # SrcLine 181
	addq	$8, %rsi                                    # SrcLine 181
	addq	$96, %rdi                                   # SrcLine 181
	call	pthread_cond_wait                           # SrcLine 181
	movl	%eax, %r13d
	movl	%r14d, %edi
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 181
	movl	%r13d, 20(%rsp)                             # SrcLine 181
	movl	%r12d, %edi
	movq	%r15, %rsi
.Llabel137:
	call	_Z12myMemoryReadiPv                         # SrcLine 182
	cmpl	$0, 20(%rsp)                                # SrcLine 182
	jne	.LBB6_9
.LBB6_8:                                                    # %bb10
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$255, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel138:
	call	_Z12myMemoryReadiPv                         # SrcLine 179
	movq	176(%rsp), %r13                             # SrcLine 179
	leaq	160(%r13), %rsi                             # SrcLine 179
	movl	$256, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 179
	movq	160(%r13), %r13                             # SrcLine 179
	movl	$257, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 179
	movq	176(%rsp), %rbp                             # SrcLine 179
	leaq	168(%rbp), %rsi                             # SrcLine 179
	movl	$258, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 179
	cmpq	168(%rbp), %r13                             # SrcLine 179
	je	.LBB6_7                                     # SrcLine 179
.LBB6_9:                                                    # %bb11
	leaq	32(%rsp), %rdi
.Llabel139:
	call	__pthread_unregister_cancel                 # SrcLine 185
	movl	$259, %edi
	leaq	176(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel140:
	call	_Z12myMemoryReadiPv                         # SrcLine 186
	movq	176(%rsp), %r14                             # SrcLine 186
	leaq	184(%r14), %rsi                             # SrcLine 186
	movl	$260, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 186
	movq	184(%r14), %r14                             # SrcLine 186
	movl	$261, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 186
	movq	176(%rsp), %rbx                             # SrcLine 186
	leaq	184(%rbx), %rsi                             # SrcLine 186
	movl	$262, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 186
	decq	%r14                                        # SrcLine 186
	movq	%r14, 184(%rbx)                             # SrcLine 186
.LBB6_10:                                                   # %bb12
	movl	$263, %edi
	leaq	20(%rsp), %rsi
.Llabel141:
	call	_Z12myMemoryReadiPv                         # SrcLine 194
	cmpl	$0, 20(%rsp)                                # SrcLine 194
	jne	.LBB6_13
.LBB6_11:                                                   # %bb13
	movl	$264, %edi
	leaq	176(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel142:
	call	_Z12myMemoryReadiPv                         # SrcLine 196
	movq	176(%rsp), %r14                             # SrcLine 196
	leaq	192(%r14), %rsi                             # SrcLine 196
	movl	$265, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 196
	movq	192(%r14), %r14                             # SrcLine 196
	movl	$266, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 196
	movq	176(%rsp), %r15                             # SrcLine 196
	leaq	160(%r15), %rsi                             # SrcLine 196
	movl	$267, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 196
	movq	160(%r15), %r15                             # SrcLine 196
	leaq	(%r14,%r15,8), %rsi                         # SrcLine 196
	movl	$268, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 196
	movq	(%r14,%r15,8), %r14                         # SrcLine 196
	movl	$269, %edi
	leaq	168(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 196
	movq	168(%rsp), %r15                             # SrcLine 196
	movl	$270, %edi
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 196
	movq	%r14, (%r15)                                # SrcLine 196
	movl	$271, %edi
	movq	%rbx, %rsi
.Llabel143:
	call	_Z12myMemoryReadiPv                         # SrcLine 197
	movq	176(%rsp), %r14                             # SrcLine 197
	leaq	160(%r14), %rsi                             # SrcLine 197
	movl	$272, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 197
	movq	160(%r14), %r14                             # SrcLine 197
	movl	$273, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 197
	movq	176(%rsp), %r15                             # SrcLine 197
	leaq	152(%r15), %rsi                             # SrcLine 197
	movl	$274, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 197
	xorl	%eax, %eax                                  # SrcLine 197
	movl	%eax, %edx                                  # SrcLine 197
	movq	%r14, %rax                                  # SrcLine 197
	incq	%rax                                        # SrcLine 197
	divq	152(%r15)                                   # SrcLine 197
	movq	%rdx, %r14
	movl	$275, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 197
	movq	176(%rsp), %r15                             # SrcLine 197
	leaq	160(%r15), %rsi                             # SrcLine 197
	movl	$276, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 197
	movq	%r14, 160(%r15)                             # SrcLine 197
	movl	$277, %edi
	movq	%rbx, %rsi
.Llabel144:
	call	_Z12myMemoryReadiPv                         # SrcLine 199
	movq	176(%rsp), %rbx                             # SrcLine 199
	leaq	176(%rbx), %rsi                             # SrcLine 199
	movl	$278, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 199
	cmpq	$0, 176(%rbx)                               # SrcLine 199
	je	.LBB6_13
.LBB6_12:                                                   # %bb14
	movl	$279, %edi
	leaq	176(%rsp), %rsi
.Llabel145:
	call	_Z12myMemoryReadiPv                         # SrcLine 200
	movq	176(%rsp), %rdi                             # SrcLine 200
	addq	$48, %rdi                                   # SrcLine 200
	call	pthread_cond_signal                         # SrcLine 200
	movl	%eax, %ebx
	movl	$280, %edi
	leaq	24(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 200
	movl	%ebx, 24(%rsp)                              # SrcLine 200
.LBB6_13:                                                   # %bb15
	movl	$281, %edi
	leaq	176(%rsp), %rsi
.Llabel146:
	call	_Z12myMemoryReadiPv                         # SrcLine 205
	movq	176(%rsp), %rdi                             # SrcLine 205
	addq	$8, %rdi                                    # SrcLine 205
	call	pthread_mutex_unlock                        # SrcLine 205
	movl	%eax, %ebx
	movl	$282, %edi
	leaq	28(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 205
	movl	%ebx, 28(%rsp)                              # SrcLine 205
	movl	$283, %edi
	leaq	20(%rsp), %rsi
.Llabel147:
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	cmpl	$0, 20(%rsp)                                # SrcLine 206
	jne	.LBB6_18                                    # SrcLine 206
.LBB6_14:                                                   # %bb16
	movl	$284, %edi
	leaq	24(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	cmpl	$0, 24(%rsp)                                # SrcLine 206
	jne	.LBB6_27
.LBB6_15:                                                   # %bb18
	movl	$287, %edi
	leaq	28(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	movl	28(%rsp), %ebx                              # SrcLine 206
	movl	$288, %edi
.LBB6_16:                                                   # %bb18
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 206
	movl	%ebx, 16(%rsp)                              # SrcLine 206
.LBB6_17:                                                   # %bb19
	movl	$289, %edi
	leaq	16(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	movl	16(%rsp), %ebx                              # SrcLine 206
	movl	$290, %edi
	jmp	.LBB6_19
.LBB6_18:                                                   # %bb20
	movl	$291, %edi
	leaq	20(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	movl	20(%rsp), %ebx                              # SrcLine 206
	movl	$292, %edi
.LBB6_19:                                                   # %bb20
	leaq	12(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 206
	movl	%ebx, 12(%rsp)                              # SrcLine 206
.LBB6_20:                                                   # %bb21
	movl	$293, %edi
	leaq	12(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	movl	12(%rsp), %ebx                              # SrcLine 206
	movl	$294, %edi
.LBB6_21:                                                   # %bb21
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 206
	movl	%ebx, 8(%rsp)                               # SrcLine 206
.LBB6_22:                                                   # %bb22
	movl	$295, %edi
	leaq	8(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	movl	8(%rsp), %ebx                               # SrcLine 206
	movl	$296, %edi
	leaq	164(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 206
	movl	%ebx, 164(%rsp)                             # SrcLine 206
.LBB6_23:                                                   # %return
	movl	$297, %edi
	leaq	164(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	164(%rsp), %eax
.Llabel120:
	addq	$184, %rsp                                  # SrcLine 206
	popq	%rbx                                        # SrcLine 206
	popq	%r12                                        # SrcLine 206
	popq	%r13                                        # SrcLine 206
	popq	%r14                                        # SrcLine 206
	popq	%r15                                        # SrcLine 206
	popq	%rbp                                        # SrcLine 206
	ret                                                 # SrcLine 206
.LBB6_24:                                                   # %bb2
	movl	$230, %edi
	leaq	8(%rsp), %rsi
.Llabel148:
	call	_Z13myMemoryWriteiPv                        # SrcLine 169
	movl	$22, 8(%rsp)                                # SrcLine 169
	jmp	.LBB6_22
.LBB6_25:                                                   # %bb4
	movl	$234, %edi
	leaq	20(%rsp), %rsi
.Llabel149:
	call	_Z12myMemoryReadiPv                         # SrcLine 172
	movl	20(%rsp), %ebx                              # SrcLine 172
	movl	$235, %edi
	jmp	.LBB6_21
.LBB6_26:                                                   # %bb7
	movl	$249, %edi
	leaq	144(%rsp), %rsi
.Llabel150:
	call	_Z12myMemoryReadiPv                         # SrcLine 177
	movq	144(%rsp), %rbx                             # SrcLine 177
	movl	$250, %edi
	leaq	152(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 177
	movq	152(%rsp), %rdi                             # SrcLine 177
	call	*%rbx                                       # SrcLine 177
	leaq	32(%rsp), %rdi
	call	__pthread_unwind_next                       # SrcLine 177
.LBB6_27:                                                   # %bb17
	movl	$285, %edi
	leaq	24(%rsp), %rsi
.Llabel151:
	call	_Z12myMemoryReadiPv                         # SrcLine 206
	movl	24(%rsp), %ebx                              # SrcLine 206
	movl	$286, %edi
	jmp	.LBB6_16
	.size	bounded_buf_get, .-bounded_buf_get
.Lfunc_end6:


	.align	16
	.globl	bounded_buf_is_empty
	.type	bounded_buf_is_empty,@function
bounded_buf_is_empty:                                       # @bounded_buf_is_empty
.Lfunc_begin7:
.Llabel158:
.LBB7_0:                                                    # %entry
	pushq	%r15
.Llabel154:
	pushq	%r14
.Llabel155:
	pushq	%rbx
.Llabel156:
	subq	$32, %rsp
.Llabel157:
	movq	%rdi, %rbx
	movl	$298, %edi
	leaq	24(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 24(%rsp)
	movl	$299, %edi
	leaq	12(%rsp), %rsi
.Llabel159:
	call	_Z13myMemoryWriteiPv                        # SrcLine 224
	movl	$0, 12(%rsp)                                # SrcLine 224
	movl	$300, %edi
	movq	%r14, %rsi
.Llabel160:
	call	_Z12myMemoryReadiPv                         # SrcLine 226
	cmpq	$0, 24(%rsp)                                # SrcLine 226
	je	.LBB7_9
.LBB7_1:                                                    # %bb
	movl	$301, %edi
	leaq	24(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 226
	movq	24(%rsp), %rbx                              # SrcLine 226
	movl	$302, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 226
	cmpl	$11329274, (%rbx)                           # SrcLine 226
	jne	.LBB7_9
.LBB7_2:                                                    # %bb3
	movl	$304, %edi
	leaq	24(%rsp), %rsi
.Llabel161:
	call	_Z12myMemoryReadiPv                         # SrcLine 230
	movq	24(%rsp), %rdi                              # SrcLine 230
	addq	$8, %rdi                                    # SrcLine 230
	call	pthread_mutex_lock                          # SrcLine 230
	movl	%eax, %ebx
	movl	$305, %edi
	leaq	12(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 230
	movl	%ebx, 12(%rsp)                              # SrcLine 230
	movl	$306, %edi
	movq	%r14, %rsi
.Llabel162:
	call	_Z12myMemoryReadiPv                         # SrcLine 231
	cmpl	$0, 12(%rsp)                                # SrcLine 231
	jne	.LBB7_10
.LBB7_3:                                                    # %bb5
	movl	$309, %edi
	leaq	24(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel163:
	call	_Z12myMemoryReadiPv                         # SrcLine 233
	movq	24(%rsp), %r14                              # SrcLine 233
	leaq	168(%r14), %rsi                             # SrcLine 233
	movl	$310, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 233
	movq	168(%r14), %r14                             # SrcLine 233
	movl	$311, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 233
	movq	24(%rsp), %r15                              # SrcLine 233
	leaq	160(%r15), %rsi                             # SrcLine 233
	movl	$312, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 233
	cmpq	160(%r15), %r14                             # SrcLine 233
	sete	%r14b                                       # SrcLine 233
	movl	$313, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 233
	movzbl	%r14b, %eax                                 # SrcLine 233
	movl	%eax, 16(%rsp)                              # SrcLine 233
	movl	$314, %edi
	movq	%rbx, %rsi
.Llabel164:
	call	_Z12myMemoryReadiPv                         # SrcLine 236
	movq	24(%rsp), %rdi                              # SrcLine 236
	addq	$8, %rdi                                    # SrcLine 236
	call	pthread_mutex_unlock                        # SrcLine 236
	movl	%eax, %ebx
	movl	$315, %edi
	leaq	12(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 236
	movl	%ebx, 12(%rsp)                              # SrcLine 236
	movl	$316, %edi
	movq	%r14, %rsi
.Llabel165:
	call	_Z12myMemoryReadiPv                         # SrcLine 238
	cmpl	$0, 12(%rsp)                                # SrcLine 238
	je	.LBB7_11
.LBB7_4:                                                    # %bb7
	movl	$319, %edi
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 238
	movl	$4294967295, 8(%rsp)                        # SrcLine 238
.LBB7_5:                                                    # %bb8
	movl	$320, %edi
	leaq	8(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 238
	movl	8(%rsp), %ebx                               # SrcLine 238
	movl	$321, %edi
.LBB7_6:                                                    # %bb8
	leaq	4(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 238
	movl	%ebx, 4(%rsp)                               # SrcLine 238
.LBB7_7:                                                    # %bb9
	movl	$322, %edi
	leaq	4(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 238
	movl	4(%rsp), %ebx                               # SrcLine 238
	movl	$323, %edi
	leaq	20(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 238
	movl	%ebx, 20(%rsp)                              # SrcLine 238
.LBB7_8:                                                    # %return
	movl	$324, %edi
	leaq	20(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	20(%rsp), %eax
.Llabel153:
	addq	$32, %rsp                                   # SrcLine 238
	popq	%rbx                                        # SrcLine 238
	popq	%r14                                        # SrcLine 238
	popq	%r15                                        # SrcLine 238
	ret                                                 # SrcLine 238
.LBB7_9:                                                    # %bb2
	movl	$303, %edi
	leaq	4(%rsp), %rsi
.Llabel166:
	call	_Z13myMemoryWriteiPv                        # SrcLine 227
	movl	$4294967295, 4(%rsp)                        # SrcLine 227
	jmp	.LBB7_7
.LBB7_10:                                                   # %bb4
	movl	$307, %edi
	leaq	12(%rsp), %rsi
.Llabel167:
	call	_Z12myMemoryReadiPv                         # SrcLine 231
	movl	12(%rsp), %ebx                              # SrcLine 231
	movl	$308, %edi
	jmp	.LBB7_6
.LBB7_11:                                                   # %bb6
	movl	$317, %edi
	leaq	16(%rsp), %rsi
.Llabel168:
	call	_Z12myMemoryReadiPv                         # SrcLine 238
	movl	16(%rsp), %ebx                              # SrcLine 238
	movl	$318, %edi
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 238
	movl	%ebx, 8(%rsp)                               # SrcLine 238
	jmp	.LBB7_5
	.size	bounded_buf_is_empty, .-bounded_buf_is_empty
.Lfunc_end7:


	.align	16
	.globl	bounded_buf_is_full
	.type	bounded_buf_is_full,@function
bounded_buf_is_full:                                        # @bounded_buf_is_full
.Lfunc_begin8:
.Llabel175:
.LBB8_0:                                                    # %entry
	pushq	%r15
.Llabel171:
	pushq	%r14
.Llabel172:
	pushq	%rbx
.Llabel173:
	subq	$32, %rsp
.Llabel174:
	movq	%rdi, %rbx
	movl	$325, %edi
	leaq	24(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 24(%rsp)
	movl	$326, %edi
	leaq	12(%rsp), %rsi
.Llabel176:
	call	_Z13myMemoryWriteiPv                        # SrcLine 244
	movl	$0, 12(%rsp)                                # SrcLine 244
	movl	$327, %edi
	movq	%r14, %rsi
.Llabel177:
	call	_Z12myMemoryReadiPv                         # SrcLine 246
	cmpq	$0, 24(%rsp)                                # SrcLine 246
	je	.LBB8_9
.LBB8_1:                                                    # %bb
	movl	$328, %edi
	leaq	24(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 246
	movq	24(%rsp), %rbx                              # SrcLine 246
	movl	$329, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 246
	cmpl	$11329274, (%rbx)                           # SrcLine 246
	jne	.LBB8_9
.LBB8_2:                                                    # %bb3
	movl	$331, %edi
	leaq	24(%rsp), %rsi
.Llabel178:
	call	_Z12myMemoryReadiPv                         # SrcLine 248
	movq	24(%rsp), %rdi                              # SrcLine 248
	addq	$8, %rdi                                    # SrcLine 248
	call	pthread_mutex_lock                          # SrcLine 248
	movl	%eax, %ebx
	movl	$332, %edi
	leaq	12(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 248
	movl	%ebx, 12(%rsp)                              # SrcLine 248
	movl	$333, %edi
	movq	%r14, %rsi
.Llabel179:
	call	_Z12myMemoryReadiPv                         # SrcLine 249
	cmpl	$0, 12(%rsp)                                # SrcLine 249
	jne	.LBB8_10
.LBB8_3:                                                    # %bb5
	movl	$336, %edi
	leaq	24(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel180:
	call	_Z12myMemoryReadiPv                         # SrcLine 251
	movq	24(%rsp), %r14                              # SrcLine 251
	leaq	168(%r14), %rsi                             # SrcLine 251
	movl	$337, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 251
	movq	168(%r14), %r14                             # SrcLine 251
	movl	$338, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 251
	movq	24(%rsp), %r15                              # SrcLine 251
	leaq	152(%r15), %rsi                             # SrcLine 251
	movl	$339, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 251
	xorl	%eax, %eax                                  # SrcLine 251
	movl	%eax, %edx                                  # SrcLine 251
	movq	%r14, %rax                                  # SrcLine 251
	incq	%rax                                        # SrcLine 251
	divq	152(%r15)                                   # SrcLine 251
	movq	%rdx, %r14
	movl	$340, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 251
	movq	24(%rsp), %r15                              # SrcLine 251
	leaq	160(%r15), %rsi                             # SrcLine 251
	movl	$341, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 251
	cmpq	160(%r15), %r14                             # SrcLine 251
	sete	%r14b                                       # SrcLine 251
	movl	$342, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 251
	movzbl	%r14b, %eax                                 # SrcLine 251
	movl	%eax, 16(%rsp)                              # SrcLine 251
	movl	$343, %edi
	movq	%rbx, %rsi
.Llabel181:
	call	_Z12myMemoryReadiPv                         # SrcLine 252
	movq	24(%rsp), %rdi                              # SrcLine 252
	addq	$8, %rdi                                    # SrcLine 252
	call	pthread_mutex_unlock                        # SrcLine 252
	movl	%eax, %ebx
	movl	$344, %edi
	leaq	12(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 252
	movl	%ebx, 12(%rsp)                              # SrcLine 252
	movl	$345, %edi
	movq	%r14, %rsi
.Llabel182:
	call	_Z12myMemoryReadiPv                         # SrcLine 253
	cmpl	$0, 12(%rsp)                                # SrcLine 253
	je	.LBB8_11
.LBB8_4:                                                    # %bb7
	movl	$348, %edi
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 253
	movl	$4294967295, 8(%rsp)                        # SrcLine 253
.LBB8_5:                                                    # %bb8
	movl	$349, %edi
	leaq	8(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 253
	movl	8(%rsp), %ebx                               # SrcLine 253
	movl	$350, %edi
.LBB8_6:                                                    # %bb8
	leaq	4(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 253
	movl	%ebx, 4(%rsp)                               # SrcLine 253
.LBB8_7:                                                    # %bb9
	movl	$351, %edi
	leaq	4(%rsp), %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 253
	movl	4(%rsp), %ebx                               # SrcLine 253
	movl	$352, %edi
	leaq	20(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 253
	movl	%ebx, 20(%rsp)                              # SrcLine 253
.LBB8_8:                                                    # %return
	movl	$353, %edi
	leaq	20(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	20(%rsp), %eax
.Llabel170:
	addq	$32, %rsp                                   # SrcLine 253
	popq	%rbx                                        # SrcLine 253
	popq	%r14                                        # SrcLine 253
	popq	%r15                                        # SrcLine 253
	ret                                                 # SrcLine 253
.LBB8_9:                                                    # %bb2
	movl	$330, %edi
	leaq	4(%rsp), %rsi
.Llabel183:
	call	_Z13myMemoryWriteiPv                        # SrcLine 246
	movl	$4294967295, 4(%rsp)                        # SrcLine 246
	jmp	.LBB8_7
.LBB8_10:                                                   # %bb4
	movl	$334, %edi
	leaq	12(%rsp), %rsi
.Llabel184:
	call	_Z12myMemoryReadiPv                         # SrcLine 249
	movl	12(%rsp), %ebx                              # SrcLine 249
	movl	$335, %edi
	jmp	.LBB8_6
.LBB8_11:                                                   # %bb6
	movl	$346, %edi
	leaq	16(%rsp), %rsi
.Llabel185:
	call	_Z12myMemoryReadiPv                         # SrcLine 253
	movl	16(%rsp), %ebx                              # SrcLine 253
	movl	$347, %edi
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 253
	movl	%ebx, 8(%rsp)                               # SrcLine 253
	jmp	.LBB8_5
	.size	bounded_buf_is_full, .-bounded_buf_is_full
.Lfunc_end8:


	.align	16
	.globl	producer_routine
	.type	producer_routine,@function
producer_routine:                                           # @producer_routine
.Lfunc_begin9:
.Llabel195:
.LBB9_0:                                                    # %entry
	pushq	%rbp
.Llabel188:
	pushq	%r15
.Llabel189:
	pushq	%r14
.Llabel190:
	pushq	%r13
.Llabel191:
	pushq	%r12
.Llabel192:
	pushq	%rbx
.Llabel193:
	subq	$56, %rsp
.Llabel194:
	movq	%rdi, %rbx
	movl	$354, %edi
	leaq	48(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 48(%rsp)
	movl	$355, %edi
	movq	%r14, %rsi
.Llabel196:
	call	_Z12myMemoryReadiPv                         # SrcLine 273
	movq	48(%rsp), %rbx                              # SrcLine 273
	movl	$356, %edi
	leaq	16(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 273
	movq	%rbx, 16(%rsp)                              # SrcLine 273
	movl	$357, %edi
	leaq	36(%rsp), %rsi
.Llabel197:
	call	_Z13myMemoryWriteiPv                        # SrcLine 277
	movl	$0, 36(%rsp)                                # SrcLine 277
	movl	$358, %edi
	leaq	24(%rsp), %rsi
.Llabel198:
	call	_Z13myMemoryWriteiPv                        # SrcLine 279
	movl	$0, 24(%rsp)                                # SrcLine 279
	leaq	32(%rsp), %rbx
	leaq	16(%rsp), %r14
	leaq	36(%rsp), %r15
	jmp	.LBB9_4
.LBB9_1:                                                    # %bb
                                                            # Loop Depth 1
                                                            # Loop Header is BB9_4
                                                            # Inner Loop
.Llabel199:
	call	rand                                        # SrcLine 281
	movl	%eax, %r12d
	movl	$359, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 281
	movl	%r12d, %eax                                 # SrcLine 281
	sarl	$31, %eax                                   # SrcLine 281
	addl	%eax, %r12d                                 # SrcLine 281
	xorl	%eax, %r12d                                 # SrcLine 281
	movl	%r12d, %eax
	movl	$1321528399, %ecx
	imull	%ecx                                        # SrcLine 281
	movl	%edx, %eax                                  # SrcLine 281
	shrl	$31, %eax                                   # SrcLine 281
	sarl	$3, %edx                                    # SrcLine 281
	addl	%eax, %edx                                  # SrcLine 281
	imull	$26, %edx, %eax                             # SrcLine 281
	negl	%eax                                        # SrcLine 281
	leal	97(%r12,%rax), %eax                         # SrcLine 281
	movl	%eax, 32(%rsp)                              # SrcLine 281
	movl	$360, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel200:
	call	_Z12myMemoryReadiPv                         # SrcLine 282
	movl	32(%rsp), %r12d                             # SrcLine 282
	movl	$361, %eax
	movl	%eax, %edi
	leaq	28(%rsp), %r13
	movq	%r13, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 282
	movl	%r12d, 28(%rsp)                             # SrcLine 282
	movl	$362, %eax
	movl	%eax, %edi
	movq	%r13, %rsi
.Llabel201:
	call	_Z12myMemoryReadiPv                         # SrcLine 283
	movslq	28(%rsp), %r12                              # SrcLine 283
	movl	$363, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 283
	movq	16(%rsp), %r13                              # SrcLine 283
	leaq	16(%r13), %rsi                              # SrcLine 283
	movl	$364, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 283
	movq	16(%r13), %rdi                              # SrcLine 283
	movq	%r12, %rsi
	call	bounded_buf_put                             # SrcLine 283
	movl	%eax, %r12d
	movl	$365, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 283
	movl	%r12d, 36(%rsp)                             # SrcLine 283
	movl	$366, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
.Llabel202:
	call	_Z12myMemoryReadiPv                         # SrcLine 285
	cmpl	$0, 36(%rsp)                                # SrcLine 285
	jne	.LBB9_7
.LBB9_2:                                                    # %bb3
                                                            # Loop Depth 1
                                                            # Loop Header is BB9_4
                                                            # Inner Loop
	movl	$372, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
.Llabel203:
	call	_Z12myMemoryReadiPv                         # SrcLine 289
	movq	16(%rsp), %r12                              # SrcLine 289
	leaq	8(%r12), %rsi                               # SrcLine 289
	movl	$373, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 289
	movl	8(%r12), %r12d                              # SrcLine 289
	movl	$374, %eax
	movl	%eax, %edi
	movl	$stdout, %eax
	movq	%rax, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 289
	movq	stdout(%rip), %r13                          # SrcLine 289
	movl	$375, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 289
	movl	32(%rsp), %ecx                              # SrcLine 289
	xorb	%al, %al
	movq	%r13, %rdi
	movl	$.L.str299, %edx
	movq	%rdx, %rsi
	movl	%r12d, %edx
	call	fprintf                                     # SrcLine 289
.LBB9_3:                                                    # %bb4
                                                            # Loop Depth 1
                                                            # Loop Header is BB9_4
                                                            # Inner Loop
	movl	$376, %eax
	movl	%eax, %edi
	movl	$stdout, %eax
	movq	%rax, %rsi
.Llabel204:
	call	_Z12myMemoryReadiPv                         # SrcLine 292
	movq	stdout(%rip), %rdi                          # SrcLine 292
	call	fflush                                      # SrcLine 292
	movl	$377, %eax
	movl	%eax, %edi
	leaq	24(%rsp), %r12
	movq	%r12, %rsi
.Llabel205:
	call	_Z12myMemoryReadiPv                         # SrcLine 279
	movl	24(%rsp), %r13d                             # SrcLine 279
	movl	$378, %eax
	movl	%eax, %edi
	movq	%r12, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 279
	incl	%r13d                                       # SrcLine 279
	movl	%r13d, 24(%rsp)                             # SrcLine 279
.LBB9_4:                                                    # %bb5
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$379, %eax
	movl	%eax, %edi
	leaq	24(%rsp), %rax
	movq	%rax, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 279
	cmpl	$4, 24(%rsp)                                # SrcLine 279
	jl	.LBB9_1                                     # SrcLine 279
.LBB9_5:                                                    # %bb6
	movl	$380, %edi
	leaq	8(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel206:
	call	_Z13myMemoryWriteiPv                        # SrcLine 296
	movq	$0, 8(%rsp)                                 # SrcLine 296
	movl	$381, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 296
	movq	8(%rsp), %rbx                               # SrcLine 296
	movl	$382, %edi
	leaq	40(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 296
	movq	%rbx, 40(%rsp)                              # SrcLine 296
.LBB9_6:                                                    # %return
	movl	$383, %edi
	leaq	40(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movq	40(%rsp), %rax
.Llabel187:
	addq	$56, %rsp                                   # SrcLine 296
	popq	%rbx                                        # SrcLine 296
	popq	%r12                                        # SrcLine 296
	popq	%r13                                        # SrcLine 296
	popq	%r14                                        # SrcLine 296
	popq	%r15                                        # SrcLine 296
	popq	%rbp                                        # SrcLine 296
	ret                                                 # SrcLine 296
.LBB9_7:                                                    # %bb2
                                                            # Loop Depth 1
                                                            # Loop Header is BB9_4
                                                            # Inner Loop
	movl	$367, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
.Llabel207:
	call	_Z12myMemoryReadiPv                         # SrcLine 286
	movl	36(%rsp), %edi                              # SrcLine 286
	call	strerror                                    # SrcLine 286
	movq	%rax, %r12
	movl	$368, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 286
	movq	16(%rsp), %r13                              # SrcLine 286
	leaq	8(%r13), %rsi                               # SrcLine 286
	movl	$369, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 286
	movl	8(%r13), %r13d                              # SrcLine 286
	movl	$370, %eax
	movl	%eax, %edi
	movl	$stderr, %eax
	movq	%rax, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 286
	movq	stderr(%rip), %rbp                          # SrcLine 286
	movl	$371, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 286
	movl	36(%rsp), %ecx                              # SrcLine 286
	xorb	%al, %al
	movq	%rbp, %rdi
	movl	$.L.str298, %edx
	movq	%rdx, %rsi
	movl	%r13d, %edx
	movq	%r12, %r8
	call	fprintf                                     # SrcLine 286
	jmp	.LBB9_3
	.size	producer_routine, .-producer_routine
.Lfunc_end9:


	.align	16
	.globl	consumer_routine
	.type	consumer_routine,@function
consumer_routine:                                           # @consumer_routine
.Lfunc_begin10:
.Llabel217:
.LBB10_0:                                                   # %entry
	pushq	%rbp
.Llabel210:
	pushq	%r15
.Llabel211:
	pushq	%r14
.Llabel212:
	pushq	%r13
.Llabel213:
	pushq	%r12
.Llabel214:
	pushq	%rbx
.Llabel215:
	subq	$56, %rsp
.Llabel216:
	movq	%rdi, %rbx
	movl	$384, %edi
	leaq	48(%rsp), %r14
	movq	%r14, %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 48(%rsp)
	movl	$385, %edi
	movq	%r14, %rsi
.Llabel218:
	call	_Z12myMemoryReadiPv                         # SrcLine 303
	movq	48(%rsp), %rbx                              # SrcLine 303
	movl	$386, %edi
	leaq	8(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 303
	movq	%rbx, 8(%rsp)                               # SrcLine 303
	movl	$387, %edi
	leaq	28(%rsp), %rsi
.Llabel219:
	call	_Z13myMemoryWriteiPv                        # SrcLine 307
	movl	$0, 28(%rsp)                                # SrcLine 307
	movl	$388, %edi
	leaq	20(%rsp), %rsi
.Llabel220:
	call	_Z13myMemoryWriteiPv                        # SrcLine 311
	movl	$0, 20(%rsp)                                # SrcLine 311
	leaq	20(%rsp), %rbx
	leaq	8(%rsp), %r14
	leaq	28(%rsp), %r15
	jmp	.LBB10_4
.LBB10_1:                                                   # %bb
                                                            # Loop Depth 1
                                                            # Loop Header is BB10_4
                                                            # Inner Loop
	movl	$389, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
.Llabel221:
	call	_Z12myMemoryReadiPv                         # SrcLine 313
	movq	8(%rsp), %r12                               # SrcLine 313
	leaq	16(%r12), %rsi                              # SrcLine 313
	movl	$390, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 313
	movq	16(%r12), %rdi                              # SrcLine 313
	leaq	32(%rsp), %rax
	movq	%rax, %rsi
	call	bounded_buf_get                             # SrcLine 313
	movl	%eax, %r12d
	movl	$391, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 313
	movl	%r12d, 28(%rsp)                             # SrcLine 313
	movl	$392, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
.Llabel222:
	call	_Z12myMemoryReadiPv                         # SrcLine 315
	cmpl	$0, 28(%rsp)                                # SrcLine 315
	jne	.LBB10_7
.LBB10_2:                                                   # %bb2
                                                            # Loop Depth 1
                                                            # Loop Header is BB10_4
                                                            # Inner Loop
	movl	$398, %eax
	movl	%eax, %edi
	leaq	32(%rsp), %rax
	movq	%rax, %rsi
.Llabel223:
	call	_Z12myMemoryReadiPv                         # SrcLine 320
	movsbl	32(%rsp), %r12d                             # SrcLine 320
	movl	$399, %eax
	movl	%eax, %edi
	leaq	24(%rsp), %r13
	movq	%r13, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 320
	movl	%r12d, 24(%rsp)                             # SrcLine 320
	movl	$400, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
.Llabel224:
	call	_Z12myMemoryReadiPv                         # SrcLine 321
	movq	8(%rsp), %r12                               # SrcLine 321
	leaq	8(%r12), %rsi                               # SrcLine 321
	movl	$401, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 321
	movl	8(%r12), %r12d                              # SrcLine 321
	movl	$402, %eax
	movl	%eax, %edi
	movl	$stdout, %eax
	movq	%rax, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 321
	movq	stdout(%rip), %rbp                          # SrcLine 321
	movl	$403, %eax
	movl	%eax, %edi
	movq	%r13, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 321
	movl	24(%rsp), %ecx                              # SrcLine 321
	xorb	%al, %al
	movq	%rbp, %rdi
	movl	$.L.str309, %edx
	movq	%rdx, %rsi
	movl	%r12d, %edx
	call	fprintf                                     # SrcLine 321
.LBB10_3:                                                   # %bb3
                                                            # Loop Depth 1
                                                            # Loop Header is BB10_4
                                                            # Inner Loop
	movl	$404, %eax
	movl	%eax, %edi
	movl	$stdout, %eax
	movq	%rax, %rsi
.Llabel225:
	call	_Z12myMemoryReadiPv                         # SrcLine 323
	movq	stdout(%rip), %rdi                          # SrcLine 323
	call	fflush                                      # SrcLine 323
	movl	$405, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel226:
	call	_Z12myMemoryReadiPv                         # SrcLine 311
	movl	20(%rsp), %r12d                             # SrcLine 311
	movl	$406, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 311
	incl	%r12d                                       # SrcLine 311
	movl	%r12d, 20(%rsp)                             # SrcLine 311
.LBB10_4:                                                   # %bb4
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$407, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 311
	cmpl	$4, 20(%rsp)                                # SrcLine 311
	jl	.LBB10_1                                    # SrcLine 311
.LBB10_5:                                                   # %bb5
	movl	$408, %edi
	leaq	(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel227:
	call	_Z13myMemoryWriteiPv                        # SrcLine 327
	movq	$0, (%rsp)                                  # SrcLine 327
	movl	$409, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 327
	movq	(%rsp), %rbx                                # SrcLine 327
	movl	$410, %edi
	leaq	40(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 327
	movq	%rbx, 40(%rsp)                              # SrcLine 327
.LBB10_6:                                                   # %return
	movl	$411, %edi
	leaq	40(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movq	40(%rsp), %rax
.Llabel209:
	addq	$56, %rsp                                   # SrcLine 327
	popq	%rbx                                        # SrcLine 327
	popq	%r12                                        # SrcLine 327
	popq	%r13                                        # SrcLine 327
	popq	%r14                                        # SrcLine 327
	popq	%r15                                        # SrcLine 327
	popq	%rbp                                        # SrcLine 327
	ret                                                 # SrcLine 327
.LBB10_7:                                                   # %bb1
                                                            # Loop Depth 1
                                                            # Loop Header is BB10_4
                                                            # Inner Loop
	movl	$393, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
.Llabel228:
	call	_Z12myMemoryReadiPv                         # SrcLine 316
	movl	28(%rsp), %edi                              # SrcLine 316
	call	strerror                                    # SrcLine 316
	movq	%rax, %r12
	movl	$394, %eax
	movl	%eax, %edi
	movq	%r14, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 316
	movq	8(%rsp), %r13                               # SrcLine 316
	leaq	8(%r13), %rsi                               # SrcLine 316
	movl	$395, %eax
	movl	%eax, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 316
	movl	8(%r13), %r13d                              # SrcLine 316
	movl	$396, %eax
	movl	%eax, %edi
	movl	$stderr, %eax
	movq	%rax, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 316
	movq	stderr(%rip), %rbp                          # SrcLine 316
	movl	$397, %eax
	movl	%eax, %edi
	movq	%r15, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 316
	movl	28(%rsp), %ecx                              # SrcLine 316
	xorb	%al, %al
	movq	%rbp, %rdi
	movl	$.L.str308, %edx
	movq	%rdx, %rsi
	movl	%r13d, %edx
	movq	%r12, %r8
	call	fprintf                                     # SrcLine 316
	jmp	.LBB10_3
	.size	consumer_routine, .-consumer_routine
.Lfunc_end10:


	.align	16
	.globl	main
	.type	main,@function
main:                                                       # @main
.Lfunc_begin11:
.Llabel238:
.LBB11_0:                                                   # %entry
	pushq	%rbp
.Llabel231:
	pushq	%r15
.Llabel232:
	pushq	%r14
.Llabel233:
	pushq	%r13
.Llabel234:
	pushq	%r12
.Llabel235:
	pushq	%rbx
.Llabel236:
	subq	$488, %rsp
.Llabel237:
	movq	%rsi, %rbx
	movl	%edi, %r14d
	movl	$412, %edi
	leaq	484(%rsp), %rsi
	call	_Z13myMemoryWriteiPv
	movl	%r14d, 484(%rsp)
	movl	$413, %edi
	leaq	472(%rsp), %rsi
	call	_Z13myMemoryWriteiPv
	movq	%rbx, 472(%rsp)
	leaq	264(%rsp), %rdi
	movl	$3, %esi
.Llabel239:
	call	bounded_buf_init                            # SrcLine 338
	movl	$414, %edi
	leaq	260(%rsp), %rsi
.Llabel240:
	call	_Z13myMemoryWriteiPv                        # SrcLine 340
	movl	$0, 260(%rsp)                               # SrcLine 340
	leaq	260(%rsp), %rbx
	movl	$producer_routine, %r14d
	movl	$422, %r15d
	movl	$423, %r12d
	jmp	.LBB11_2
.LBB11_1:                                                   # %bb
                                                            # Loop Depth 1
                                                            # Loop Header is BB11_2
                                                            # Inner Loop
	movl	$415, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel241:
	call	_Z12myMemoryReadiPv                         # SrcLine 342
	movslq	260(%rsp), %r13                             # SrcLine 342
	movl	$416, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 342
	movl	260(%rsp), %ebp                             # SrcLine 342
	leaq	(%r13,%r13,2), %r13                         # SrcLine 342
	leaq	24(%rsp,%r13,8), %rsi                       # SrcLine 342
	movl	$417, %eax
	movl	%eax, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 342
	movl	%ebp, 24(%rsp,%r13,8)                       # SrcLine 342
	movl	$418, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel242:
	call	_Z12myMemoryReadiPv                         # SrcLine 343
	movslq	260(%rsp), %rax                             # SrcLine 343
	leaq	(%rax,%rax,2), %r13                         # SrcLine 343
	leaq	32(%rsp,%r13,8), %rsi                       # SrcLine 343
	movl	$419, %eax
	movl	%eax, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 343
	leaq	264(%rsp), %rax
	movq	%rax, 32(%rsp,%r13,8)                       # SrcLine 343
	movl	$420, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel243:
	call	_Z12myMemoryReadiPv                         # SrcLine 344
	movslq	260(%rsp), %r13                             # SrcLine 344
	movl	$421, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 344
	movslq	260(%rsp), %rax                             # SrcLine 344
	xorl	%ecx, %ecx
	movl	%ecx, %esi
	leaq	(%r13,%r13,2), %rcx                         # SrcLine 344
	leaq	16(%rsp,%rcx,8), %rcx                       # SrcLine 344
	leaq	(%rax,%rax,2), %rax                         # SrcLine 344
	leaq	16(%rsp,%rax,8), %rdi                       # SrcLine 344
	movq	%r14, %rdx
	call	pthread_create                              # SrcLine 344
	movl	%r15d, %edi
	movq	%rbx, %rsi
.Llabel244:
	call	_Z12myMemoryReadiPv                         # SrcLine 340
	movl	260(%rsp), %r13d                            # SrcLine 340
	movl	%r12d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 340
	incl	%r13d                                       # SrcLine 340
	movl	%r13d, 260(%rsp)                            # SrcLine 340
.LBB11_2:                                                   # %bb1
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$424, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 340
	cmpl	$5, 260(%rsp)                               # SrcLine 340
	jl	.LBB11_1                                    # SrcLine 340
.LBB11_3:                                                   # %bb2
	movl	$425, %edi
	leaq	260(%rsp), %rsi
.Llabel245:
	call	_Z13myMemoryWriteiPv                        # SrcLine 347
	movl	$0, 260(%rsp)                               # SrcLine 347
	leaq	260(%rsp), %rbx
	movl	$consumer_routine, %r14d
	movl	$433, %r15d
	movl	$434, %r12d
	jmp	.LBB11_5
.LBB11_4:                                                   # %bb3
                                                            # Loop Depth 1
                                                            # Loop Header is BB11_5
                                                            # Inner Loop
	movl	$426, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel246:
	call	_Z12myMemoryReadiPv                         # SrcLine 349
	movslq	260(%rsp), %r13                             # SrcLine 349
	movl	$427, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 349
	movl	260(%rsp), %ebp                             # SrcLine 349
	leaq	(%r13,%r13,2), %r13                         # SrcLine 349
	leaq	144(%rsp,%r13,8), %rsi                      # SrcLine 349
	movl	$428, %eax
	movl	%eax, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 349
	movl	%ebp, 144(%rsp,%r13,8)                      # SrcLine 349
	movl	$429, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel247:
	call	_Z12myMemoryReadiPv                         # SrcLine 350
	movslq	260(%rsp), %rax                             # SrcLine 350
	leaq	(%rax,%rax,2), %r13                         # SrcLine 350
	leaq	152(%rsp,%r13,8), %rsi                      # SrcLine 350
	movl	$430, %eax
	movl	%eax, %edi
	call	_Z13myMemoryWriteiPv                        # SrcLine 350
	leaq	264(%rsp), %rax
	movq	%rax, 152(%rsp,%r13,8)                      # SrcLine 350
	movl	$431, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
.Llabel248:
	call	_Z12myMemoryReadiPv                         # SrcLine 351
	movslq	260(%rsp), %r13                             # SrcLine 351
	movl	$432, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 351
	movslq	260(%rsp), %rax                             # SrcLine 351
	xorl	%ecx, %ecx
	movl	%ecx, %esi
	leaq	(%r13,%r13,2), %rcx                         # SrcLine 351
	leaq	136(%rsp,%rcx,8), %rcx                      # SrcLine 351
	leaq	(%rax,%rax,2), %rax                         # SrcLine 351
	leaq	136(%rsp,%rax,8), %rdi                      # SrcLine 351
	movq	%r14, %rdx
	call	pthread_create                              # SrcLine 351
	movl	%r15d, %edi
	movq	%rbx, %rsi
.Llabel249:
	call	_Z12myMemoryReadiPv                         # SrcLine 347
	movl	260(%rsp), %r13d                            # SrcLine 347
	movl	%r12d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 347
	incl	%r13d                                       # SrcLine 347
	movl	%r13d, 260(%rsp)                            # SrcLine 347
.LBB11_5:                                                   # %bb4
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$435, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 347
	cmpl	$5, 260(%rsp)                               # SrcLine 347
	jl	.LBB11_4                                    # SrcLine 347
.LBB11_6:                                                   # %bb5
	movl	$436, %edi
	leaq	260(%rsp), %rsi
.Llabel250:
	call	_Z13myMemoryWriteiPv                        # SrcLine 355
	movl	$0, 260(%rsp)                               # SrcLine 355
	leaq	260(%rsp), %rbx
	movl	$437, %r14d
	movl	$438, %r15d
	movl	$439, %r12d
	movl	$440, %r13d
	jmp	.LBB11_8
.LBB11_7:                                                   # %bb6
                                                            # Loop Depth 1
                                                            # Loop Header is BB11_8
                                                            # Inner Loop
	movl	%r14d, %edi
	movq	%rbx, %rsi
.Llabel251:
	call	_Z12myMemoryReadiPv                         # SrcLine 356
	movslq	260(%rsp), %rax                             # SrcLine 356
	leaq	(%rax,%rax,2), %rbp                         # SrcLine 356
	leaq	16(%rsp,%rbp,8), %rsi                       # SrcLine 356
	movl	%r15d, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 356
	movq	16(%rsp,%rbp,8), %rdi                       # SrcLine 356
	xorl	%eax, %eax
	movl	%eax, %esi
	call	pthread_join                                # SrcLine 356
	movl	%r12d, %edi
	movq	%rbx, %rsi
.Llabel252:
	call	_Z12myMemoryReadiPv                         # SrcLine 355
	movl	260(%rsp), %ebp                             # SrcLine 355
	movl	%r13d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 355
	incl	%ebp                                        # SrcLine 355
	movl	%ebp, 260(%rsp)                             # SrcLine 355
.LBB11_8:                                                   # %bb7
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$441, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 355
	cmpl	$5, 260(%rsp)                               # SrcLine 355
	jl	.LBB11_7                                    # SrcLine 355
.LBB11_9:                                                   # %bb8
	movl	$442, %edi
	leaq	260(%rsp), %rsi
.Llabel253:
	call	_Z13myMemoryWriteiPv                        # SrcLine 358
	movl	$0, 260(%rsp)                               # SrcLine 358
	leaq	260(%rsp), %rbx
	movl	$443, %r14d
	movl	$444, %r15d
	movl	$445, %r12d
	movl	$446, %r13d
	jmp	.LBB11_11
.LBB11_10:                                                  # %bb9
                                                            # Loop Depth 1
                                                            # Loop Header is BB11_11
                                                            # Inner Loop
	movl	%r14d, %edi
	movq	%rbx, %rsi
.Llabel254:
	call	_Z12myMemoryReadiPv                         # SrcLine 359
	movslq	260(%rsp), %rax                             # SrcLine 359
	leaq	(%rax,%rax,2), %rbp                         # SrcLine 359
	leaq	136(%rsp,%rbp,8), %rsi                      # SrcLine 359
	movl	%r15d, %edi
	call	_Z12myMemoryReadiPv                         # SrcLine 359
	movq	136(%rsp,%rbp,8), %rdi                      # SrcLine 359
	xorl	%eax, %eax
	movl	%eax, %esi
	call	pthread_join                                # SrcLine 359
	movl	%r12d, %edi
	movq	%rbx, %rsi
.Llabel255:
	call	_Z12myMemoryReadiPv                         # SrcLine 358
	movl	260(%rsp), %ebp                             # SrcLine 358
	movl	%r13d, %edi
	movq	%rbx, %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 358
	incl	%ebp                                        # SrcLine 358
	movl	%ebp, 260(%rsp)                             # SrcLine 358
.LBB11_11:                                                  # %bb10
                                                            # Loop Depth 1
                                                            # Loop Header
                                                            # Inner Loop
	movl	$447, %eax
	movl	%eax, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 358
	cmpl	$5, 260(%rsp)                               # SrcLine 358
	jl	.LBB11_10                                   # SrcLine 358
.LBB11_12:                                                  # %bb11
	leaq	264(%rsp), %rdi
.Llabel256:
	call	bounded_buf_destroy                         # SrcLine 361
	movl	$448, %edi
	leaq	12(%rsp), %rbx
	movq	%rbx, %rsi
.Llabel257:
	call	_Z13myMemoryWriteiPv                        # SrcLine 362
	movl	$0, 12(%rsp)                                # SrcLine 362
	movl	$449, %edi
	movq	%rbx, %rsi
	call	_Z12myMemoryReadiPv                         # SrcLine 362
	movl	12(%rsp), %ebx                              # SrcLine 362
	movl	$450, %edi
	leaq	468(%rsp), %rsi
	call	_Z13myMemoryWriteiPv                        # SrcLine 362
	movl	%ebx, 468(%rsp)                             # SrcLine 362
.LBB11_13:                                                  # %return
	movl	$451, %edi
	leaq	468(%rsp), %rsi
	call	_Z12myMemoryReadiPv
	movl	468(%rsp), %eax
.Llabel230:
	addq	$488, %rsp                                  # SrcLine 362
	popq	%rbx                                        # SrcLine 362
	popq	%r12                                        # SrcLine 362
	popq	%r13                                        # SrcLine 362
	popq	%r14                                        # SrcLine 362
	popq	%r15                                        # SrcLine 362
	popq	%rbp                                        # SrcLine 362
	ret                                                 # SrcLine 362
	.size	main, .-main
.Lfunc_end11:
	.type	.L.str298,@object
	.section	.rodata.str1.16,"aMS",@progbits,1
.L.str298:                                                  # @.str298
	.asciz	"producer %d: error_code = %d, %s\n"
	.size	.L.str298, 34
	.type	.L.str299,@object
.L.str299:                                                  # @.str299
	.asciz	"producer %d -> %d\n"
	.size	.L.str299, 19
	.type	.L.str308,@object
.L.str308:                                                  # @.str308
	.asciz	"consumer %d: error code = %d %s\n"
	.size	.L.str308, 33
	.type	.L.str309,@object
.L.str309:                                                  # @.str309
	.asciz	"\t\t\tconsumer %d <- %d\n"
	.size	.L.str309, 22
	.text
.Ltext_end:
	.data
.Ldata_end:
	.text
.Lsection_end1:
	.section	.debug_frame,"",@progbits
.Ldebug_frame_common:
	.long	.Ldebug_frame_common_end-.Ldebug_frame_common_begin # Length of Common Information Entry
.Ldebug_frame_common_begin:
	.long	0xFFFFFFFF                                  # CIE Identifier Tag
	.byte	0x1                                         # CIE Version
	.asciz	""                                          # CIE Augmentation
	.uleb128	1                                   # CIE Code Alignment Factor
	.sleb128	-8                                  # CIE Data Alignment Factor
	.byte	0x10                                        # CIE RA Column
	.byte	0xC                                         # DW_CFA_def_cfa
	.uleb128	7                                   # Register
	.uleb128	8                                   # Offset
	.byte	0x90                                        # DW_CFA_offset + Reg (16)
	.uleb128	1                                   # Offset
	.align	4
.Ldebug_frame_common_end:

	.long	.Ldebug_frame_end1-.Ldebug_frame_begin1     # Length of Frame Information Entry
.Ldebug_frame_begin1:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin1                               # FDE initial location
	.quad	.Lfunc_end1-.Lfunc_begin1                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel3-.Lfunc_begin1
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel4-.Llabel3
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel5-.Llabel4
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel6-.Llabel5
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel7-.Llabel6
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	80                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	5                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	4                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	3                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end1:

	.long	.Ldebug_frame_end2-.Ldebug_frame_begin2     # Length of Frame Information Entry
.Ldebug_frame_begin2:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin2                               # FDE initial location
	.quad	.Lfunc_end2-.Lfunc_begin2                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel39-.Lfunc_begin2
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel40-.Llabel39
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel41-.Llabel40
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel42-.Llabel41
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel43-.Llabel42
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel44-.Llabel43
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	56                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel45-.Llabel44
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	96                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	7                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	6                                   # Offset
	.byte	0x8D                                        # DW_CFA_offset + Reg (13)
	.uleb128	5                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	4                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	3                                   # Offset
	.byte	0x86                                        # DW_CFA_offset + Reg (6)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end2:

	.long	.Ldebug_frame_end3-.Ldebug_frame_begin3     # Length of Frame Information Entry
.Ldebug_frame_begin3:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin3                               # FDE initial location
	.quad	.Lfunc_end3-.Lfunc_begin3                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel69-.Lfunc_begin3
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel70-.Llabel69
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel71-.Llabel70
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel72-.Llabel71
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	4                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	3                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end3:

	.long	.Ldebug_frame_end4-.Ldebug_frame_begin4     # Length of Frame Information Entry
.Ldebug_frame_begin4:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin4                               # FDE initial location
	.quad	.Lfunc_end4-.Lfunc_begin4                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel80-.Lfunc_begin4
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel81-.Llabel80
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel82-.Llabel81
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel83-.Llabel82
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	4                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	3                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end4:

	.long	.Ldebug_frame_end5-.Ldebug_frame_begin5     # Length of Frame Information Entry
.Ldebug_frame_begin5:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin5                               # FDE initial location
	.quad	.Lfunc_end5-.Lfunc_begin5                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel91-.Lfunc_begin5
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel92-.Llabel91
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel93-.Llabel92
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel94-.Llabel93
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel95-.Llabel94
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel96-.Llabel95
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	56                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel97-.Llabel96
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	96                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	7                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	6                                   # Offset
	.byte	0x8D                                        # DW_CFA_offset + Reg (13)
	.uleb128	5                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	4                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	3                                   # Offset
	.byte	0x86                                        # DW_CFA_offset + Reg (6)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end5:

	.long	.Ldebug_frame_end6-.Ldebug_frame_begin6     # Length of Frame Information Entry
.Ldebug_frame_begin6:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin6                               # FDE initial location
	.quad	.Lfunc_end6-.Lfunc_begin6                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel121-.Lfunc_begin6
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel122-.Llabel121
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel123-.Llabel122
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel124-.Llabel123
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel125-.Llabel124
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel126-.Llabel125
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	56                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel127-.Llabel126
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	240                                 # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	7                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	6                                   # Offset
	.byte	0x8D                                        # DW_CFA_offset + Reg (13)
	.uleb128	5                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	4                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	3                                   # Offset
	.byte	0x86                                        # DW_CFA_offset + Reg (6)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end6:

	.long	.Ldebug_frame_end7-.Ldebug_frame_begin7     # Length of Frame Information Entry
.Ldebug_frame_begin7:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin7                               # FDE initial location
	.quad	.Lfunc_end7-.Lfunc_begin7                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel154-.Lfunc_begin7
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel155-.Llabel154
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel156-.Llabel155
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel157-.Llabel156
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	64                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	4                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	3                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end7:

	.long	.Ldebug_frame_end8-.Ldebug_frame_begin8     # Length of Frame Information Entry
.Ldebug_frame_begin8:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin8                               # FDE initial location
	.quad	.Lfunc_end8-.Lfunc_begin8                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel171-.Lfunc_begin8
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel172-.Llabel171
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel173-.Llabel172
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel174-.Llabel173
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	64                                  # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	4                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	3                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end8:

	.long	.Ldebug_frame_end9-.Ldebug_frame_begin9     # Length of Frame Information Entry
.Ldebug_frame_begin9:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin9                               # FDE initial location
	.quad	.Lfunc_end9-.Lfunc_begin9                   # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel188-.Lfunc_begin9
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel189-.Llabel188
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel190-.Llabel189
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel191-.Llabel190
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel192-.Llabel191
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel193-.Llabel192
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	56                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel194-.Llabel193
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	112                                 # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	7                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	6                                   # Offset
	.byte	0x8D                                        # DW_CFA_offset + Reg (13)
	.uleb128	5                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	4                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	3                                   # Offset
	.byte	0x86                                        # DW_CFA_offset + Reg (6)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end9:

	.long	.Ldebug_frame_end10-.Ldebug_frame_begin10   # Length of Frame Information Entry
.Ldebug_frame_begin10:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin10                              # FDE initial location
	.quad	.Lfunc_end10-.Lfunc_begin10                 # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel210-.Lfunc_begin10
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel211-.Llabel210
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel212-.Llabel211
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel213-.Llabel212
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel214-.Llabel213
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel215-.Llabel214
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	56                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel216-.Llabel215
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	112                                 # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	7                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	6                                   # Offset
	.byte	0x8D                                        # DW_CFA_offset + Reg (13)
	.uleb128	5                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	4                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	3                                   # Offset
	.byte	0x86                                        # DW_CFA_offset + Reg (6)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end10:

	.long	.Ldebug_frame_end11-.Ldebug_frame_begin11   # Length of Frame Information Entry
.Ldebug_frame_begin11:
	.long	.Ldebug_frame_common                        # FDE CIE offset
	.quad	.Lfunc_begin11                              # FDE initial location
	.quad	.Lfunc_end11-.Lfunc_begin11                 # FDE address range
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel231-.Lfunc_begin11
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	16                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel232-.Llabel231
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	24                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel233-.Llabel232
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	32                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel234-.Llabel233
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	40                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel235-.Llabel234
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	48                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel236-.Llabel235
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	56                                  # Offset
	.byte	0x4                                         # DW_CFA_advance_loc4
	.long	.Llabel237-.Llabel236
	.byte	0xE                                         # DW_CFA_def_cfa_offset
	.uleb128	544                                 # Offset
	.byte	0x83                                        # DW_CFA_offset + Reg (3)
	.uleb128	7                                   # Offset
	.byte	0x8C                                        # DW_CFA_offset + Reg (12)
	.uleb128	6                                   # Offset
	.byte	0x8D                                        # DW_CFA_offset + Reg (13)
	.uleb128	5                                   # Offset
	.byte	0x8E                                        # DW_CFA_offset + Reg (14)
	.uleb128	4                                   # Offset
	.byte	0x8F                                        # DW_CFA_offset + Reg (15)
	.uleb128	3                                   # Offset
	.byte	0x86                                        # DW_CFA_offset + Reg (6)
	.uleb128	2                                   # Offset
	.align	4
.Ldebug_frame_end11:

	.section	.debug_info,"",@progbits
.Linfo_begin1:
	.long	0x34A                                       # Length of Compilation Unit Info
	.short	0x2                                         # DWARF version number
	.long	.Labbrev_begin                              # Offset Into Abbrev. Section
	.byte	0x8                                         # Address Size (in bytes)

	.uleb128	1                                   # Abbrev [1] 0xB:0x33F DW_TAG_compile_unit
	.long	.Lsection_line                              # DW_AT_stmt_list
	.asciz	"4.2.1 (Based on Apple Inc. build 5649) (LLVM build)" # DW_AT_producer
	.byte	0x1                                         # DW_AT_language
	.asciz	"boundedBuffer.c"                           # DW_AT_name
	.asciz	"/local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src" # DW_AT_comp_dir

	.uleb128	2                                   # Abbrev [2] 0x94:0x7 DW_TAG_base_type
	.byte	0x5                                         # DW_AT_encoding
	.asciz	"int"                                       # DW_AT_name
	.byte	0x4                                         # DW_AT_byte_size

	.uleb128	3                                   # Abbrev [3] 0x9B:0x3D DW_TAG_subprogram
	.asciz	"bounded_buf_init"                          # DW_AT_name
	.asciz	"bounded_buf_init"                          # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0x25                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin1                               # DW_AT_low_pc
	.quad	.Lfunc_end1                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	3                                   # Abbrev [3] 0xD8:0x43 DW_TAG_subprogram
	.asciz	"bounded_buf_destroy"                       # DW_AT_name
	.asciz	"bounded_buf_destroy"                       # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0x52                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin2                               # DW_AT_low_pc
	.quad	.Lfunc_end2                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	4                                   # Abbrev [4] 0x11B:0x45 DW_TAG_subprogram
	.asciz	"bounded_buf_putcleanup"                    # DW_AT_name
	.asciz	"bounded_buf_putcleanup"                    # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0x72                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin3                               # DW_AT_low_pc
	.quad	.Lfunc_end3                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	4                                   # Abbrev [4] 0x160:0x45 DW_TAG_subprogram
	.asciz	"bounded_buf_getcleanup"                    # DW_AT_name
	.asciz	"bounded_buf_getcleanup"                    # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0x7A                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin4                               # DW_AT_low_pc
	.quad	.Lfunc_end4                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	3                                   # Abbrev [3] 0x1A5:0x3B DW_TAG_subprogram
	.asciz	"bounded_buf_put"                           # DW_AT_name
	.asciz	"bounded_buf_put"                           # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0x81                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin5                               # DW_AT_low_pc
	.quad	.Lfunc_end5                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	3                                   # Abbrev [3] 0x1E0:0x3B DW_TAG_subprogram
	.asciz	"bounded_buf_get"                           # DW_AT_name
	.asciz	"bounded_buf_get"                           # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0xA5                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin6                               # DW_AT_low_pc
	.quad	.Lfunc_end6                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	3                                   # Abbrev [3] 0x21B:0x45 DW_TAG_subprogram
	.asciz	"bounded_buf_is_empty"                      # DW_AT_name
	.asciz	"bounded_buf_is_empty"                      # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0xDF                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin7                               # DW_AT_low_pc
	.quad	.Lfunc_end7                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	3                                   # Abbrev [3] 0x260:0x43 DW_TAG_subprogram
	.asciz	"bounded_buf_is_full"                       # DW_AT_name
	.asciz	"bounded_buf_is_full"                       # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0xF3                                        # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin8                               # DW_AT_low_pc
	.quad	.Lfunc_end8                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	5                                   # Abbrev [5] 0x2A3:0x4 DW_TAG_pointer_type
	.byte	0x8                                         # DW_AT_byte_size
	.byte	0x1                                         # DW_AT_decl_file
	.byte	0x0                                         # DW_AT_decl_line

	.uleb128	6                                   # Abbrev [6] 0x2A7:0x3E DW_TAG_subprogram
	.asciz	"producer_routine"                          # DW_AT_name
	.asciz	"producer_routine"                          # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.short	0x110                                       # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x2A3                                       # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin9                               # DW_AT_low_pc
	.quad	.Lfunc_end9                                 # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	6                                   # Abbrev [6] 0x2E5:0x3E DW_TAG_subprogram
	.asciz	"consumer_routine"                          # DW_AT_name
	.asciz	"consumer_routine"                          # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.short	0x12D                                       # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x2A3                                       # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin10                              # DW_AT_low_pc
	.quad	.Lfunc_end10                                # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base

	.uleb128	6                                   # Abbrev [6] 0x323:0x26 DW_TAG_subprogram
	.asciz	"main"                                      # DW_AT_name
	.asciz	"main"                                      # DW_AT_MIPS_linkage_name
	.byte	0x1                                         # DW_AT_decl_file
	.short	0x14C                                       # DW_AT_decl_line
	.byte	0x1                                         # DW_AT_prototyped
	.long	0x94                                        # DW_AT_type
	.byte	0x1                                         # DW_AT_external
	.quad	.Lfunc_begin11                              # DW_AT_low_pc
	.quad	.Lfunc_end11                                # DW_AT_high_pc
	.byte	0x1
	.byte	0x57                                        # DW_AT_frame_base
	.byte	0x0                                         # End Of Children Mark
	.byte	0x0                                         # Extra Pad For GDB
	.byte	0x0                                         # Extra Pad For GDB
	.byte	0x0                                         # Extra Pad For GDB
	.byte	0x0                                         # Extra Pad For GDB
.Linfo_end1:

	.section	.debug_abbrev,"",@progbits
.Labbrev_begin:
	.uleb128	1                                   # Abbreviation Code
	.uleb128	17                                  # DW_TAG_compile_unit
	.uleb128	1                                   # CHILDREN_yes
	.uleb128	16                                  # DW_AT_stmt_list
	.uleb128	6                                   # FORM_data4
	.uleb128	37                                  # DW_AT_producer
	.uleb128	8                                   # FORM_string
	.uleb128	19                                  # DW_AT_language
	.uleb128	11                                  # FORM_data1
	.uleb128	3                                   # DW_AT_name
	.uleb128	8                                   # FORM_string
	.uleb128	27                                  # DW_AT_comp_dir
	.uleb128	8                                   # FORM_string
	.uleb128	0                                   # EOM(1)
	.uleb128	0                                   # EOM(2)

	.uleb128	2                                   # Abbreviation Code
	.uleb128	36                                  # DW_TAG_base_type
	.uleb128	0                                   # CHILDREN_no
	.uleb128	62                                  # DW_AT_encoding
	.uleb128	11                                  # FORM_data1
	.uleb128	3                                   # DW_AT_name
	.uleb128	8                                   # FORM_string
	.uleb128	11                                  # DW_AT_byte_size
	.uleb128	11                                  # FORM_data1
	.uleb128	0                                   # EOM(1)
	.uleb128	0                                   # EOM(2)

	.uleb128	3                                   # Abbreviation Code
	.uleb128	46                                  # DW_TAG_subprogram
	.uleb128	0                                   # CHILDREN_no
	.uleb128	3                                   # DW_AT_name
	.uleb128	8                                   # FORM_string
	.uleb128	8199                                # DW_AT_MIPS_linkage_name
	.uleb128	8                                   # FORM_string
	.uleb128	58                                  # DW_AT_decl_file
	.uleb128	11                                  # FORM_data1
	.uleb128	59                                  # DW_AT_decl_line
	.uleb128	11                                  # FORM_data1
	.uleb128	39                                  # DW_AT_prototyped
	.uleb128	12                                  # FORM_flag
	.uleb128	73                                  # DW_AT_type
	.uleb128	19                                  # FORM_ref4
	.uleb128	63                                  # DW_AT_external
	.uleb128	12                                  # FORM_flag
	.uleb128	17                                  # DW_AT_low_pc
	.uleb128	1                                   # FORM_addr
	.uleb128	18                                  # DW_AT_high_pc
	.uleb128	1                                   # FORM_addr
	.uleb128	64                                  # DW_AT_frame_base
	.uleb128	10                                  # FORM_block1
	.uleb128	0                                   # EOM(1)
	.uleb128	0                                   # EOM(2)

	.uleb128	4                                   # Abbreviation Code
	.uleb128	46                                  # DW_TAG_subprogram
	.uleb128	0                                   # CHILDREN_no
	.uleb128	3                                   # DW_AT_name
	.uleb128	8                                   # FORM_string
	.uleb128	8199                                # DW_AT_MIPS_linkage_name
	.uleb128	8                                   # FORM_string
	.uleb128	58                                  # DW_AT_decl_file
	.uleb128	11                                  # FORM_data1
	.uleb128	59                                  # DW_AT_decl_line
	.uleb128	11                                  # FORM_data1
	.uleb128	39                                  # DW_AT_prototyped
	.uleb128	12                                  # FORM_flag
	.uleb128	63                                  # DW_AT_external
	.uleb128	12                                  # FORM_flag
	.uleb128	17                                  # DW_AT_low_pc
	.uleb128	1                                   # FORM_addr
	.uleb128	18                                  # DW_AT_high_pc
	.uleb128	1                                   # FORM_addr
	.uleb128	64                                  # DW_AT_frame_base
	.uleb128	10                                  # FORM_block1
	.uleb128	0                                   # EOM(1)
	.uleb128	0                                   # EOM(2)

	.uleb128	5                                   # Abbreviation Code
	.uleb128	15                                  # DW_TAG_pointer_type
	.uleb128	0                                   # CHILDREN_no
	.uleb128	11                                  # DW_AT_byte_size
	.uleb128	11                                  # FORM_data1
	.uleb128	58                                  # DW_AT_decl_file
	.uleb128	11                                  # FORM_data1
	.uleb128	59                                  # DW_AT_decl_line
	.uleb128	11                                  # FORM_data1
	.uleb128	0                                   # EOM(1)
	.uleb128	0                                   # EOM(2)

	.uleb128	6                                   # Abbreviation Code
	.uleb128	46                                  # DW_TAG_subprogram
	.uleb128	0                                   # CHILDREN_no
	.uleb128	3                                   # DW_AT_name
	.uleb128	8                                   # FORM_string
	.uleb128	8199                                # DW_AT_MIPS_linkage_name
	.uleb128	8                                   # FORM_string
	.uleb128	58                                  # DW_AT_decl_file
	.uleb128	11                                  # FORM_data1
	.uleb128	59                                  # DW_AT_decl_line
	.uleb128	5                                   # FORM_data2
	.uleb128	39                                  # DW_AT_prototyped
	.uleb128	12                                  # FORM_flag
	.uleb128	73                                  # DW_AT_type
	.uleb128	19                                  # FORM_ref4
	.uleb128	63                                  # DW_AT_external
	.uleb128	12                                  # FORM_flag
	.uleb128	17                                  # DW_AT_low_pc
	.uleb128	1                                   # FORM_addr
	.uleb128	18                                  # DW_AT_high_pc
	.uleb128	1                                   # FORM_addr
	.uleb128	64                                  # DW_AT_frame_base
	.uleb128	10                                  # FORM_block1
	.uleb128	0                                   # EOM(1)
	.uleb128	0                                   # EOM(2)

	.uleb128	0                                   # EOM(3)
.Labbrev_end:

	.section	.debug_line,"",@progbits
	.long	.Lline_end-.Lline_begin                     # Length of Source Line Info
.Lline_begin:
	.short	0x2                                         # DWARF version number
	.long	.Lline_prolog_end-.Lline_prolog_begin       # Prolog Length
.Lline_prolog_begin:
	.byte	0x1                                         # Minimum Instruction Length
	.byte	0x1                                         # Default is_stmt_start flag
	.byte	0xF6                                        # Line Base Value (Special Opcodes)
	.byte	0xF5                                        # Line Range Value (Special Opcodes)
	.byte	0xA                                         # Special Opcode Base
	.byte	0x0                                         # DW_LNS_copy arg count
	.byte	0x1                                         # DW_LNS_advance_pc arg count
	.byte	0x1                                         # DW_LNS_advance_line arg count
	.byte	0x1                                         # DW_LNS_set_file arg count
	.byte	0x1                                         # DW_LNS_set_column arg count
	.byte	0x0                                         # DW_LNS_negate_stmt arg count
	.byte	0x0                                         # DW_LNS_set_basic_block arg count
	.byte	0x0                                         # DW_LNS_const_add_pc arg count
	.byte	0x1                                         # DW_LNS_fixed_advance_pc arg count
	.asciz	"/local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src" # Directory
	.asciz	"/usr/include/bits"                         # Directory
	.asciz	"/local_home/sarahsong/llvm-gcc-4.2-2.6-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include" # Directory
	.asciz	"/usr/include"                              # Directory
	.asciz	"/usr/include/sys"                          # Directory
	.byte	0x0                                         # End of directories
	.asciz	"boundedBuffer.c"                           # Source
	.uleb128	1                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.asciz	"pthreadtypes.h"                            # Source
	.uleb128	2                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.asciz	"stddef.h"                                  # Source
	.uleb128	3                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.asciz	"pthread.h"                                 # Source
	.uleb128	4                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.asciz	"setjmp.h"                                  # Source
	.uleb128	2                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.asciz	"types.h"                                   # Source
	.uleb128	5                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.asciz	"types.h"                                   # Source
	.uleb128	2                                   # Directory #
	.uleb128	0                                   # Mod date
	.uleb128	0                                   # File size
	.byte	0x0                                         # End of files
.Lline_prolog_end:

	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :37
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel8                                    # Location label
	.byte	0x38                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :38
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel9                                    # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :40
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel10                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :42
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel11                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :44
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel12                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :45
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel13                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :47
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel14                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :48
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel15                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :54
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel16                                   # Location label
	.byte	0x1A                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :55
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel17                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :62
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel18                                   # Location label
	.byte	0x1B                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :63
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel19                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :64
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel20                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :65
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel21                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :66
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel22                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :67
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel23                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :75
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel24                                   # Location label
	.byte	0x1C                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :76
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel25                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :77
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel26                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :40
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel27                                   # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-37                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :50
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel28                                   # Location label
	.byte	0x1E                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :51
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel29                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :57
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel30                                   # Location label
	.byte	0x1A                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :58
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel31                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :59
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel32                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :69
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel33                                   # Location label
	.byte	0x1E                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :70
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel34                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :71
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel35                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :72
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel36                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :82
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel46                                   # Location label
	.byte	0x1E                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :83
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel47                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :85
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel48                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :88
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel49                                   # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :89
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel50                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :91
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel51                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :92
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel52                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :93
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel53                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :95
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel54                                   # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :96
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel55                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :97
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel56                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :100
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel57                                   # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :101
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel58                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :104
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel59                                   # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :105
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel60                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :108
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel61                                   # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :109
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel62                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :86
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel63                                   # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-23                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :89
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel64                                   # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :93
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel65                                   # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :109
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel66                                   # Location label
	.byte	0x24                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :114
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel73                                   # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :115
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel74                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :116
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel75                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :117
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel76                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :118
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel77                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :122
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel84                                   # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :123
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel85                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :124
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel86                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :125
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel87                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :126
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel88                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :129
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel98                                   # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :130
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel99                                   # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :132
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel100                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :135
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel101                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :136
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel102                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :139
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel103                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :141
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel104                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :144
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel105                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :145
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel106                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :143
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel107                                  # Location label
	.byte	0x12                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :148
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel108                                  # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :151
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel109                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :152
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel110                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :153
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel111                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :154
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel112                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :155
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel113                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :159
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel114                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :160
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel115                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :133
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel116                                  # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-27                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :136
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel117                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :160
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel118                                  # Location label
	.byte	0x2C                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :165
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel128                                  # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :166
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel129                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :168
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel130                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :171
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel131                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :172
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel132                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :174
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel133                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :176
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel134                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :177
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel135                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :181
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel136                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :182
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel137                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :179
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel138                                  # Location label
	.byte	0x11                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :185
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel139                                  # Location label
	.byte	0x1A                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :186
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel140                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :194
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel141                                  # Location label
	.byte	0x1C                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :196
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel142                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :197
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel143                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :199
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel144                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :200
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel145                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :205
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel146                                  # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :206
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel147                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :169
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel148                                  # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-37                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :172
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel149                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :177
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel150                                  # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :206
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel151                                  # Location label
	.byte	0x31                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :223
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel158                                  # Location label
	.byte	0x25                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :224
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel159                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :226
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel160                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :230
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel161                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :231
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel162                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :233
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel163                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :236
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel164                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :238
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel165                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :227
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel166                                  # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-11                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :231
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel167                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :238
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel168                                  # Location label
	.byte	0x1B                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :243
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel175                                  # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :244
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel176                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :246
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel177                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :248
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel178                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :249
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel179                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :251
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel180                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :252
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel181                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :253
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel182                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :246
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel183                                  # Location label
	.byte	0xD                                         # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :249
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel184                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :253
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel185                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :272
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel195                                  # Location label
	.byte	0x27                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :273
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel196                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :277
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel197                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :279
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel198                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :281
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel199                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :282
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel200                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :283
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel201                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :285
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel202                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :289
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel203                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :292
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel204                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :279
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel205                                  # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-13                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :296
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel206                                  # Location label
	.byte	0x25                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :286
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel207                                  # Location label
	.byte	0xA                                         # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :301
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel217                                  # Location label
	.byte	0x23                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :303
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel218                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :307
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel219                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :311
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel220                                  # Location label
	.byte	0x18                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :313
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel221                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :315
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel222                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :320
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel223                                  # Location label
	.byte	0x19                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :321
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel224                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :323
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel225                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :311
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel226                                  # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-12                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :327
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel227                                  # Location label
	.byte	0x24                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :316
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel228                                  # Location label
	.byte	0x3                                         # DW_LNS_advance_line
	.sleb128	-11                                 # Line Offset
	.byte	0x1                                         # DW_LNS_copy
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :332
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel238                                  # Location label
	.byte	0x24                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :338
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel239                                  # Location label
	.byte	0x1A                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :340
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel240                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :342
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel241                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :343
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel242                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :344
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel243                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :340
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel244                                  # Location label
	.byte	0x10                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :347
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel245                                  # Location label
	.byte	0x1B                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :349
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel246                                  # Location label
	.byte	0x16                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :350
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel247                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :351
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel248                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :347
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel249                                  # Location label
	.byte	0x10                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :355
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel250                                  # Location label
	.byte	0x1C                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :356
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel251                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :355
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel252                                  # Location label
	.byte	0x13                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :358
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel253                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :359
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel254                                  # Location label
	.byte	0x15                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :358
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel255                                  # Location label
	.byte	0x13                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :361
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel256                                  # Location label
	.byte	0x17                                        # Line Delta
	# /local_home/sarahsong/Thrille-simple/benchmarks/simpl/bbuf/src boundedBuffer.c :362
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Llabel257                                  # Location label
	.byte	0x15                                        # Line Delta
	.byte	0x0                                         # Extended Op
	.byte	0x9                                         # Op size
	.byte	0x2                                         # DW_LNE_set_address
	.quad	.Lsection_end1                              # Section end label
	.byte	0x0                                         # DW_LNE_end_sequence
	.uleb128	1
	.byte	0x1
.Lline_end:

	.section	.debug_pubnames,"",@progbits
	.long	.Lpubnames_end1-.Lpubnames_begin1           # Length of Public Names Info
.Lpubnames_begin1:
	.short	0x2                                         # DWARF Version
	.long	.Linfo_begin1                               # Offset of Compilation Unit Info
	.long	.Linfo_end1-.Linfo_begin1                   # Compilation Unit Length
	.long	0x11B                                       # DIE offset
	.asciz	"bounded_buf_putcleanup"                    # External Name
	.long	0x260                                       # DIE offset
	.asciz	"bounded_buf_is_full"                       # External Name
	.long	0x2A7                                       # DIE offset
	.asciz	"producer_routine"                          # External Name
	.long	0x323                                       # DIE offset
	.asciz	"main"                                      # External Name
	.long	0x160                                       # DIE offset
	.asciz	"bounded_buf_getcleanup"                    # External Name
	.long	0x2E5                                       # DIE offset
	.asciz	"consumer_routine"                          # External Name
	.long	0x1A5                                       # DIE offset
	.asciz	"bounded_buf_put"                           # External Name
	.long	0x1E0                                       # DIE offset
	.asciz	"bounded_buf_get"                           # External Name
	.long	0x9B                                        # DIE offset
	.asciz	"bounded_buf_init"                          # External Name
	.long	0xD8                                        # DIE offset
	.asciz	"bounded_buf_destroy"                       # External Name
	.long	0x21B                                       # DIE offset
	.asciz	"bounded_buf_is_empty"                      # External Name
	.long	0x0                                         # End Mark
.Lpubnames_end1:

	.section	.debug_loc,"",@progbits

	.section	.debug_aranges,"",@progbits

	.section	.debug_ranges,"",@progbits

	.section	.debug_macinfo,"",@progbits

	.weak	__pthread_unwind_next

	.section	.note.GNU-stack,"",@progbits

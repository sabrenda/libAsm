global	_ft_read
extern ___error
section	.text
;int ft_read(int rdi, void *rsi, int rdx);

_ft_read:
		mov r8, rdx
		mov rax, 0x2000003
		syscall
		jc .error
		ret

.error:
		push r8
		mov r8, rax
		call ___error
		mov [rax], r8
		pop r8
		mov rax, -1
		ret

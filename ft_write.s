global	_ft_write
extern ___error
section	.text
;int ft_write(int rdi, void *rsi, int rdx);

_ft_write:
		mov r8, rdx
		mov rax, 0x2000004
		syscall
		jc .error
		jmp .return

.error:
		push r8
		mov r8, rax
		call ___error
		mov [rax], r8
		pop r8
		mov rax, -1
		ret

.return:
		mov rax, r8
		ret

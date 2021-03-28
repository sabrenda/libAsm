global	_ft_strcpy
section	.text
;char *ft_strcpy(char *rdi, char *rsi)

_ft_strcpy:
		mov rax, 0
.loop:
		cmp byte[rsi + rax], 0
		je .return
		mov dl, byte[rsi + rax]
		mov byte[rdi + rax], dl
		inc rax
		jmp .loop
.return:
		mov rax, rdi
		ret

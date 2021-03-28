global	_ft_strcmp
section	.text
;char *ft_strcmp(char *rdi, char *rsi);

_ft_strcmp:
		mov rax, 0
.loop:
		mov cl, byte[rsi + rax]
		mov dl, byte[rdi + rax]
		sub dl, cl
		cmp dl, 0
		jnz .return
		cmp byte[rsi + rax], 0
		je .return
		cmp byte[rdi + rax], 0
		je .return
		inc rax
		jmp .loop
.return:
		movsx rax, dl
		ret

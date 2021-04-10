global	_ft_strdup
section	.text
extern	_malloc
extern	_ft_strcpy
extern	_ft_strlen
;char *ft_strdup(char *rdi);

_ft_strdup:
		push rdi
		call _ft_strlen
		inc rax
		mov rdi, rax
		call _malloc
		cmp rax, 0
		je .error
		pop rsi
		mov rdi, rax
		call _ft_strcpy
.return:
		ret
.error:
		pop rsi
		ret

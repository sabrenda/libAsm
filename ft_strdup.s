global	_ft_strdup
extern	_malloc
extern	_ft_strcpy
extern	_ft_strlen
section	.text
;char *ft_strdup(char *rdi);

_ft_strdup:
		push rdi
		call _ft_strlen
		inc rax
		mov rdi, rax
		call _malloc
		pop rdi
		mov rsi, rdi
		mov rdi, rax
		call _ft_strcpy
.return:
		ret

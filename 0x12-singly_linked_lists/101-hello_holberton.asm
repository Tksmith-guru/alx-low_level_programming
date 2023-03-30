	SECTION .data
msg:		db "Hello, Holberton", 0
fmt:		db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	nov edi, fmt
	nov eax, 0
	call printf

	nov eax, 0
ret

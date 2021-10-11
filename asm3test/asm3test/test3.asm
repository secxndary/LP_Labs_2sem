.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD

.STACK 4096		

.DATA

mass DWORD 1, 2, 3, 0, 1, 3, 2

.CODE
main PROC

	mov ESI, offset mass
	xor EAX, EAX
	mov EBX, EAX
	mov ECX, 7

START:
	
		; TASK 1
	loop1:
	mov bx, [ESI]
    add EAX, EBX 
    add ESI, 4
    loop loop1
    


		; TASK 2
	mov ESI, offset mass
	xor EAX, EAX
	xor EDX, EDX
	mov EBX, EAX
	mov ECX, 7
	mov dl, 1

	loop2:
	mov bx, [ESI]
	cmp bx, 0		;if
	jne ElsePart	;then
	mov dl, 0
	jmp EndOfIf
	ElsePart:
	EndOfIf:
	add ESI, 4
	loop loop2

    call ExitProcess
main ENDP
end main
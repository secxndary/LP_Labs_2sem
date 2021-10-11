.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD

.STACK 4096		

.DATA
myBytes BYTE 10h, 20h, 30h, 40h
myWords WORD 8Ah, 3Bh, 44h, 5Fh, 99h
myDoubles DWORD 1, 2, 3, 4, 5, 6
myPointer DWORD  myDoubles

mass DWORD 1, 1, 1, 4, 8, 19, 6
ptrMass DWORD mass

.CODE
main PROC

START:	
	mov ESI, 0						; task 1
	mov EAX, myDoubles[ESI]
	mov EDX, [myDoubles + ESI]
	
	push -1
	call ExitProcess
main ENDP
end main
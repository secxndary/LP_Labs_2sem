.586P													; тип процессора - Intel
.MODEL FLAT, STDCALL									; модель памяти - плоская
includelib kernel32.lib

ExitProcess PROTO : DWORD								; прототип ф-ии завершения процесса
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD	; прототип API-функции

.STACK 4096												; выделение 4мб стека

.CONST													; сегмент констант

.DATA
MB_OK	EQU 0											; EQU - константа
STR1	DB "Внимание", 0								; строка размером 1 байт
STR2	DB "Спасибо за внимание", 0
HW		DD ?											; неинициализированное двойное слово 4 байта

.CODE													; сегмент кода

main PROC
START :													; метка начала
		;PUSH MB_OK;
		;PUSH OFFSET STR1;
		;PUSH OFFSET STR2;
		;PUSH HW;
		;CALL MessageBoxA;

		INVOKE MessageBoxA, HW, OFFSET STR2, OFFSET STR1, MB_OK

	push - 1
	call ExitProcess

main ENDP
end main
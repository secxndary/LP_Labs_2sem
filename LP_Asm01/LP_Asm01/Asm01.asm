.586P													; ��� ���������� - Intel
.MODEL FLAT, STDCALL									; ������ ������ - �������
includelib kernel32.lib

ExitProcess PROTO : DWORD								; �������� �-�� ���������� ��������
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD	; �������� API-�������

.STACK 4096												; ��������� 4�� �����

.CONST													; ������� ��������

.DATA
MB_OK	EQU 0											; EQU - ���������
STR1	DB "��������", 0								; ������ �������� 1 ����
STR2	DB "������� �� ��������", 0
HW		DD ?											; �������������������� ������� ����� 4 �����

.CODE													; ������� ����

main PROC
START :													; ����� ������
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
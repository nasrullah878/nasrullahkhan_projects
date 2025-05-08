section .data
    msg db "Hello, World!", 0xA  ; The message with a newline
    len equ $ - msg              ; Length of the message

section .text
    global _start

_start:
    ; write syscall
    mov eax, 4      ; syscall number for sys_write
    mov ebx, 1      ; file descriptor (stdout)
    mov ecx, msg    ; pointer to message
    mov edx, len    ; message length
    int 0x80        ; call kernel

    ; exit syscall
    mov eax, 1      ; syscall number for sys_exit
    xor ebx, ebx    ; exit code 0
    int 0x80        ; call kernel

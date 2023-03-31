section .data
    hello db 'Hello, World!',0

section .text
    global _start

_start:
    ; write the message to stdout
    mov rax, 4           ; system call for 'write'
    mov rbx, 1           ; file descriptor for stdout
    mov rcx, hello       ; pointer to message
    mov rdx, 13          ; message length
    int 0x80             ; call kernel

    ; exit the program
    mov eax, 1           ; system call for 'exit'
    xor ebx, ebx         ; exit status code
    int 0x80             ; call kernel

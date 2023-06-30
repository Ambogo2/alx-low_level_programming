section .data
    hello db "Hello, Holberton", 0
    newline db 10, 0
    format db "%s%s", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8   ; Align stack

    mov rdi, format
    mov rsi, hello
    mov rdx, newline
    xor eax, eax
    call printf

    add rsp, 8   ; Restore stack
    xor eax, eax
    ret

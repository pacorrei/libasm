global ft_strcpy

ft_strcpy:
        mov rax, 0
        jmp loop_copy

loop_copy:
        mov cl, [rsi + rax]
        mov [rdi + rax], cl
        cmp cl, 0
        je exit_strcpy
        inc rax
        jmp loop_copy

exit_strcpy:
        mov rax, rdi
        ret
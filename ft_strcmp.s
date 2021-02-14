global ft_strcmp

ft_strcmp:
        mov rax, 0
        jmp loop

loop:
        mov bl, [rdi]
        mov cl, [rsi]
        cmp bl, 0
        je exit
        cmp cl, 0
        je exit
        cmp bl, cl
        jne exit
        inc rdi
        inc rsi
        jmp loop

exit:
        movzx rax, bl
        movzx r10, cl
        sub rax, r10
        ret
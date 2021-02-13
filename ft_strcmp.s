global ft_strcmp

ft_strcmp:
        mov rax, 0
        jmp loop

loop:
        mov bl, [rdi + rax]
        mov cl, [rsi + rax]
        cmp bl, 0
        je negatif
        cmp cl, 0
        je positif
        inc rax
        jmp loop

negatif:
        cmp cl, 0
        je egale
        mov rax, -1
        ret

positif:
        mov rax, 1
        ret

egale:
        mov rax, 0
        ret
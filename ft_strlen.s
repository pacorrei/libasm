global ft_strlen

ft_strlen:
        mov rax, 0
        jmp incrementation

incrementation:
        cmp BYTE [rdi +rax], 0
        je exit
        inc rax
        jmp incrementation

exit :
        ret
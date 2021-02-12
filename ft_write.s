global ft_write

ft_write:
        mov rax, 1
        syscall
        mov rax, 60
        xor rdi, rdi
        syscall
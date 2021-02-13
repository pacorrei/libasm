global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc

ft_strdup:
        call ft_strlen
        inc rax
        mov rbx, rdi
        mov rdi, rax
        call malloc
        cmp rax, 0
        je error
        mov rdi, rax
        mov rsi, rbx
        call ft_strcpy
        ret

error :
        ret
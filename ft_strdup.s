global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location

ft_strdup:
        call ft_strlen
        inc rax
        mov rbx, rdi
        mov rdi, rax
        call malloc wrt ..plt
        cmp rax, 0
        je error
        mov rdi, rax
        mov rsi, rbx
        call ft_strcpy
        ret

error :
        call __errno_location wrt ..plt
        mov rdi, 12
        mov [rax], rdi
        mov rax, 0
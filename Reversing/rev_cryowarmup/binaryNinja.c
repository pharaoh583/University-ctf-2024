void _init()
{
    if (__gmon_start__)
        __gmon_start__();
}

int64_t sub_1020()
{
    int64_t var_8 = data_3ff0;
    /* jump -> data_3ff8 */
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int64_t sub_1036()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_1020();
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_1046()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_1020();
}

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

int64_t sub_1056()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_1020();
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int64_t sub_1066()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_1020();
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int64_t sub_1076()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_1020();
}

int32_t strcmp(char const* arg1, char const* arg2)
{
    /* tailcall */
    return strcmp(arg1, arg2);
}

int64_t sub_1086()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_1020();
}

int32_t __isoc99_scanf(char const* format, ...)
{
    /* tailcall */
    return __isoc99_scanf();
}

int64_t sub_1096()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_1020();
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void sub_1100()
{
    return;
}

void _FINI_0()
{
    if (__TMC_END__)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    __TMC_END__ = 1;
}

void _INIT_0()
{
    /* tailcall */
    return sub_1100();
}

uint64_t generate_key(char* arg1)
{
    int32_t var_1c = 0;
    uint64_t result;
    
    while (true)
    {
        result = strlen(arg1);
        
        if (var_1c >= result)
            break;
        
        arg1[var_1c] = (arg1[var_1c] ^ 0x2a) + 5;
        var_1c += 1;
    }
    
    return result;
}

uint64_t validate_password(char* arg1)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    int64_t var_51 = 0x625f491e53532047;
    char var_49 = 0;
    void var_48;
    strcpy(&var_48, arg1);
    generate_key(&var_48);
    int32_t rax_1;
    rax_1 = !strcmp(&var_48, &var_51);
    *(fsbase + 0x28);
    
    if (rax == *(fsbase + 0x28))
        return rax_1;
    
    __stack_chk_fail();
    /* no return */
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    printf("Enter the password: ");
    void var_48;
    __isoc99_scanf("%49s", &var_48);
    
    if (!validate_password(&var_48))
        puts("Access denied!");
    else
        puts("Access granted!");
    
    *(fsbase + 0x28);
    
    if (rax == *(fsbase + 0x28))
        return 0;
    
    __stack_chk_fail();
    /* no return */
}

int64_t _fini() __pure
{
    return;
}

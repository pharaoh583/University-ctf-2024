extern struct_0 *g_403fd0;

long long _init()
{
    struct struct_0 **v1;  // rax

    v1 = g_403fd0;
    if (g_403fd0)
        v1 = g_403fd0();
    return v1;
}

extern unsigned long long g_403ff0;

long long sub_401020()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = g_403ff0;
    goto *((long long *)4210680);
}

long long _start()
{
    unsigned long long v0;  // [sp+0x0]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rdx

    v0 = v2;
    __libc_start_main(main, v0, &v1, 0, 0, v3); /* do not return */
}

long long sub_4010c5()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198597()
}

long long sub_4010c6()
{
    return (unsigned long long)sub_4010d0();
}

extern char __TMC_END__;
extern unsigned long long g_403fc8;

void sub_4010d0()
{
    return;
}

extern unsigned long long g_403fd8;

long long sub_4010f9()
{
    return 0;
}

extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern struct_0 *g_403fe0;

long long sub_401140()
{
    unsigned long long v0;  // [sp-0x8]
    char v1;  // [bp+0x0]
    unsigned long v3;  // rax

    if (__TMC_END__)
        return v3;
    v0 = &v1;
    if (!g_403fe0)
    {
        __TMC_END__ = 1;
        return (unsigned long long)sub_4010d0();
    }
    g_403fe0(__dso_handle);
}

long long sub_401190()
{
}

void generate_key(char *a0)
{
    unsigned int v0;  // [sp-0x1c]
    unsigned long long v1;  // [sp-0x10]
    unsigned long v3;  // rbx

    v1 = v3;
    for (v0 = 0; v0 < strlen(a0); v0 += 1)
    {
        a0[v0] = (a0[v0] ^ 42) + 5;
    }
    return;
}

int validate_password(char *a0)
{
    unsigned long long v0;  // [sp-0x51]
    char v1;  // [sp-0x49]
    char v2;  // [bp-0x48]

    v0 = 7088464733100253255;
    v1 = 0;
    strcpy(&v2, a0);
    generate_key(&v2);
    return !strcmp(&v2, &v0);
}

int main()
{
    char v0;  // [bp-0x48]

    printf("Enter the password: ");
    __isoc99_scanf("%49s", &v0);
    if (!validate_password(&v0))
    {
        puts("Access denied!");
        return 0;
    }
    puts("Access granted!");
    return 0;
}

long long _fini()
{
    unsigned long v1;  // rax

    return v1;
}

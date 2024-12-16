#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x001010e3)
// WARNING: Removing unreachable block (ram,0x001010ef)

void FUN_001010d0(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101124)
// WARNING: Removing unreachable block (ram,0x00101130)

void FUN_00101100(void)

{
  return;
}



void _FINI_0(void)

{
  if (__TMC_END__ != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  FUN_001010d0();
  __TMC_END__ = 1;
  return;
}



void _INIT_0(void)

{
  FUN_00101100();
  return;
}



void generate_key(char *param_1)

{
  size_t sVar1;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    sVar1 = strlen(param_1);
    if (sVar1 <= (ulong)(long)local_1c) break;
    param_1[local_1c] = (param_1[local_1c] ^ 0x2aU) + 5;
    local_1c = local_1c + 1;
  }
  return;
}



bool validate_password(char *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  char local_51 [65];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_51,"G SS\x1eI_b",9);
  strcpy(local_51 + 9,param_1);
  generate_key(local_51 + 9);
  iVar1 = strcmp(local_51 + 9,local_51);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1 == 0;
}



undefined8 main(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter the password: ");
  __isoc99_scanf(&DAT_00102019,local_48);
  iVar1 = validate_password(local_48);
  if (iVar1 == 0) {
    puts("Access denied!");
  }
  else {
    puts("Access granted!");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



void _fini(void)

{
  return;
}
#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_402058()
{
  int v0; // er8
  int v1; // er9
  int v2; // ecx
  int v3; // er8
  int v4; // er9
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  char v10; // [rsp+0h] [rbp-E0h]
  int v11; // [rsp+4h] [rbp-DCh]
  void *ptr; // [rsp+8h] [rbp-D8h] BYREF
  __int64 *v13; // [rsp+10h] [rbp-D0h]
  char *v14; // [rsp+18h] [rbp-C8h]
  __int64 v15[4]; // [rsp+20h] [rbp-C0h] BYREF
  struct stat string; // [rsp+40h] [rbp-A0h] BYREF

  v14 = getenv("LD_PRELOAD");
  v15[0] = (__int64)::ptr;
  v15[1] = (__int64)"/root/Product/coreutils/exe/libexec/coreutils";
  v15[2] = 0LL;
  v13 = v15;
  while ( *(_BYTE *)*v13 )
  {
    if ( (int)sub_4068F5((unsigned int)&ptr, (unsigned int)"%s/%s", *v13, (unsigned int)"libstdbuf.so", v0, v1, v10) < 0 )
      sub_40628E();
    if ( !(unsigned int)sub_40EFC0((char *)ptr, &string) )
      goto LABEL_10;
    free(ptr);
    if ( !*++v13 )
    {
      v5 = sub_403A19("libstdbuf.so");
      v6 = gettext("failed to find %s");
      error(125, 0, v6, v5);
    }
  }
  ptr = (void *)sub_406261("libstdbuf.so");
LABEL_10:
  if ( v14 )
    v11 = sub_4068F5((unsigned int)&string, (unsigned int)"LD_PRELOAD=%s:%s", (_DWORD)v14, (_DWORD)ptr, v3, v4, v10);
  else
    v11 = sub_4068F5((unsigned int)&string, (unsigned int)"LD_PRELOAD=%s", (_DWORD)ptr, v2, v3, v4, v10);
  if ( v11 < 0 )
    sub_40628E();
  free(ptr);
  if ( putenv((char *)string.st_dev) )
  {
    v7 = sub_403A19(string.st_dev);
    v8 = gettext("failed to update the environment with %s");
    v9 = __errno_location();
    error(125, *v9, v8, v7);
  }
}

#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403CC7(char *a1)
{
  int v1; // er8
  int v2; // er9
  char *v3; // rax
  _QWORD v4[17]; // [rsp+0h] [rbp-140h] BYREF
  char *name; // [rsp+88h] [rbp-B8h] BYREF
  int errnum; // [rsp+90h] [rbp-B0h]
  int v7; // [rsp+94h] [rbp-ACh]
  void **i; // [rsp+98h] [rbp-A8h]
  void *ptr; // [rsp+A0h] [rbp-A0h]
  void *v10; // [rsp+A8h] [rbp-98h]
  int v11[34]; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v12; // [rsp+138h] [rbp-8h] BYREF

  name = a1;
  errnum = 0;
  for ( i = (void **)&qword_61DAA0; ; i = (void **)ptr )
  {
    ptr = *i;
    if ( (char *)ptr + 13 == name )
      break;
  }
  if ( *((_BYTE *)ptr + 12) == 1 )
    sub_403204(*((_DWORD *)ptr + 2));
  v10 = *(void **)ptr;
  sub_402F69(v11);
  v7 = unlink(name);
  errnum = *__errno_location();
  *i = v10;
  qmemcpy(v4, v11, sizeof(v4));
  sub_402FCB((int)&name, (int)&v12, (int)v4, 0, v1, v2, v4[0], *(sigset_t *)&v4[1]);
  if ( v7 )
  {
    v3 = gettext("warning: cannot remove: %s");
    error(0, errnum, v3, name);
  }
  if ( !v10 )
    off_61D4F0 = (__int64 *)i;
  free(ptr);
}

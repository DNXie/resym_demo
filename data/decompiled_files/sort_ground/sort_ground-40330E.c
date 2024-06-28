#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40330E(_DWORD *a1, char a2)
{
  int v2; // er8
  int v3; // er9
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  _QWORD v8[17]; // [rsp+0h] [rbp-170h] BYREF
  __int64 v9; // [rsp+88h] [rbp-E8h] BYREF
  char v10; // [rsp+94h] [rbp-DCh]
  _DWORD *v11; // [rsp+98h] [rbp-D8h]
  int v12; // [rsp+A8h] [rbp-C8h]
  int v13; // [rsp+ACh] [rbp-C4h]
  void *ptr; // [rsp+B0h] [rbp-C0h]
  char *s; // [rsp+B8h] [rbp-B8h]
  size_t n; // [rsp+C0h] [rbp-B0h]
  void *dest; // [rsp+C8h] [rbp-A8h]
  int v18[34]; // [rsp+D0h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+158h] [rbp-18h] BYREF

  v11 = a1;
  v10 = a2;
  s = *(char **)(8 * qword_61DB60 + qword_61D9E8);
  n = strlen(s);
  ptr = (void *)sub_414F92(n + 25);
  dest = (char *)ptr + 13;
  memcpy((char *)ptr + 13, s, n);
  strcpy((char *)ptr + n + 13, "/sortXXXXXX");
  *(_QWORD *)ptr = 0LL;
  if ( ++qword_61DB60 == qword_61D9F0 )
    qword_61DB60 = 0LL;
  sub_402F69(v18);
  v12 = sub_414564(dest);
  if ( v12 >= 0 )
  {
    *off_61D4F0 = (__int64)ptr;
    off_61D4F0 = (__int64 *)ptr;
  }
  v13 = *__errno_location();
  qmemcpy(v8, v18, sizeof(v8));
  sub_402FCB((int)&v9, (int)&v19, (int)v8, 0, v2, v3, v8[0], *(sigset_t *)&v8[1]);
  *__errno_location() = v13;
  if ( v12 < 0 )
  {
    if ( v10 != 1 || *__errno_location() != 24 )
    {
      v4 = sub_4112FB(s);
      v5 = gettext("cannot create temporary file in %s");
      v6 = __errno_location();
      error(2, *v6, v5, v4);
    }
    free(ptr);
    ptr = 0LL;
  }
  *v11 = v12;
  return ptr;
}

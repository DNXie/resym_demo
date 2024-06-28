#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402B6D(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-18h]

  v10 = sub_4029FE(1, (__int64)s, n, a4, a5, a6);
  qword_60E3B8 += v10;
  if ( v10 != n )
  {
    v6 = sub_40685B(qword_60E348);
    v7 = gettext("writing to %s");
    v8 = __errno_location();
    error(0, *v8, v7, v6);
    if ( v10 )
      ++qword_60E398;
    sub_402677(1);
  }
  result = ++qword_60E3A0;
  qword_60E3F0 = 0LL;
  return result;
}

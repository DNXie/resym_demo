#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40204B(FILE *a1, __int64 *a2, int a3)
{
  char *v3; // rbx
  int *v4; // rax
  __int64 result; // rax
  _QWORD *v7; // [rsp+20h] [rbp-20h]

  v7 = (_QWORD *)*a2;
  if ( qword_60A2C0[a3 - 1] == *a2 )
  {
    v7 = *(&ptr + a3 - 1);
    *(&ptr + a3 - 1) = (void *)*a2;
    *a2 = (__int64)v7;
  }
  if ( v7 )
    sub_402005((__int64)v7);
  else
    v7 = (_QWORD *)sub_40201B(a2);
  if ( sub_403E80(v7, a1) )
  {
    ++qword_60A2D0[a3 - 1];
    sub_401AA7(v7);
    if ( qword_60A2C0[a3 - 1] )
      sub_401EA1(qword_60A2C0[a3 - 1], (__int64)v7, a3);
    qword_60A2C0[a3 - 1] = (__int64)v7;
    result = 1LL;
  }
  else
  {
    if ( ferror_unlocked(a1) )
    {
      v3 = gettext("read error");
      v4 = __errno_location();
      error(1, *v4, v3);
    }
    sub_401CB6((__int64)v7);
    result = 0LL;
  }
  return result;
}

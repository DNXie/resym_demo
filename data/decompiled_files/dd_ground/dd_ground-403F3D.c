#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403F3D(char *a1, size_t a2)
{
  size_t v2; // rax
  __int64 v3; // rsi
  char *v4; // rdi
  int v5; // ecx
  int v6; // er8
  int v7; // er9
  __int64 result; // rax
  size_t n; // [rsp+18h] [rbp-8h]

  do
  {
    v2 = a2;
    if ( ::n - qword_60E3F0 <= a2 )
      v2 = ::n - qword_60E3F0;
    n = v2;
    v3 = (__int64)a1;
    v4 = (char *)s + qword_60E3F0;
    memcpy((char *)s + qword_60E3F0, a1, v2);
    a2 -= n;
    a1 += n;
    qword_60E3F0 += n;
    result = ::n;
    if ( qword_60E3F0 >= ::n )
      result = sub_402B6D((__int64)v4, v3, qword_60E3F0, v5, v6, v7);
  }
  while ( a2 );
  return result;
}

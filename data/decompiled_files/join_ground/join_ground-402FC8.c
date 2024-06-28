#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_402FC8(char *a1)
{
  char *v1; // rax
  _QWORD *result; // rax
  int v3; // [rsp+14h] [rbp-1Ch] BYREF
  __int64 v4; // [rsp+18h] [rbp-18h] BYREF
  char *s; // [rsp+20h] [rbp-10h]
  char *v6; // [rsp+28h] [rbp-8h]

  s = a1;
  do
  {
    v6 = s;
    s = strpbrk(s, ", \t");
    if ( s )
    {
      v1 = s++;
      *v1 = 0;
    }
    sub_402E87(v6, &v3, &v4);
    result = sub_402D40(v3, v4);
  }
  while ( s );
  return result;
}

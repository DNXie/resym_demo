#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4019C6(__int64 a1, ...)
{
  __int64 result; // rax
  int v2; // [rsp+1Ch] [rbp-D4h]
  char *s; // [rsp+20h] [rbp-D0h] BYREF
  gcc_va_list va; // [rsp+28h] [rbp-C8h] BYREF

  va_start(va, a1);
  v2 = sub_4078F5(&s, a1, va);
  if ( v2 < 0 )
    sub_406C01();
  if ( dword_6132C8 > 0 )
  {
    if ( dword_6132C4 - dword_6132C8 >= v2 )
    {
      putchar_unlocked(32);
      ++dword_6132C8;
    }
    else
    {
      putchar_unlocked(10);
      dword_6132C8 = 0;
    }
  }
  fputs_unlocked(s, stdout);
  free(s);
  result = (unsigned int)(dword_6132C8 + v2);
  dword_6132C8 += v2;
  return result;
}

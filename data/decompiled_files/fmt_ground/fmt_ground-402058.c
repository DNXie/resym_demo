#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402058(FILE *a1, unsigned int a2)
{
  char *v2; // rax
  unsigned int c; // [rsp+4h] [rbp-1Ch]
  char *i; // [rsp+18h] [rbp-8h]

  c = a2;
  dword_608288 = 0;
  if ( dword_608284 > dword_61329C || a2 != 10 && a2 != -1 )
  {
    sub_402CB4((unsigned int)dword_61329C);
    for ( i = qword_608268; dword_608288 != dword_608284 && *i; ++i )
    {
      v2 = i;
      putchar_unlocked(*v2);
      ++dword_608288;
    }
    if ( a2 != -1 && a2 != 10 )
      sub_402CB4((unsigned int)(dword_608284 - dword_608288));
    if ( a2 == -1 && dword_60827C + dword_61329C <= dword_608284 )
      putchar_unlocked(10);
  }
  while ( c != 10 && c != -1 )
  {
    putchar_unlocked(c);
    c = getc_unlocked(a1);
  }
  return c;
}

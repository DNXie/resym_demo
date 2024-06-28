#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402448(FILE *a1)
{
  int result; // eax
  bool *v2; // rax
  char v3; // [rsp+1Ah] [rbp-16h] BYREF
  char v4; // [rsp+1Bh] [rbp-15h]
  int c; // [rsp+1Ch] [rbp-14h]
  unsigned __int64 v6; // [rsp+20h] [rbp-10h]
  bool *v7; // [rsp+28h] [rbp-8h]

  v6 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      result = getc_unlocked(a1);
      c = result;
      if ( result != 10 )
        break;
      putchar_unlocked(10);
      v6 = 0LL;
      v4 = 0;
    }
    if ( c == -1 )
      break;
    if ( byte_60B2CF )
      v2 = (bool *)&v3;
    else
      v2 = 0LL;
    v7 = v2;
    if ( sub_401BCF(++v6, v2) )
    {
      if ( v7 && *v7 && v4 )
        fwrite_unlocked(ptr, 1uLL, n, stdout);
      v4 = 1;
      putchar_unlocked(c);
    }
  }
  if ( v6 )
    result = putchar_unlocked(10);
  return result;
}

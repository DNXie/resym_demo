#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 __fastcall sub_401C5E(char *a1)
{
  signed __int64 result; // rax
  char *i; // [rsp+18h] [rbp-8h]

  dword_608278 = 0;
  while ( *a1 == 32 )
  {
    ++dword_608278;
    ++a1;
  }
  qword_608268 = a1;
  dword_608274 = strlen(a1);
  for ( i = &a1[dword_608274]; i > a1 && *(i - 1) == 32; --i )
    ;
  *i = 0;
  result = i - a1;
  dword_60827C = (_DWORD)i - (_DWORD)a1;
  return result;
}

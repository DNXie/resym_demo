#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4023AA(FILE *a1)
{
  unsigned int v1; // eax
  int v2; // eax
  unsigned int v4; // [rsp+14h] [rbp-Ch]
  char *i; // [rsp+18h] [rbp-8h]

  dword_608284 = 0;
  v1 = getc_unlocked(a1);
  v4 = sub_40247A(a1, v1);
  if ( dword_60827C )
  {
    dword_61329C = dword_608284;
    for ( i = qword_608268; *i; ++i )
    {
      if ( (unsigned __int8)*i != v4 )
        return v4;
      ++dword_608284;
      v4 = getc_unlocked(a1);
    }
    v4 = sub_40247A(a1, v4);
  }
  else
  {
    v2 = dword_608278;
    if ( dword_608284 <= dword_608278 )
      v2 = dword_608284;
    dword_61329C = v2;
  }
  return v4;
}

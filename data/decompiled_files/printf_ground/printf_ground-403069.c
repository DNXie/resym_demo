#include "/share/binary_recovery/clang-parser/defs.hh"
long double __fastcall sub_403069(const char *a1, char **a2)
{
  __int64 v2; // rax
  int v3; // edx
  long double v5; // [rsp+0h] [rbp-40h]
  struct __locale_struct *loc; // [rsp+28h] [rbp-18h]
  long double v7; // [rsp+30h] [rbp-10h]

  loc = (struct __locale_struct *)sub_403035();
  if ( loc )
  {
    v7 = strtold_l(a1, a2, loc);
    v2 = *(_QWORD *)&v7;
    v3 = DWORD2(v7);
  }
  else
  {
    if ( a2 )
      *a2 = (char *)a1;
    v2 = 0LL;
    v3 = 0;
  }
  *(_QWORD *)&v5 = v2;
  DWORD2(v5) = v3;
  return v5;
}

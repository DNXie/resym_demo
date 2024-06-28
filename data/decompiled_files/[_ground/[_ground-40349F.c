#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40349F(int a1)
{
  bool v2; // [rsp+1Fh] [rbp-1h]

  if ( a1 == 2 )
    return sub_4031A6();
  if ( a1 > 2 )
  {
    if ( a1 == 3 )
      return (bool)sub_4032E5();
    if ( a1 == 4 )
    {
      if ( !strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "!") )
      {
        sub_4016DE(1);
        return (unsigned __int8)sub_4032E5() == 0;
      }
      if ( !strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "(")
        && !strcmp(*(const char **)(8 * (dword_609230 + 3LL) + qword_609238), ")") )
      {
        sub_4016DE(0);
        v2 = sub_4031A6();
        sub_4016DE(0);
        return v2;
      }
    }
  }
  else if ( a1 == 1 )
  {
    return sub_403176();
  }
  if ( a1 <= 0 )
    abort();
  return (bool)sub_4030C9();
}

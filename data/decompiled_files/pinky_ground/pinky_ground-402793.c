#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402793(__int64 a1, const char *a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int i; // [rsp+2Ch] [rbp-4h]

  if ( (unsigned __int8)sub_402F81(2LL) )
  {
    qword_6082E0 = "%Y-%m-%d %H:%M";
    dword_6082E8 = 16;
  }
  else
  {
    qword_6082E0 = "%b %e %H:%M";
    dword_6082E8 = 12;
  }
  if ( byte_608241 )
    sub_4026B2();
  while ( 1 )
  {
    result = a1--;
    if ( !result )
      return result;
    if ( a2[44] && *(_WORD *)a2 == 7 )
    {
      if ( a3 )
      {
        for ( i = 0; i < a3; ++i )
        {
          if ( !strncmp(a2 + 44, *(const char **)(8LL * i + a4), 0x20uLL) )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        sub_401E60(a2);
      }
    }
    a2 += 384;
  }
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40363D()
{
  __int64 result; // rax
  int i; // [rsp+Ch] [rbp-4h]
  int j; // [rsp+Ch] [rbp-4h]

  if ( (dword_60E380 & 1) != 0 )
    sub_402042((__int64)&unk_40A0C0);
  if ( (dword_60E380 & 0x40) != 0 )
  {
    for ( i = 0; i <= 255; ++i )
      byte_60E4A0[i] = toupper((unsigned __int8)byte_60E4A0[i]);
    byte_60E390 = 1;
  }
  else if ( (dword_60E380 & 0x20) != 0 )
  {
    for ( j = 0; j <= 255; ++j )
      byte_60E4A0[j] = tolower((unsigned __int8)byte_60E4A0[j]);
    byte_60E390 = 1;
  }
  if ( (dword_60E380 & 2) != 0 )
  {
    sub_402042((__int64)&unk_409EC0);
    byte_60E278 = 37;
    result = 64LL;
    byte_60E279 = 64;
  }
  else
  {
    result = dword_60E380 & 4;
    if ( (dword_60E380 & 4) != 0 )
    {
      sub_402042((__int64)&unk_409FC0);
      byte_60E278 = 37;
      result = 64LL;
      byte_60E279 = 64;
    }
  }
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_403593()
{
  int i; // [rsp+8h] [rbp-38h]
  unsigned int v2; // [rsp+Ch] [rbp-34h]
  int v3; // [rsp+10h] [rbp-30h]
  int j; // [rsp+14h] [rbp-2Ch]
  int l; // [rsp+14h] [rbp-2Ch]
  unsigned __int8 *k; // [rsp+18h] [rbp-28h]
  char s[24]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-8h]

  v8 = __readfsqword(0x28u);
  if ( byte_610380 )
  {
    dword_6108C4 = 0;
    for ( i = 0; i < dword_610908; ++i )
    {
      v2 = *(_DWORD *)(4LL * i + qword_610918) + 1;
      if ( i > 0 )
        v2 -= *(_DWORD *)(4LL * i - 4 + qword_610918);
      sprintf(s, "%d", v2);
      v3 = strlen(s);
      if ( *(_QWORD *)(8LL * i + qword_610910) )
        v3 += strlen(*(const char **)(8LL * i + qword_610910));
      if ( v3 > dword_6108C4 )
        dword_6108C4 = v3;
    }
    qword_610AF0 = (char *)sub_4095E8(++dword_6108C4 + 1LL);
  }
  if ( (byte_610380 || byte_610381) && byte_610382 != 1 )
    dword_6102B4 -= dword_6108C4 + dword_6102B8;
  dword_610A60 = dword_6102B4 / 2;
  dword_610A64 = dword_6102B4 / 2 - dword_6102B8;
  dword_610A68 = dword_6102B4 / 2;
  if ( ::s && *::s )
    dword_610A6C = strlen(::s);
  else
    ::s = 0LL;
  if ( byte_6102B0 )
  {
    dword_610A64 += -2 * dword_610A6C;
    if ( dword_610A64 < 0 )
      dword_610A64 = 0;
    dword_610A68 += -2 * dword_610A6C;
  }
  else
  {
    dword_610A68 += ~(2 * dword_610A6C);
  }
  for ( j = 0; j <= 255; ++j )
    byte_610960[j] = ((*__ctype_b_loc())[j] & 0x2000) != 0;
  byte_61096C = 1;
  if ( dword_610384 == 2 )
  {
    byte_610982 = 1;
  }
  else if ( (unsigned int)dword_610384 >= 2 && dword_610384 == 3 )
  {
    for ( k = "$%&#_{}\\"; *k; ++k )
      byte_610960[(unsigned __int8)sub_401E2D(*k)] = 1;
    for ( l = 128; l <= 255; ++l )
      byte_610960[l] = byte_40D8C0[(unsigned __int8)l] != 0;
  }
  return __readfsqword(0x28u) ^ v8;
}

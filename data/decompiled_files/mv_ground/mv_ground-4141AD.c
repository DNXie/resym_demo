#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4141AD(unsigned int a1, _BYTE *a2, int a3, const char *a4)
{
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-28h]
  int v9; // [rsp+2Ch] [rbp-24h]
  unsigned int v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+34h] [rbp-1Ch]
  _BYTE *ptr; // [rsp+38h] [rbp-18h]
  _BYTE *v13; // [rsp+40h] [rbp-10h]
  _BYTE *v14; // [rsp+48h] [rbp-8h]

  ptr = a2;
  v8 = 20;
  while ( v8-- )
  {
    v13 = (_BYTE *)sub_414567(a1, ptr);
    if ( !v13 )
      break;
    if ( *v13 == 47 )
    {
      if ( ptr != a2 )
        free(ptr);
      ptr = v13;
    }
    else
    {
      v14 = sub_40AD32(ptr);
      if ( ptr != a2 )
        free(ptr);
      if ( !v14 )
      {
        free(v13);
        *__errno_location() = 12;
        return 0xFFFFFFFFLL;
      }
      ptr = sub_40B4F8(v14, v13, 0LL);
      free(v14);
      free(v13);
      if ( !ptr )
      {
        *__errno_location() = 12;
        return 0xFFFFFFFFLL;
      }
    }
  }
  if ( v8 < 0 )
  {
    v13 = 0LL;
    *__errno_location() = 40;
  }
  if ( v13 || *__errno_location() == 22 )
  {
    v10 = linkat(a1, ptr, a3, a4, 0);
    if ( ptr != a2 )
    {
      v11 = *__errno_location();
      free(ptr);
      *__errno_location() = v11;
    }
    result = v10;
  }
  else
  {
    if ( ptr != a2 )
    {
      v9 = *__errno_location();
      free(ptr);
      *__errno_location() = v9;
    }
    result = 0xFFFFFFFFLL;
  }
  return result;
}

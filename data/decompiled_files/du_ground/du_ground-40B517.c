#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B517(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  wint_t v3; // ebx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // [rsp+1Ah] [rbp-B6h]
  unsigned __int8 *v11; // [rsp+20h] [rbp-B0h]
  unsigned __int8 *v12; // [rsp+28h] [rbp-A8h]
  char v13[4]; // [rsp+30h] [rbp-A0h] BYREF
  int v14; // [rsp+34h] [rbp-9Ch] BYREF
  char v15; // [rsp+3Ch] [rbp-94h]
  void *s1; // [rsp+40h] [rbp-90h]
  size_t n; // [rsp+48h] [rbp-88h]
  char v18; // [rsp+50h] [rbp-80h]
  wint_t wc; // [rsp+54h] [rbp-7Ch]
  char v20[4]; // [rsp+70h] [rbp-60h] BYREF
  int v21; // [rsp+74h] [rbp-5Ch] BYREF
  char i; // [rsp+7Ch] [rbp-54h]
  void *s2; // [rsp+80h] [rbp-50h]
  size_t v24; // [rsp+88h] [rbp-48h]
  char v25; // [rsp+90h] [rbp-40h]
  wint_t v26; // [rsp+94h] [rbp-3Ch]
  unsigned __int64 v27; // [rsp+B8h] [rbp-18h]

  v27 = __readfsqword(0x28u);
  if ( a1 == a2 )
    return 0LL;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v11 = a1;
    v12 = a2;
    do
    {
      if ( ((*__ctype_b_loc())[*v11] & 0x100) != 0 )
        v8 = tolower(*v11);
      else
        v8 = *v11;
      v10 = v8;
      if ( ((*__ctype_b_loc())[*v12] & 0x100) != 0 )
        v9 = tolower(*v12);
      else
        v9 = *v12;
      if ( !v10 )
        break;
      ++v11;
      ++v12;
    }
    while ( v10 == v9 );
    result = v10 - (unsigned int)v9;
  }
  else
  {
    s1 = a1;
    v13[0] = 0;
    memset(&v14, 0, 8uLL);
    v15 = 0;
    s2 = a2;
    v20[0] = 0;
    memset(&v21, 0, 8uLL);
    for ( i = 0; ; i = 0 )
    {
      sub_40B337((__int64)v13);
      if ( v18 == 1 && !wc )
        break;
      sub_40B337((__int64)v20);
      if ( v25 == 1 && !v26 )
        break;
      if ( v18 )
      {
        if ( v25 )
        {
          v3 = towlower(wc);
          LODWORD(result) = v3 - towlower(v26);
        }
        else
        {
          LODWORD(result) = -1;
        }
      }
      else if ( v25 )
      {
        LODWORD(result) = 1;
      }
      else if ( n == v24 )
      {
        LODWORD(result) = memcmp(s1, s2, n);
      }
      else if ( n >= v24 )
      {
        if ( memcmp(s1, s2, v24) < 0 )
          LODWORD(result) = -1;
        else
          LODWORD(result) = 1;
      }
      else if ( memcmp(s1, s2, n) <= 0 )
      {
        LODWORD(result) = -1;
      }
      else
      {
        LODWORD(result) = 1;
      }
      if ( (_DWORD)result )
        return (unsigned int)result;
      s1 = (char *)s1 + n;
      v15 = 0;
      s2 = (char *)s2 + v24;
    }
    sub_40B337((__int64)v13);
    if ( v18 != 1 || wc )
    {
      result = 1LL;
    }
    else
    {
      sub_40B337((__int64)v20);
      if ( v25 != 1 || v26 )
        result = 0xFFFFFFFFLL;
      else
        result = 0LL;
    }
  }
  return result;
}

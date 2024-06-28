#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40629E(char *a1, __int64 a2, char a3)
{
  int v3; // eax
  char *v5; // rax
  unsigned __int8 v7; // [rsp+2Bh] [rbp-45h]
  wchar_t pwc; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+34h] [rbp-3Ch]
  char *v11; // [rsp+38h] [rbp-38h]
  size_t v12; // [rsp+40h] [rbp-30h]
  char *v13; // [rsp+48h] [rbp-28h]
  mbstate_t s[4]; // [rsp+50h] [rbp-20h] BYREF

  s[1] = (mbstate_t)__readfsqword(0x28u);
  v11 = a1;
  v13 = &a1[a2];
  v9 = 0;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( v11 >= v13 )
            return v9;
          v5 = v11++;
          v7 = *v5;
          if ( ((*__ctype_b_loc())[v7] & 0x4000) == 0 )
            break;
          if ( v9 == 0x7FFFFFFF )
            return 0x7FFFFFFFLL;
          ++v9;
        }
        if ( (a3 & 2) != 0 )
          return 0xFFFFFFFFLL;
      }
      while ( ((*__ctype_b_loc())[v7] & 2) != 0 );
      if ( v9 == 0x7FFFFFFF )
        return 0x7FFFFFFFLL;
      ++v9;
    }
  }
  while ( 1 )
  {
LABEL_31:
    if ( v11 >= v13 )
      return v9;
    v3 = *v11;
    if ( v3 > 63 )
      break;
    if ( v3 < 37 && (unsigned int)(v3 - 32) > 3 )
      goto LABEL_11;
LABEL_10:
    ++v11;
    ++v9;
  }
  if ( v3 >= 65 && (v3 <= 95 || (unsigned int)(v3 - 97) <= 0x1D) )
    goto LABEL_10;
LABEL_11:
  memset(s, 0, 8uLL);
  while ( 1 )
  {
    v12 = mbrtowc(&pwc, v11, v13 - v11, s);
    if ( v12 == -1LL )
    {
      if ( (a3 & 1) == 0 )
      {
        ++v11;
        ++v9;
        goto LABEL_31;
      }
      return 0xFFFFFFFFLL;
    }
    if ( v12 == -2LL )
      break;
    if ( !v12 )
      v12 = 1LL;
    v10 = wcwidth(pwc);
    if ( v10 < 0 )
    {
      if ( (a3 & 2) != 0 )
        return 0xFFFFFFFFLL;
      if ( !iswcntrl(pwc) )
      {
        if ( v9 == 0x7FFFFFFF )
          return 0x7FFFFFFFLL;
        ++v9;
      }
    }
    else
    {
      if ( (int)(0x7FFFFFFF - v9) < v10 )
        return 0x7FFFFFFFLL;
      v9 += v10;
    }
    v11 += v12;
    if ( mbsinit(s) )
      goto LABEL_31;
  }
  if ( (a3 & 1) == 0 )
  {
    v11 = v13;
    ++v9;
    goto LABEL_31;
  }
  return 0xFFFFFFFFLL;
}

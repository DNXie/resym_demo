#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_4092DE(FILE *a1, __int64 a2, __int64 a3, size_t *a4)
{
  void *v4; // rsp
  int v5; // eax
  char *v6; // rax
  char *v7; // rdx
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rdx
  char *v12; // rax
  const unsigned __int16 *v13; // rbx
  const unsigned __int16 *v14; // rbx
  __int64 v17; // [rsp+8h] [rbp-20A8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-20A0h]
  FILE *stream; // [rsp+18h] [rbp-2098h]
  wchar_t pwc; // [rsp+20h] [rbp-2090h] BYREF
  int v21; // [rsp+24h] [rbp-208Ch]
  size_t n; // [rsp+28h] [rbp-2088h]
  void *ptr; // [rsp+30h] [rbp-2080h]
  size_t v24; // [rsp+38h] [rbp-2078h]
  char *s; // [rsp+40h] [rbp-2070h]
  char *v26; // [rsp+48h] [rbp-2068h]
  size_t v27; // [rsp+50h] [rbp-2060h]
  unsigned __int8 *v28; // [rsp+58h] [rbp-2058h]
  unsigned __int8 *v29; // [rsp+60h] [rbp-2050h]
  char *v30; // [rsp+68h] [rbp-2048h]
  unsigned __int64 v31; // [rsp+70h] [rbp-2040h]
  unsigned __int64 v32; // [rsp+78h] [rbp-2038h]
  mbstate_t p; // [rsp+80h] [rbp-2030h] BYREF
  char v34[8200]; // [rsp+90h] [rbp-2020h] BYREF
  unsigned __int64 v35; // [rsp+2098h] [rbp-18h]

  stream = a1;
  v18 = a2;
  v17 = a3;
  v35 = __readfsqword(0x28u);
  n = sub_410C65(v34, 0x2000LL, a2, -1LL, a3);
  if ( n > 0x1FFF )
  {
    v4 = alloca(16 * ((n + 31) / 0x10));
    ptr = (void *)(16 * (((unsigned __int64)&v17 + 7) >> 4));
    sub_410C65(ptr, n + 1, v18, -1LL, v17);
  }
  else
  {
    ptr = v34;
  }
  if ( byte_61D6F8 )
  {
    if ( __ctype_get_mb_cur_max() > 1 )
    {
      s = (char *)ptr;
      v30 = (char *)ptr + n;
      v26 = (char *)ptr;
      v24 = 0LL;
      while ( 1 )
      {
LABEL_29:
        if ( s >= v30 )
        {
          n = v26 - (_BYTE *)ptr;
          goto LABEL_45;
        }
        v5 = *s;
        if ( v5 > 63 )
        {
          if ( v5 < 65 || v5 > 95 && (unsigned int)(v5 - 97) > 0x1D )
            goto LABEL_15;
LABEL_14:
          v6 = v26++;
          v7 = s++;
          *v6 = *v7;
          ++v24;
        }
        else
        {
          if ( v5 >= 37 || (unsigned int)(v5 - 32) <= 3 )
            goto LABEL_14;
LABEL_15:
          p = 0LL;
          while ( 1 )
          {
            v27 = mbrtowc(&pwc, s, v30 - s, &p);
            if ( v27 == -1LL )
            {
              ++s;
              v8 = v26++;
              *v8 = 63;
              ++v24;
              goto LABEL_29;
            }
            if ( v27 == -2LL )
              break;
            if ( !v27 )
              v27 = 1LL;
            v21 = wcwidth(pwc);
            if ( v21 < 0 )
            {
              s += v27;
              v12 = v26++;
              *v12 = 63;
              ++v24;
            }
            else
            {
              while ( v27 )
              {
                v10 = v26++;
                v11 = s++;
                *v10 = *v11;
                --v27;
              }
              v24 += v21;
            }
            if ( mbsinit(&p) )
              goto LABEL_29;
          }
          s = v30;
          v9 = v26++;
          *v9 = 63;
          ++v24;
        }
      }
    }
    v28 = (unsigned __int8 *)ptr;
    v31 = (unsigned __int64)ptr + n;
    while ( (unsigned __int64)v28 < v31 )
    {
      v13 = *__ctype_b_loc();
      if ( (v13[(unsigned __int8)sub_4025DE(*v28)] & 0x4000) == 0 )
        *v28 = 63;
      ++v28;
    }
    v24 = n;
  }
  else if ( a4 )
  {
    if ( __ctype_get_mb_cur_max() <= 1 )
    {
      v29 = (unsigned __int8 *)ptr;
      v32 = (unsigned __int64)ptr + n;
      v24 = 0LL;
      while ( (unsigned __int64)v29 < v32 )
      {
        v14 = *__ctype_b_loc();
        if ( (v14[(unsigned __int8)sub_4025DE(*v29)] & 0x4000) != 0 )
          ++v24;
        ++v29;
      }
    }
    else
    {
      v24 = (int)sub_40F5CF(ptr, n, 0LL);
    }
  }
LABEL_45:
  if ( stream )
    fwrite_unlocked(ptr, 1uLL, n, stream);
  if ( a4 )
    *a4 = v24;
  return n;
}

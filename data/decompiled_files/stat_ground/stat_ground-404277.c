#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_404277(const char *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(void *, signed __int64, _QWORD, __int64, __int64), __int64 a4)
{
  int v4; // eax
  __int64 v5; // rbx
  char *v6; // rax
  const unsigned __int16 *v7; // rbx
  int v8; // eax
  const unsigned __int16 *v9; // rbx
  int v10; // eax
  char *v11; // rax
  bool v15; // [rsp+27h] [rbp-49h]
  int c; // [rsp+28h] [rbp-48h]
  int v17; // [rsp+2Ch] [rbp-44h]
  int v18; // [rsp+30h] [rbp-40h]
  unsigned int v19; // [rsp+34h] [rbp-3Ch]
  char *src; // [rsp+38h] [rbp-38h]
  char *srca; // [rsp+38h] [rbp-38h]
  char *v22; // [rsp+40h] [rbp-30h]
  char *v23; // [rsp+40h] [rbp-30h]
  size_t v24; // [rsp+48h] [rbp-28h]
  void *dest; // [rsp+50h] [rbp-20h]
  signed __int64 v26; // [rsp+58h] [rbp-18h]

  v15 = 0;
  v24 = strlen(a1) + 3;
  dest = (void *)sub_40AAA9(v24);
  for ( src = (char *)a1; *src; ++src )
  {
    v4 = *src;
    if ( v4 == 37 )
    {
      v22 = &src[strspn(src + 1, "'-+ #0I") + 1];
      v23 = &v22[strspn(v22, "0123456789")];
      if ( *v23 == 46 )
        v23 += strspn(v23 + 1, "0123456789") + 1;
      v26 = v23 - (src + 1);
      v19 = *v23;
      memcpy(dest, src, v23 - src);
      src = v23;
      if ( v19 )
      {
        if ( v19 != 37 )
        {
          v15 = (v15 | a3(dest, v26 + 1, v19, a2, a4)) != 0;
          continue;
        }
      }
      else
      {
        src = v23 - 1;
      }
      if ( v26 )
      {
        *((_BYTE *)dest + v26 + 1) = *v23;
        *((_BYTE *)dest + v26 + 2) = 0;
        v5 = sub_4073EC(dest);
        v6 = gettext("%s: invalid directive");
        error(1, 0, v6, v5);
      }
      putchar_unlocked(37);
    }
    else if ( v4 == 92 )
    {
      if ( byte_6163A1 != 1 )
      {
        putchar_unlocked(92);
      }
      else if ( *++src <= 47 || *src > 55 )
      {
        if ( *src == 120 && (v7 = *__ctype_b_loc(), (v7[(unsigned __int8)sub_40210B(src[1])] & 0x1000) != 0) )
        {
          if ( src[1] <= 96 || src[1] > 102 )
          {
            if ( src[1] <= 64 || src[1] > 70 )
              v8 = src[1] - 48;
            else
              v8 = src[1] - 55;
          }
          else
          {
            v8 = src[1] - 87;
          }
          v18 = v8;
          ++src;
          v9 = *__ctype_b_loc();
          if ( (v9[(unsigned __int8)sub_40210B(src[1])] & 0x1000) != 0 )
          {
            if ( *++src <= 96 || *src > 102 )
            {
              if ( *src <= 64 || *src > 70 )
                v10 = *src - 48;
              else
                v10 = *src - 55;
            }
            else
            {
              v10 = *src - 87;
            }
            v18 = 16 * v18 + v10;
          }
          putchar_unlocked(v18);
        }
        else if ( *src )
        {
          sub_4041A8(*src);
        }
        else
        {
          v11 = gettext("warning: backslash at end of format");
          error(0, 0, v11);
          putchar_unlocked(92);
          --src;
        }
      }
      else
      {
        c = *src - 48;
        v17 = 1;
        for ( srca = src + 1; v17 <= 2 && *srca > 47 && *srca <= 55; ++srca )
        {
          c = 8 * c + *srca - 48;
          ++v17;
        }
        putchar_unlocked(c);
        src = srca - 1;
      }
    }
    else
    {
      putchar_unlocked(*src);
    }
  }
  free(dest);
  fputs_unlocked(off_6162F0, stdout);
  return v15;
}

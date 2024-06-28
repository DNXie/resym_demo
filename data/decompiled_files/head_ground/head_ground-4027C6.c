#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4027C6(__int64 a1, unsigned int a2, __int64 a3, __off_t a4, __int64 a5)
{
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  __int64 result; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  const char *v13; // rbx
  int *v14; // rax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  __int64 v18; // r12
  char *v19; // rbx
  int *v20; // rax
  int v23; // [rsp+3Ch] [rbp-2064h]
  __int64 v24; // [rsp+40h] [rbp-2060h]
  __int64 v25; // [rsp+40h] [rbp-2060h]
  __off_t offset; // [rsp+48h] [rbp-2058h]
  size_t n; // [rsp+50h] [rbp-2050h]
  _BYTE *v28; // [rsp+58h] [rbp-2048h]
  char v29[32]; // [rsp+60h] [rbp-2040h] BYREF
  char s[8200]; // [rsp+80h] [rbp-2020h] BYREF
  unsigned __int64 v31; // [rsp+2088h] [rbp-18h]

  v31 = __readfsqword(0x28u);
  v24 = (a5 - a4) % 0x2000;
  if ( !v24 )
    v24 = 0x2000LL;
  offset = a5 - v24;
  if ( lseek(a2, a5 - v24, 0) >= 0 )
  {
    v25 = sub_405564(a2, s, v24);
    if ( v25 == -1 )
    {
      v9 = sub_403DCC(a1);
      v10 = gettext("error reading %s");
      v11 = __errno_location();
      error(0, *v11, v10, v9);
      result = 0LL;
    }
    else
    {
      if ( v25 && s[v25 - 1] != 10 )
        --a3;
LABEL_10:
      n = v25;
      do
      {
        if ( !n || (v28 = memrchr(s, 10, n)) == 0LL )
        {
          if ( offset == a4 )
            return 1LL;
          offset -= 0x2000LL;
          if ( lseek(a2, offset, 0) < 0 )
          {
            v15 = sub_403B0A(offset, v29);
            v16 = gettext("%s: cannot seek to offset %s");
            v17 = __errno_location();
            error(0, *v17, v16, a1, v15);
            return 0LL;
          }
          v25 = sub_405564(a2, s, 0x2000LL);
          if ( v25 == -1 )
          {
            v18 = sub_403DCC(a1);
            v19 = gettext("error reading %s");
            v20 = __errno_location();
            error(0, *v20, v19, v18);
            return 0LL;
          }
          if ( !v25 )
            return 1LL;
          goto LABEL_10;
        }
        n = v28 - s;
      }
      while ( a3-- );
      if ( a4 >= offset )
        goto LABEL_18;
      if ( lseek(a2, a4, 0) < 0 )
      {
        v13 = (const char *)sub_403DCC(a1);
        v14 = __errno_location();
        error(0, *v14, "%s: unable to restore file pointer to initial offset", v13);
        return 0LL;
      }
      v23 = sub_401930(a2, stdout, offset - a4);
      if ( v23 )
      {
        sub_401800(v23, a1);
        result = 0LL;
      }
      else
      {
LABEL_18:
        fwrite_unlocked(s, 1uLL, n + 1, stdout);
        result = 1LL;
      }
    }
  }
  else
  {
    v5 = sub_403B0A(offset, s);
    v6 = gettext("%s: cannot seek to offset %s");
    v7 = __errno_location();
    error(0, *v7, v6, a1, v5);
    result = 0LL;
  }
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403233(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  const char *v5; // rbx
  int *v6; // rax
  unsigned __int64 v7; // rax
  const char *v8; // rbx
  int *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  char *v13; // rax
  char *v14; // rbx
  int *v15; // rax
  unsigned __int64 v16; // rax
  char v20; // [rsp+35h] [rbp-6Bh]
  char v21; // [rsp+36h] [rbp-6Ah]
  char v22; // [rsp+37h] [rbp-69h]
  unsigned __int64 v23; // [rsp+38h] [rbp-68h]
  __int64 v24; // [rsp+40h] [rbp-60h]
  __int64 v25; // [rsp+48h] [rbp-58h]
  __int64 v26; // [rsp+50h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-48h]
  char *v28; // [rsp+60h] [rbp-40h]
  unsigned __int64 v29; // [rsp+68h] [rbp-38h]
  char *v30; // [rsp+78h] [rbp-28h]
  __int64 v31; // [rsp+88h] [rbp-18h]

  if ( !a2 || a1 > a2 || a5 < a2 )
    __assert_fail("n && k <= n && n <= file_size", "../../src/src/split.c", 0x25Au, "lines_chunk_split");
  v29 = a5 / a2;
  v23 = 1LL;
  v24 = a5 / a2 - 1;
  v25 = 0LL;
  v20 = 1;
  v21 = 0;
  if ( a1 > 1 )
  {
    if ( lseek(0, (a1 - 1) * v29 - 1, 1) < 0 )
    {
      v5 = s1;
      v6 = __errno_location();
      error(1, *v6, "%s", v5);
    }
    v25 = (a1 - 1) * v29 - 1;
    v23 = a1 - 1;
    v24 = v25;
  }
  while ( v25 < (__int64)a5 )
  {
    v26 = a3;
    v7 = sub_4053C5(0LL, a3, a4);
    if ( a5 - v25 <= v7 )
      v7 = a5 - v25;
    v27 = v7;
    if ( v7 < a4 && *__errno_location() )
    {
      v8 = s1;
      v9 = __errno_location();
      error(1, *v9, "%s", v8);
    }
    else if ( !v27 )
    {
      break;
    }
    v21 = 0;
    v30 = (char *)(a3 + v27);
LABEL_44:
    while ( (char *)v26 != v30 )
    {
      v22 = 0;
      v10 = v24 - v25;
      if ( v24 - v25 < 0 )
        v10 = 0LL;
      v11 = v10;
      v12 = v27;
      if ( v11 <= v27 )
        v12 = v11;
      v13 = (char *)memchr((const void *)(v12 + v26), 10, v27 - v12);
      v28 = v13 + 1;
      if ( v13 )
        v22 = 1;
      else
        v28 = v30;
      v31 = (__int64)&v28[-v26];
      if ( a1 == v23 )
      {
        if ( sub_405445(1LL, v26, v31) != v31 )
        {
          v14 = gettext("write error");
          v15 = __errno_location();
          error(1, *v15, "%s", v14);
        }
      }
      else if ( !a1 )
      {
        sub_402C91(v20, v26, v31);
      }
      v25 += v31;
      v26 = (__int64)v28;
      v27 -= v31;
      v20 = v22;
      while ( v22 || v25 - 1 >= v24 )
      {
        if ( v22 != 1 && v28 == v30 )
        {
          v21 = 1;
          goto LABEL_44;
        }
        ++v23;
        if ( a1 && v23 > a1 )
          return;
        if ( v23 == a2 )
          v24 = a5 - 1;
        else
          v24 += v29;
        if ( v25 - 1 < v24 )
        {
          v22 = 0;
        }
        else if ( !a1 )
        {
          sub_402C91(1, 0LL, 0LL);
        }
      }
    }
  }
  if ( v21 )
    ++v23;
  while ( !a1 )
  {
    v16 = v23++;
    if ( v16 > a2 )
      break;
    sub_402C91(1, 0LL, 0LL);
  }
}

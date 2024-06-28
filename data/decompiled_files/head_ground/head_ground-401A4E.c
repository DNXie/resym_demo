#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401A4E(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  char *v6; // rbx
  int *v7; // rax
  __int64 result; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  char *v12; // rbx
  int *v13; // rax
  unsigned __int8 v14; // [rsp+29h] [rbp-B7h]
  char v15; // [rsp+2Ah] [rbp-B6h]
  char v16; // [rsp+2Bh] [rbp-B5h]
  bool v17; // [rsp+2Ch] [rbp-B4h]
  unsigned __int8 v18; // [rsp+2Dh] [rbp-B3h]
  char v19; // [rsp+2Eh] [rbp-B2h]
  char v20; // [rsp+2Fh] [rbp-B1h]
  unsigned __int64 v21; // [rsp+30h] [rbp-B0h]
  unsigned __int64 n; // [rsp+38h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+40h] [rbp-A0h]
  unsigned __int64 i; // [rsp+40h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+48h] [rbp-98h]
  unsigned __int64 v27; // [rsp+58h] [rbp-88h]
  unsigned __int64 v28; // [rsp+60h] [rbp-80h]
  unsigned __int64 v29; // [rsp+68h] [rbp-78h]
  unsigned __int64 v30; // [rsp+78h] [rbp-68h]
  _QWORD *v31; // [rsp+80h] [rbp-60h]
  size_t v32; // [rsp+88h] [rbp-58h]
  void *ptr[8]; // [rsp+A0h] [rbp-40h]

  ptr[5] = (void *)__readfsqword(0x28u);
  if ( a3 > 0x100000 )
  {
    v18 = 1;
    v19 = 0;
    v29 = 0x2000 - (a3 & 0x1FFF);
    v30 = ((a3 + v29) >> 13) + 1;
    v31 = (_QWORD *)sub_40605A(v30, 8LL);
    v20 = 0;
    v23 = 0LL;
    v25 = 1LL;
    while ( v19 != 1 )
    {
      if ( !v31[v23] )
        v31[v23] = sub_405F6F(0x2000LL);
      n = sub_403A8A(a2, v31[v23], 0x2000LL);
      if ( n <= 0x1FFF )
      {
        if ( *__errno_location() )
        {
          v9 = sub_403DCC(a1);
          v10 = gettext("error reading %s");
          v11 = __errno_location();
          error(0, *v11, v10, v9);
          v18 = 0;
          goto LABEL_39;
        }
        v19 = 1;
      }
      if ( v23 + 1 == v30 )
        v20 = 1;
      if ( v20 && fwrite_unlocked((const void *)v31[v25], 1uLL, n, stdout) < n )
      {
        v12 = gettext("write error");
        v13 = __errno_location();
        error(0, *v13, v12);
        v18 = 0;
        goto LABEL_39;
      }
      v23 = v25;
      v25 = (v25 + 1) % v30;
    }
    if ( v29 )
    {
      if ( v20 )
      {
        v32 = 0x2000 - n;
        if ( v29 >= 0x2000 - n )
        {
          fwrite_unlocked((const void *)(v31[v23] + n), 1uLL, v32, stdout);
          fwrite_unlocked((const void *)v31[v25], 1uLL, v29 - v32, stdout);
        }
        else
        {
          fwrite_unlocked((const void *)(v31[v23] + n), 1uLL, v29, stdout);
        }
      }
      else if ( v23 + 1 == v30 )
      {
        fwrite_unlocked((const void *)v31[v25], 1uLL, n - (0x2000 - v29), stdout);
      }
    }
LABEL_39:
    for ( i = 0LL; i < v30; ++i )
      free((void *)v31[i]);
    free(v31);
    result = v18;
  }
  else
  {
    v14 = 1;
    v15 = 1;
    v16 = 0;
    v27 = a3 + 0x2000;
    ptr[0] = (void *)sub_405E26(2LL, a3 + 0x2000);
    ptr[1] = (char *)ptr[0] + a3 + 0x2000;
    v17 = 0;
    while ( v16 != 1 )
    {
      v28 = sub_403A8A(a2, ptr[v17], v27);
      v21 = 0LL;
      if ( v28 < v27 )
      {
        if ( *__errno_location() )
        {
          v3 = sub_403DCC(a1);
          v4 = gettext("error reading %s");
          v5 = __errno_location();
          error(0, *v5, v4, v3);
          v14 = 0;
          break;
        }
        if ( v28 <= a3 && !v15 )
          v21 = a3 - v28;
        v16 = 1;
      }
      if ( v15 != 1 )
        fwrite_unlocked((char *)ptr[!v17] + 0x2000, 1uLL, a3 - v21, stdout);
      v15 = 0;
      if ( a3 < v28 && fwrite_unlocked(ptr[v17], 1uLL, v28 - a3, stdout) < v28 - a3 )
      {
        v6 = gettext("write error");
        v7 = __errno_location();
        error(0, *v7, v6);
        v14 = 0;
        break;
      }
      v17 = !v17;
    }
    free(ptr[0]);
    result = v14;
  }
  return result;
}

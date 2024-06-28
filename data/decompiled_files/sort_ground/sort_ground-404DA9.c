#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404DA9(_QWORD *a1, FILE *a2, char *a3)
{
  unsigned __int8 *v4; // rax
  char *v5; // rax
  char *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rax
  __int64 v10; // rax
  char v12; // [rsp+27h] [rbp-79h]
  __int64 v13; // [rsp+28h] [rbp-78h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-68h]
  unsigned __int8 **v16; // [rsp+40h] [rbp-60h]
  unsigned __int64 v17; // [rsp+48h] [rbp-58h]
  unsigned __int8 *v18; // [rsp+50h] [rbp-50h]
  unsigned __int8 *v19; // [rsp+58h] [rbp-48h]
  __int64 *v20; // [rsp+60h] [rbp-40h]
  __int64 v21; // [rsp+68h] [rbp-38h]
  __int64 v22; // [rsp+70h] [rbp-30h]
  size_t n; // [rsp+78h] [rbp-28h]
  size_t v24; // [rsp+80h] [rbp-20h]
  unsigned __int8 *v25; // [rsp+88h] [rbp-18h]

  v20 = (__int64 *)qword_61DA08;
  v12 = byte_61D400;
  v21 = a1[5];
  v14 = qword_61D4E0 - 34;
  if ( *((_BYTE *)a1 + 48) )
    return 0LL;
  if ( a1[1] != a1[4] )
  {
    memmove((void *)*a1, (const void *)(a1[1] - a1[4] + *a1), a1[4]);
    a1[1] = a1[4];
    a1[2] = 0LL;
  }
  while ( 1 )
  {
    ptr = (void *)(*a1 + a1[1]);
    v22 = sub_404A3F(a1);
    v16 = (unsigned __int8 **)(-32LL * a1[2] + v22);
    v17 = v22 - v21 * a1[2] - (_QWORD)ptr;
    v4 = a1[2] ? &v16[1][(_QWORD)*v16] : *a1;
    v18 = v4;
    do
    {
      if ( v21 + 1 >= v17 )
        break;
      n = (v17 - 1) / (v21 + 1);
      v24 = fread_unlocked(ptr, 1uLL, n, a2);
      v19 = (unsigned __int8 *)ptr + v24;
      v17 -= v24;
      if ( v24 != n )
      {
        if ( ferror_unlocked(a2) )
        {
          v5 = gettext("read failed");
          sub_402C5C(v5, a3);
        }
        if ( feof_unlocked(a2) )
        {
          *((_BYTE *)a1 + 48) = 1;
          if ( (unsigned __int8 *)*a1 == v19 )
            return 0LL;
          if ( v18 != v19 && *(v19 - 1) != v12 )
          {
            v6 = (char *)v19++;
            *v6 = v12;
          }
        }
      }
      while ( 1 )
      {
        v25 = (unsigned __int8 *)memchr(ptr, v12, v19 - (_BYTE *)ptr);
        if ( !v25 )
          break;
        *v25 = 0;
        ptr = v25 + 1;
        v16 -= 4;
        *v16 = v18;
        v16[1] = (unsigned __int8 *)((_BYTE *)ptr - v18);
        v7 = v14;
        if ( (unsigned __int64)v16[1] >= v14 )
          v7 = (unsigned __int64)v16[1];
        v14 = v7;
        v17 -= v21;
        if ( v20 )
        {
          if ( v20[2] == -1 )
            v8 = v25;
          else
            v8 = sub_404BF1((__int64)v16, (__int64)v20);
          v16[3] = v8;
          if ( *v20 == -1 )
          {
            if ( *((_BYTE *)v20 + 48) )
            {
              while ( byte_61D5E0[(unsigned __int8)sub_402B35(*v18)] )
                ++v18;
            }
            v16[2] = v18;
          }
          else
          {
            v9 = sub_404A5B((__int64)v16, v20);
            v16[2] = v9;
          }
        }
        v18 = (unsigned __int8 *)ptr;
      }
      ptr = v19;
    }
    while ( !*((_BYTE *)a1 + 48) );
    a1[1] = (char *)ptr - *a1;
    v10 = sub_404A3F(a1);
    a1[2] = (v10 - (__int64)v16) >> 5;
    if ( a1[2] )
      break;
    v13 = a1[3] >> 5;
    *a1 = sub_414ED3(*a1, &v13, 32LL);
    a1[3] = 32 * v13;
  }
  a1[4] = (_BYTE *)ptr - v18;
  qword_61D4E0 = v14 + 34;
  return 1LL;
}

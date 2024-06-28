#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40A5DE(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, char *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  char *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v17; // [rsp+10h] [rbp-90h]
  FILE **v18; // [rsp+20h] [rbp-80h] BYREF
  FILE *v19; // [rsp+28h] [rbp-78h] BYREF
  __int64 v20; // [rsp+30h] [rbp-70h]
  unsigned __int64 v21; // [rsp+38h] [rbp-68h]
  unsigned __int64 v22; // [rsp+40h] [rbp-60h]
  char *v23; // [rsp+48h] [rbp-58h]
  unsigned __int64 v24; // [rsp+50h] [rbp-50h]
  __int64 v25; // [rsp+58h] [rbp-48h]
  unsigned __int64 v26; // [rsp+60h] [rbp-40h]
  unsigned __int64 v27; // [rsp+68h] [rbp-38h]
  char *v28; // [rsp+70h] [rbp-30h]
  unsigned __int64 v29; // [rsp+78h] [rbp-28h]
  FILE *v30; // [rsp+80h] [rbp-20h]
  char *v31; // [rsp+88h] [rbp-18h]

  while ( (unsigned int)dword_61D4EC < a3 )
  {
    v20 = 0LL;
    v21 = 0LL;
    while ( (unsigned int)dword_61D4EC <= a3 - v20 )
    {
      v23 = sub_403A5F(&v19);
      v4 = a2;
      if ( (unsigned int)dword_61D4EC <= a2 )
        v4 = (unsigned int)dword_61D4EC;
      v24 = sub_408F10((__int64)&a1[2 * v20], v4, (unsigned int)dword_61D4EC, v19, v23 + 13);
      v5 = a2;
      if ( v24 <= a2 )
        v5 = v24;
      a2 -= v5;
      a1[2 * v21] = v23 + 13;
      a1[2 * v21 + 1] = v23;
      v20 += v24;
      ++v21;
    }
    v25 = a3 - v20;
    v26 = (unsigned int)dword_61D4EC - v21 % (unsigned int)dword_61D4EC;
    if ( v26 < a3 - v20 )
    {
      v27 = v25 - v26 + 1;
      v28 = sub_403A5F(&v19);
      v6 = a2;
      if ( v27 <= a2 )
        v6 = v27;
      v29 = sub_408F10((__int64)&a1[2 * v20], v6, v27, v19, v28 + 13);
      v7 = a2;
      if ( v29 <= a2 )
        v7 = v29;
      a2 -= v7;
      a1[2 * v21] = v28 + 13;
      v8 = v21++;
      a1[2 * v8 + 1] = v28;
      v20 += v29;
    }
    memmove(&a1[2 * v21], &a1[2 * v20], 16 * (a3 - v20));
    a2 += v21;
    a3 += v21 - v20;
  }
  sub_40A343((__int64)a1, a2, a3, a4);
  while ( 1 )
  {
    v22 = sub_40811E((__int64)a1, a3, (__int64 *)&v18);
    if ( v22 == a3 )
      break;
    if ( v22 <= 2 )
    {
      v10 = (char *)a1[2 * v22];
      v11 = gettext("open failed");
      sub_402C5C(v11, v10);
    }
    do
    {
LABEL_27:
      --v22;
      sub_403612(v18[v22], (char *)a1[2 * v22]);
      v31 = sub_4038CE(&v19, v22 > 2);
    }
    while ( !v31 );
    v12 = a2;
    if ( v22 <= a2 )
      v12 = v22;
    sub_408239((__int64)a1, v12, v22, v19, v31 + 13, v18);
    v13 = a2;
    if ( v22 <= a2 )
      v13 = v22;
    v17 = a2 - v13;
    *a1 = v31 + 13;
    a1[1] = v31;
    memmove(a1 + 2, &a1[2 * v22], 16 * (a3 - v22));
    a2 = v17 + 1;
    a3 = a3 - v22 + 1;
  }
  v30 = sub_40352E(a4, "w");
  if ( !v30 )
  {
    if ( *__errno_location() != 24 || v22 <= 2 )
    {
      v9 = gettext("open failed");
      sub_402C5C(v9, a4);
    }
    goto LABEL_27;
  }
  sub_408239((__int64)a1, a2, a3, v30, a4, v18);
}

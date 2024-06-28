#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404EA3(unsigned int a1, unsigned int a2, char *a3, unsigned __int64 a4, __off_t a5, int a6, __int64 a7, __int64 a8, _BYTE *a9)
{
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  __int64 v16; // r12
  char *v17; // rbx
  int *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  char *v21; // rbx
  int *v22; // rax
  __off_t v23; // rax
  char v24; // al
  __int64 v25; // r12
  char *v26; // rbx
  int *v27; // rax
  char v32; // [rsp+59h] [rbp-87h] BYREF
  char v33; // [rsp+5Ah] [rbp-86h]
  char v34; // [rsp+5Bh] [rbp-85h]
  unsigned int i; // [rsp+5Ch] [rbp-84h]
  __int64 v36; // [rsp+60h] [rbp-80h] BYREF
  __off_t v37; // [rsp+68h] [rbp-78h]
  unsigned __int64 v38; // [rsp+70h] [rbp-70h]
  __off_t v39; // [rsp+78h] [rbp-68h]
  __off_t offset; // [rsp+80h] [rbp-60h]
  unsigned __int64 v41; // [rsp+88h] [rbp-58h]
  size_t v42; // [rsp+90h] [rbp-50h]
  unsigned __int64 v43; // [rsp+98h] [rbp-48h]
  char v44[20]; // [rsp+A0h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+B4h] [rbp-2Ch]
  char v46; // [rsp+B8h] [rbp-28h]
  char v47; // [rsp+B9h] [rbp-27h]
  __int64 v48; // [rsp+C0h] [rbp-20h]

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_409EEF(a1, v44);
  *a9 = 0;
  v32 = 1;
  while ( 1 )
  {
    v34 = sub_409F4B(v44);
    if ( v34 != 1 )
      break;
    v33 = 0;
    for ( i = 0; ; ++i )
    {
      if ( v45 <= i && !v33 )
        goto LABEL_38;
      if ( v45 <= i )
      {
        offset = *(_QWORD *)(v48 + 24LL * --i + 8) + v37;
        v41 = 0LL;
      }
      else
      {
        offset = *(_QWORD *)(v48 + 24LL * i);
        v41 = *(_QWORD *)(v48 + 24LL * i + 8);
      }
      v43 = offset - v37 - v38;
      v32 = 0;
      if ( offset - v37 != v38 )
      {
        if ( lseek(a1, offset, 0) < 0 )
        {
          v13 = sub_40E392(a7);
          v14 = gettext("cannot lseek %s");
          v15 = __errno_location();
          error(0, *v15, v14, v13);
LABEL_15:
          sub_404A7F((__int64)v44);
          return 0LL;
        }
        if ( v33 && a6 == 3 || v33 != 1 && a6 != 1 )
        {
          if ( lseek(a2, offset, 0) < 0 )
          {
            v16 = sub_40E392(a8);
            v17 = gettext("cannot lseek %s");
            v18 = __errno_location();
            error(0, *v18, v17, v16);
            goto LABEL_15;
          }
          v32 = 1;
        }
        else
        {
          v42 = v43;
          if ( v33 )
          {
            v19 = v43;
            if ( a5 - v39 <= v43 )
              v19 = a5 - v39;
            v42 = v19;
          }
          if ( (unsigned __int8)sub_404DF8(a2, v42) != 1 )
          {
            v20 = sub_40E392(a8);
            v21 = gettext("%s: write failed");
            v22 = __errno_location();
            error(0, *v22, v21, v20);
            goto LABEL_15;
          }
          v23 = a5;
          if ( offset <= a5 )
            v23 = offset;
          v39 = v23;
        }
      }
      v37 = offset;
      v33 = 0;
      v38 = v41;
      if ( (unsigned __int8)sub_404B86(a1, a2, a3, a4, a6 == 3, a7, a8, v41, &v36, &v32) != 1 )
        goto LABEL_15;
      v39 = v36 + offset;
      if ( v36 + offset == a5 )
        break;
    }
    v47 = 1;
LABEL_38:
    sub_404A7F((__int64)v44);
    if ( v47 == 1 )
    {
LABEL_39:
      if ( v39 >= a5 && !v32 )
        return 1LL;
      v24 = a6 == 1 ? sub_404DF8(a2, a5 - v39) ^ 1 : ftruncate(a2, a5) != 0;
      if ( !v24 )
        return 1LL;
      v25 = sub_40E392(a8);
      v26 = gettext("failed to extend %s");
      v27 = __errno_location();
      error(0, *v27, v26, v25);
      return 0LL;
    }
  }
  if ( v47 )
    goto LABEL_39;
  if ( v46 )
  {
    *a9 = 1;
  }
  else
  {
    v10 = sub_40E392(a7);
    v11 = gettext("%s: failed to get extents info");
    v12 = __errno_location();
    error(0, *v12, v11, v10);
  }
  return 0LL;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402281(int a1, __int64 a2, __int64 *a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  char *v7; // rbx
  int *v8; // rax
  size_t v10; // rax
  char *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // er8
  int v15; // er9
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // rbx
  int *v19; // rax
  char *v20; // rax
  char *v21; // rax
  unsigned __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // [rsp+18h] [rbp-3898h]
  unsigned __int8 v29; // [rsp+5Ah] [rbp-3856h]
  char v30; // [rsp+5Bh] [rbp-3855h]
  int errnum; // [rsp+5Ch] [rbp-3854h]
  int v32; // [rsp+64h] [rbp-384Ch]
  __int64 v33; // [rsp+68h] [rbp-3848h]
  unsigned __int64 v34; // [rsp+70h] [rbp-3840h]
  time_t v35; // [rsp+78h] [rbp-3838h]
  time_t v36; // [rsp+80h] [rbp-3830h]
  unsigned __int64 v37; // [rsp+88h] [rbp-3828h]
  unsigned __int64 v38; // [rsp+90h] [rbp-3820h]
  ssize_t v39; // [rsp+98h] [rbp-3818h]
  const char *s1; // [rsp+A0h] [rbp-3810h]
  char *s2; // [rsp+A8h] [rbp-3808h]
  __int64 v42; // [rsp+C8h] [rbp-37E8h]
  char v43[16]; // [rsp+D0h] [rbp-37E0h] BYREF
  char dest[656]; // [rsp+E0h] [rbp-37D0h] BYREF
  char v45[656]; // [rsp+370h] [rbp-3540h] BYREF
  char v46[656]; // [rsp+600h] [rbp-32B0h] BYREF
  unsigned __int8 v47[12296]; // [rsp+890h] [rbp-3020h] BYREF
  unsigned __int64 v48; // [rsp+3898h] [rbp-18h]

  v48 = __readfsqword(0x28u);
  v33 = *a3;
  v36 = 0LL;
  v29 = 0;
  v30 = 1;
  if ( lseek(a1, 0LL, 0) == -1 )
  {
    v7 = gettext("%s: cannot rewind");
    v8 = __errno_location();
    error(0, *v8, v7, a2);
    return 0xFFFFFFFFLL;
  }
  if ( a4 < 0 )
  {
    sub_402098(0LL, v43);
  }
  else
  {
    if ( v33 < 0 || v33 >= 12288 )
      v10 = 12288LL;
    else
      v10 = v33;
    sub_401F95(a4, v47, v10);
    sub_402098(v47, v43);
  }
  if ( a7 )
  {
    v11 = gettext("%s: pass %lu/%lu (%s)...");
    error(0, 0, v11, a2, a6, a7, v43);
    v35 = time(0LL) + 5;
    s1 = locale;
  }
  v34 = 0LL;
  while ( 1 )
  {
    v37 = 12288LL;
    if ( v33 >= 0 && (__int64)(v33 - v34) < 12288 )
    {
      if ( v33 < (__int64)v34 )
        break;
      v37 = v33 - v34;
      if ( v33 == v34 )
        break;
    }
    if ( a4 < 0 )
      sub_4072EC(a5, v47, v37);
    v38 = 0LL;
    while ( v38 < v37 )
    {
      v39 = write(a1, &v47[v38], v37 - v38);
      if ( v39 <= 0 )
      {
        if ( v33 < 0 && (!v39 || *__errno_location() == 28) )
        {
          v33 = v34 + v38;
          *a3 = v34 + v38;
          break;
        }
        errnum = *__errno_location();
        if ( a6 == 1 && v30 && *__errno_location() == 22 )
        {
          sub_40221C(a1, 0, v12, v13, v14, v15);
          v39 = 0LL;
        }
        else
        {
          v16 = sub_4050F4(v38 + v34, v46);
          v17 = gettext("%s: error writing at offset %s");
          error(0, errnum, v17, a2, v16);
          if ( errnum != 5 || v33 < 0 || (v38 | 0x1FF) >= v37 )
            return 0xFFFFFFFFLL;
          if ( lseek(a1, v34 + (v38 | 0x1FF) + 1, 0) == -1 )
          {
            v18 = gettext("%s: lseek failed");
            v19 = __errno_location();
            error(0, *v19, v18, a2);
            return 0xFFFFFFFFLL;
          }
          v39 = (v38 | 0x1FF) + 1 - v38;
          v29 = 1;
        }
      }
      v38 += v39;
      v30 = 0;
    }
    if ( (__int64)(0x7FFFFFFFFFFFFFFFLL - v38) < (__int64)v34 )
    {
      v20 = gettext("%s: file too large");
      error(0, 0, v20, a2);
      return 0xFFFFFFFFLL;
    }
    v34 += v38;
    if ( a7 )
    {
      if ( v34 == v33 && *s1 || (v36 = time(0LL), v36 >= v35) )
      {
        s2 = (char *)sub_404479(v34, v45, 434LL, 1LL, 1LL);
        if ( v34 == v33 || strcmp(s1, s2) )
        {
          if ( v33 >= 0 )
          {
            if ( v33 )
              v22 = v34 > 0x28F5C28F5C28F5CLL ? v34 / (v33 / 100) : 100 * v34 / v33;
            else
              LODWORD(v22) = 100;
            v32 = v22;
            v42 = sub_404479(v33, v46, 432LL, 1LL, 1LL);
            if ( v34 == v33 )
              s2 = (char *)v42;
            v23 = gettext("%s: pass %lu/%lu (%s)...%s/%s %d%%");
            LODWORD(v24) = v32;
            error(0, 0, v23, a2, a6, a7, v43, s2, v42, v24);
          }
          else
          {
            v21 = gettext("%s: pass %lu/%lu (%s)...%s");
            error(0, 0, v21, a2, a6, a7, v43, s2);
          }
          strcpy(dest, s2);
          s1 = dest;
          v35 = v36 + 5;
          if ( (unsigned int)sub_402132(a1, a2) )
          {
            if ( *__errno_location() != 5 )
              return 0xFFFFFFFFLL;
            v29 = 1;
          }
        }
      }
    }
  }
  if ( (unsigned int)sub_402132(a1, a2) )
  {
    if ( *__errno_location() != 5 )
      return 0xFFFFFFFFLL;
    v29 = 1;
  }
  return v29;
}

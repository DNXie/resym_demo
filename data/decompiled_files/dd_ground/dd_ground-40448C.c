#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40448C()
{
  __int64 v0; // r12
  size_t v1; // rbx
  char *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // er8
  int v7; // er9
  __int64 v8; // r12
  size_t v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r12
  char *v20; // rbx
  __int64 v21; // rcx
  int v22; // er8
  int v23; // er9
  int v24; // eax
  __int64 v25; // r12
  char *v26; // rbx
  int *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  char *v32; // rbx
  int *v33; // rax
  int v34; // eax
  __int64 v35; // r12
  char *v36; // rbx
  int *v37; // rax
  unsigned int v38; // [rsp+Ch] [rbp-74h]
  size_t v39; // [rsp+10h] [rbp-70h] BYREF
  char *v40; // [rsp+18h] [rbp-68h]
  __int64 v41; // [rsp+20h] [rbp-60h]
  size_t v42; // [rsp+28h] [rbp-58h]
  unsigned __int64 v43; // [rsp+30h] [rbp-50h]
  unsigned __int64 i; // [rsp+38h] [rbp-48h]
  void *s; // [rsp+40h] [rbp-40h]
  size_t v46; // [rsp+48h] [rbp-38h]
  unsigned __int64 v47; // [rsp+50h] [rbp-30h]
  size_t v48; // [rsp+58h] [rbp-28h]
  unsigned __int64 v49; // [rsp+60h] [rbp-20h]
  unsigned __int64 v50; // [rsp+68h] [rbp-18h]

  v42 = 0LL;
  v38 = 0;
  qword_60E870 = (__int64)malloc(2 * (qword_60E350 + 2) + qword_60E358 - 1);
  if ( !qword_60E870 )
  {
    v0 = sub_404458(qword_60E358);
    v1 = qword_60E358;
    v2 = gettext("memory exhausted by input buffer of size %zu bytes (%s)");
    error(1, 0, v2, v1, v0);
  }
  v3 = qword_60E350;
  v4 = qword_60E870 + 2;
  s = (void *)sub_401C1A(qword_60E870 + 2, qword_60E350);
  if ( (dword_60E380 & 0x800) != 0 )
  {
    qword_60E878 = (__int64)malloc(qword_60E350 + n - 1);
    if ( !qword_60E878 )
    {
      v8 = sub_404458(n);
      v9 = n;
      v10 = gettext("memory exhausted by output buffer of size %zu bytes (%s)");
      error(1, 0, v10, v9, v8);
    }
    v3 = qword_60E350;
    v4 = qword_60E878;
    ::s = (void *)sub_401C1A(qword_60E878, qword_60E350);
  }
  else
  {
    qword_60E878 = 0LL;
    ::s = s;
  }
  if ( qword_60E370 )
  {
    v46 = qword_60E358 * qword_60E370 + qword_60E3D0;
    v3 = qword_60E340;
    v4 = 0LL;
    v47 = sub_4039CA(0, qword_60E340, qword_60E370, qword_60E358, (__int64)s);
    v46 -= qword_60E3D0;
    if ( v47 || byte_60E3D8 != 1 && v46 )
    {
      v11 = sub_40685B(qword_60E340);
      v12 = gettext("%s: cannot skip to specified offset");
      v3 = 0LL;
      v4 = 0LL;
      error(0, 0, v12, v11);
    }
  }
  if ( qword_60E378 )
  {
    v3 = qword_60E348;
    v4 = 1LL;
    v43 = sub_4039CA(1u, qword_60E348, qword_60E378, n, (__int64)::s);
    if ( v43 )
    {
      memset(::s, 0, n);
      do
      {
        v3 = (__int64)::s;
        v4 = 1LL;
        if ( sub_4029FE(1, (__int64)::s, n, v5, v6, v7) != n )
        {
          v13 = sub_40685B(qword_60E348);
          v14 = gettext("writing to %s");
          v15 = __errno_location();
          error(0, *v15, v14, v13);
          sub_402677(1);
        }
        --v43;
      }
      while ( v43 );
    }
  }
  if ( !qword_60E270 )
    return 0LL;
  while ( 1 )
  {
    v17 = qword_60E3B0 + qword_60E3A8;
    if ( qword_60E3B0 + qword_60E3A8 >= (unsigned __int64)qword_60E270 )
      break;
    if ( (dword_60E380 & 0x400) != 0 && (dword_60E380 & 0x100) != 0 )
    {
      if ( (dword_60E380 & 0x18) != 0 )
        v18 = 32;
      else
        v18 = 0;
      memset(s, v18, qword_60E358);
    }
    v3 = (__int64)s;
    v4 = 0LL;
    v41 = qword_60E490(0LL, s, qword_60E358);
    if ( v41 >= 0 && byte_60E488 )
    {
      v3 = v41;
      v4 = 0LL;
      sub_402734(0, v41);
    }
    if ( !v41 )
      break;
    if ( v41 >= 0 )
    {
LABEL_41:
      v39 = v41;
      sub_403885(v41);
      if ( v39 >= qword_60E358 )
      {
        ++qword_60E3B0;
        v42 = 0LL;
      }
      else
      {
        ++qword_60E3A8;
        v42 = v39;
        if ( (dword_60E380 & 0x400) != 0 )
        {
          if ( (dword_60E380 & 0x100) == 0 )
          {
            if ( (dword_60E380 & 0x18) != 0 )
              v24 = 32;
            else
              v24 = 0;
            memset((char *)s + v39, v24, qword_60E358 - v39);
          }
          v39 = qword_60E358;
        }
      }
      if ( s == ::s )
      {
        v3 = (__int64)::s;
        v4 = 1LL;
        v49 = sub_4029FE(1, (__int64)::s, v39, v21, v22, v23);
        qword_60E3B8 += v49;
        if ( v49 != v39 )
          goto LABEL_52;
        if ( v39 == qword_60E358 )
          ++qword_60E3A0;
        else
          ++qword_60E398;
      }
      else
      {
        if ( byte_60E390 )
          sub_403756((unsigned __int8 *)s, v39);
        if ( (dword_60E380 & 0x80) != 0 )
          v40 = (char *)sub_4037B0((__int64)s, &v39);
        else
          v40 = (char *)s;
        if ( (dword_60E380 & 8) != 0 )
        {
          v3 = v39;
          v4 = (__int64)v40;
          sub_403FE4((__int64)v40, v39, v39, v21, v22, v23);
        }
        else
        {
          v3 = v39;
          v4 = (__int64)v40;
          if ( (dword_60E380 & 0x10) != 0 )
            sub_404138((__int64)v40, v39, v39, v21, v22, v23);
          else
            sub_403F3D(v40, v39);
        }
      }
    }
    else
    {
      v19 = sub_40685B(qword_60E340);
      v20 = gettext("reading %s");
      v3 = (unsigned int)*__errno_location();
      v4 = 0LL;
      error(0, v3, v20, v19);
      if ( (dword_60E380 & 0x100) == 0 )
      {
        v38 = 1;
        break;
      }
      sub_4020A6();
      v48 = qword_60E358 - v42;
      v3 = qword_60E358 - v42;
      sub_402734(0, qword_60E358 - v42);
      v4 = v48;
      if ( (unsigned __int8)sub_403D59(v48) != 1 )
      {
        v38 = 1;
        byte_60E3C8 = 0;
        dword_60E3CC = 29;
      }
      if ( (dword_60E380 & 0x400) != 0 && !v42 )
      {
        v41 = 0LL;
        goto LABEL_41;
      }
    }
  }
  if ( byte_60E5A0 )
  {
    if ( (dword_60E380 & 8) != 0 )
    {
      v3 = 1LL;
      v4 = (__int64)&byte_60E5A1;
      sub_403FE4((__int64)&byte_60E5A1, 1LL, v17, v5, v6, v7);
    }
    else if ( (dword_60E380 & 0x10) != 0 )
    {
      v3 = 1LL;
      v4 = (__int64)&byte_60E5A1;
      sub_404138((__int64)&byte_60E5A1, 1uLL, v17, v5, v6, v7);
    }
    else
    {
      LODWORD(v5) = (_DWORD)::s;
      v28 = qword_60E3F0++;
      *((_BYTE *)::s + v28) = byte_60E5A1;
      if ( qword_60E3F0 >= n )
        sub_402B6D(v4, v3, qword_60E3F0, v5, v6, v7);
    }
  }
  if ( (dword_60E380 & 8) != 0 && qword_60E3F8 )
  {
    for ( i = qword_60E3F8; i < qword_60E368; ++i )
    {
      LODWORD(v5) = (_DWORD)::s;
      v29 = qword_60E3F0++;
      *((_BYTE *)::s + v29) = byte_60E279;
      if ( qword_60E3F0 >= n )
        sub_402B6D(v4, v3, qword_60E3F0, v5, v6, v7);
    }
  }
  if ( qword_60E3F8 )
  {
    if ( (dword_60E380 & 0x10) != 0 )
    {
      LODWORD(v5) = (_DWORD)::s;
      v30 = qword_60E3F0++;
      *((_BYTE *)::s + v30) = byte_60E278;
      if ( qword_60E3F0 >= n )
        sub_402B6D(v4, v3, qword_60E3F0, v5, v6, v7);
    }
  }
  if ( qword_60E3F0 )
  {
    v50 = sub_4029FE(1, (__int64)::s, qword_60E3F0, v5, v6, v7);
    qword_60E3B8 += v50;
    if ( v50 )
      ++qword_60E398;
    if ( v50 != qword_60E3F0 )
    {
LABEL_52:
      v25 = sub_40685B(qword_60E348);
      v26 = gettext("writing %s");
      v27 = __errno_location();
      error(0, *v27, v26, v25);
      return 1LL;
    }
  }
  if ( (dword_60E380 & 0x4000) != 0 && fdatasync(1) )
  {
    if ( *__errno_location() != 38 && *__errno_location() != 22 )
    {
      v31 = sub_40685B(qword_60E348);
      v32 = gettext("fdatasync failed for %s");
      v33 = __errno_location();
      error(0, *v33, v32, v31);
      v38 = 1;
    }
    v34 = dword_60E380;
    BYTE1(v34) = BYTE1(dword_60E380) | 0x80;
    dword_60E380 = v34;
  }
  if ( (dword_60E380 & 0x8000) != 0 )
  {
    while ( fsync(1) )
    {
      if ( *__errno_location() != 4 )
      {
        v35 = sub_40685B(qword_60E348);
        v36 = gettext("fsync failed for %s");
        v37 = __errno_location();
        error(0, *v37, v36, v35);
        return 1LL;
      }
    }
  }
  return v38;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // ecx
  int v4; // er8
  int v5; // er9
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // er8
  int v12; // er9
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  __int64 v18; // r12
  char *v19; // rbx
  int *v20; // rax
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // r12
  char *v24; // rbx
  int *v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  __int64 v28; // r12
  char *v29; // rbx
  int *v30; // rax
  __int64 v31; // r12
  char *v32; // rbx
  int *v33; // rax
  int i; // [rsp+34h] [rbp-CCh]
  int v35; // [rsp+38h] [rbp-C8h]
  int v36; // [rsp+40h] [rbp-C0h]
  int errnum; // [rsp+44h] [rbp-BCh]
  __off_t v38; // [rsp+48h] [rbp-B8h]
  size_t length; // [rsp+50h] [rbp-B0h]
  size_t v40; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  sub_40234D();
  sub_406750(*a2);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_409AD0(sub_401D6A);
  qword_60E350 = getpagesize();
  sub_406601(
    a1,
    (_DWORD)a2,
    (unsigned int)"dd",
    (unsigned int)"coreutils",
    (_DWORD)off_60E288,
    (unsigned int)sub_401D9F,
    "Paul Rubin",
    "David MacKenzie",
    "Stuart Kemp",
    0LL);
  byte_60E27A = 0;
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401D9F(1);
  for ( i = 0; i <= 255; ++i )
    byte_60E4A0[i] = i;
  sub_402EBF(a1, (__int64)a2);
  sub_40363D();
  if ( qword_60E340 )
  {
    if ( (int)sub_409568(0LL, qword_60E340, (unsigned int)dword_60E384, 0LL) < 0 )
    {
      v6 = sub_40685B(qword_60E340);
      v7 = gettext("opening %s");
      v8 = __errno_location();
      error(1, *v8, v7, v6);
    }
  }
  else
  {
    qword_60E340 = (__int64)gettext("standard input");
    sub_4042BA(0, dword_60E384, qword_60E340, v3, v4, v5);
  }
  v38 = lseek(0, 0LL, 1);
  byte_60E3C8 = v38 >= 0;
  v9 = 0LL;
  if ( v38 >= 0 )
    v9 = v38;
  qword_60E3D0 = v9;
  dword_60E3CC = *__errno_location();
  if ( qword_60E348 )
  {
    if ( (dword_60E380 & 0x1000) != 0 )
      v13 = 0;
    else
      v13 = 64;
    v14 = v13 | dword_60E388;
    if ( (dword_60E380 & 0x2000) != 0 )
      v15 = 128;
    else
      v15 = 0;
    v16 = v15 | v14;
    if ( qword_60E378 || (dword_60E380 & 0x200) != 0 )
      v17 = 0;
    else
      v17 = 512;
    v36 = v16 | v17;
    if ( (!qword_60E378 || (int)sub_409568(1LL, qword_60E348, v36 | 2u, 438LL) < 0)
      && (int)sub_409568(1LL, qword_60E348, v36 | 1u, 438LL) < 0 )
    {
      v18 = sub_40685B(qword_60E348);
      v19 = gettext("opening %s");
      v20 = __errno_location();
      error(1, *v20, v19, v18);
    }
    if ( qword_60E378 && (dword_60E380 & 0x200) == 0 )
    {
      length = qword_60E378 * n;
      v40 = n;
      if ( 0x7FFFFFFFFFFFFFFFLL / n < qword_60E378 )
      {
        v21 = qword_60E378;
        v22 = gettext("offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks");
        error(1, 0, v22, v21, v40);
      }
      if ( ftruncate(1, length) )
      {
        errnum = *__errno_location();
        if ( (unsigned int)sub_409AF0(1, &stat_buf) )
        {
          v23 = sub_40685B(qword_60E348);
          v24 = gettext("cannot fstat %s");
          v25 = __errno_location();
          error(1, *v25, v24, v23);
        }
        if ( (stat_buf.st_mode & 0xF000) == 0x8000 || (stat_buf.st_mode & 0xF000) == 0x4000 )
        {
          v26 = sub_40685B(qword_60E348);
          v27 = gettext("failed to truncate to %lu bytes in output file %s");
          error(1, errnum, v27, length, v26);
        }
      }
    }
  }
  else
  {
    qword_60E348 = (__int64)gettext("standard output");
    sub_4042BA(1, dword_60E388, qword_60E348, v10, v11, v12);
  }
  qword_60E3C0 = sub_409515();
  v35 = sub_40448C();
  if ( qword_60E270 )
  {
    if ( qword_60E270 != -1 )
    {
      if ( byte_60E488 )
        sub_402734(0, 0LL);
      if ( byte_60E489 )
        sub_402734(1, 0LL);
    }
  }
  else
  {
    if ( byte_60E488 && !sub_402734(0, 0LL) )
    {
      v28 = sub_40685B(qword_60E340);
      v29 = gettext("failed to discard cache for: %s");
      v30 = __errno_location();
      error(0, *v30, v29, v28);
      v35 = 1;
    }
    if ( byte_60E489 )
    {
      if ( !sub_402734(1, 0LL) )
      {
        v31 = sub_40685B(qword_60E348);
        v32 = gettext("failed to discard cache for: %s");
        v33 = __errno_location();
        error(0, *v33, v32, v31);
        sub_402677(1);
      }
    }
  }
  sub_402677(v35);
}

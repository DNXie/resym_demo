#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402EBF(int a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  unsigned __int64 v4; // rax
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // rbx
  char *v13; // rax
  int v14; // eax
  char *v15; // rax
  bool v16; // al
  void *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  __int64 result; // rax
  bool v24; // [rsp+1Bh] [rbp-35h] BYREF
  int i; // [rsp+1Ch] [rbp-34h]
  size_t v26; // [rsp+20h] [rbp-30h]
  char *s; // [rsp+28h] [rbp-28h]
  char *v28; // [rsp+30h] [rbp-20h]
  unsigned __int64 v29; // [rsp+38h] [rbp-18h]

  v26 = 0LL;
  for ( i = optind; i < a1; ++i )
  {
    s = *(char **)(8LL * i + a2);
    v28 = strchr(s, 61);
    if ( !v28 )
    {
      v2 = sub_40685B(s);
      v3 = gettext("unrecognized operand %s");
      error(0, 0, v3, v2);
      sub_401D9F(1);
    }
    ++v28;
    if ( sub_402E95(s, "if") )
    {
      qword_60E340 = (__int64)v28;
    }
    else if ( sub_402E95(s, "of") )
    {
      qword_60E348 = (__int64)v28;
    }
    else if ( sub_402E95(s, "conv") )
    {
      dword_60E380 |= sub_402CAE(v28, "ascii", "invalid conversion");
    }
    else if ( sub_402E95(s, "iflag") )
    {
      dword_60E384 |= sub_402CAE(v28, "append", "invalid input flag");
    }
    else if ( sub_402E95(s, "oflag") )
    {
      dword_60E388 |= sub_402CAE(v28, "append", "invalid output flag");
    }
    else if ( sub_402E95(s, "status") )
    {
      dword_60E38C |= sub_402CAE(v28, "noxfer", "invalid status flag");
    }
    else
    {
      v24 = 0;
      v29 = sub_402DD8((__int64)v28, &v24);
      if ( sub_402E95(s, "ibs") )
      {
        if ( !v29 )
          goto LABEL_21;
        v4 = -2 * (qword_60E350 + 2);
        if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
          v4 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v4 >= v29 )
          v5 = 0;
        else
LABEL_21:
          v5 = 1;
        v24 = (v24 | v5) != 0;
        qword_60E358 = v29;
      }
      else if ( sub_402E95(s, "obs") )
      {
        if ( !v29 )
          goto LABEL_29;
        v6 = -qword_60E350;
        if ( (unsigned __int64)-qword_60E350 > 0x7FFFFFFFFFFFFFFFLL )
          v6 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v6 >= v29 )
          v7 = 0;
        else
LABEL_29:
          v7 = 1;
        v24 = (v24 | v7) != 0;
        n = v29;
      }
      else if ( sub_402E95(s, "bs") )
      {
        if ( !v29 )
          goto LABEL_37;
        v8 = -2 * (qword_60E350 + 2);
        if ( v8 > 0x7FFFFFFFFFFFFFFFLL )
          v8 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v8 >= v29 )
          v9 = 0;
        else
LABEL_37:
          v9 = 1;
        v24 = (v24 | v9) != 0;
        v26 = v29;
      }
      else if ( sub_402E95(s, "cbs") )
      {
        v24 = v24 || v29 == 0;
        qword_60E368 = v29;
      }
      else if ( sub_402E95(s, "skip") )
      {
        qword_60E370 = v29;
      }
      else if ( sub_402E95(s, "seek") )
      {
        qword_60E378 = v29;
      }
      else
      {
        if ( !sub_402E95(s, "count") )
        {
          v10 = sub_40685B(s);
          v11 = gettext("unrecognized operand %s");
          error(0, 0, v11, v10);
          sub_401D9F(1);
        }
        qword_60E270 = v29;
      }
      if ( v24 )
      {
        v12 = sub_40685B(v28);
        v13 = gettext("invalid number %s");
        error(1, 0, v13, v12);
      }
    }
  }
  if ( v26 )
  {
    n = v26;
    qword_60E358 = v26;
  }
  else
  {
    v14 = dword_60E380;
    BYTE1(v14) = BYTE1(dword_60E380) | 8;
    dword_60E380 = v14;
  }
  if ( !qword_60E358 )
    qword_60E358 = 512LL;
  if ( !n )
    n = 512LL;
  if ( !qword_60E368 )
    dword_60E380 &= 0xFFFFFFE7;
  if ( (dword_60E384 & 0x101000) != 0 )
    dword_60E384 |= 0x101000u;
  if ( (dword_60E388 & 1) != 0 )
  {
    v15 = gettext("invalid output flag");
    error(0, 0, "%s: %s", v15, "'fullblock'");
    sub_401D9F(1);
  }
  v16 = (dword_60E380 & 0x800) == 0
     && (dword_60E384 & 1) == 0
     && (qword_60E370
      || qword_60E270 && qword_60E270 != -1
      || (((unsigned __int16)dword_60E384 | (unsigned __int16)dword_60E388) & 0x4000) != 0);
  byte_60E3D9 = v16;
  if ( (dword_60E384 & 1) != 0 )
    v17 = sub_40298D;
  else
    v17 = sub_4028BF;
  qword_60E490 = (__int64)v17;
  dword_60E384 &= 0xFFFFFFFE;
  if ( sub_40208F(dword_60E380 & 7) )
  {
    v18 = gettext("cannot combine any two of {ascii,ebcdic,ibm}");
    error(1, 0, v18);
  }
  if ( sub_40208F(dword_60E380 & 0x18) )
  {
    v19 = gettext("cannot combine block and unblock");
    error(1, 0, v19);
  }
  if ( sub_40208F(dword_60E380 & 0x60) )
  {
    v20 = gettext("cannot combine lcase and ucase");
    error(1, 0, v20);
  }
  if ( sub_40208F(dword_60E380 & 0x3000) )
  {
    v21 = gettext("cannot combine excl and nocreat");
    error(1, 0, v21);
  }
  if ( sub_40208F(dword_60E384 & 0x4002) || sub_40208F(dword_60E388 & 0x4002) )
  {
    v22 = gettext("cannot combine direct and nocache");
    error(1, 0, v22);
  }
  if ( (dword_60E384 & 2) != 0 )
  {
    byte_60E488 = 1;
    dword_60E384 &= 0xFFFFFFFD;
  }
  result = dword_60E388 & 2;
  if ( (dword_60E388 & 2) != 0 )
  {
    byte_60E489 = 1;
    result = dword_60E388 & 0xFFFFFFFD;
    dword_60E388 &= 0xFFFFFFFD;
  }
  return result;
}

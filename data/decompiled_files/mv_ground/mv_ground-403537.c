#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403537(__int64 a1, _QWORD *a2, char a3, __int64 a4, int a5, int *a6)
{
  int v6; // eax
  __int64 result; // rax
  char *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  const char *v11; // rax
  char *v12; // rbx
  int *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbx
  const char *v16; // rax
  bool v21; // [rsp+3Fh] [rbp-D1h]
  int v22; // [rsp+40h] [rbp-D0h]
  int v23; // [rsp+44h] [rbp-CCh]
  int errnum; // [rsp+48h] [rbp-C8h]
  int v25; // [rsp+4Ch] [rbp-C4h]
  __int64 v26; // [rsp+50h] [rbp-C0h]
  char *v27; // [rsp+58h] [rbp-B8h]
  __int64 v28; // [rsp+68h] [rbp-A8h]
  struct stat v29; // [rsp+70h] [rbp-A0h] BYREF

  v25 = *(_DWORD *)(a1 + 44);
  v26 = a2[7];
  v27 = (char *)a2[6];
  if ( a6 )
    *a6 = 2;
  sub_40347D((__int64)&v29);
  if ( a3 )
    v6 = 4;
  else
    v6 = 0;
  v22 = v6;
  v23 = 0;
  if ( a2[4] )
    return 3LL;
  if ( *(_DWORD *)(a4 + 4) == 5 )
    return 2LL;
  errnum = 0;
  if ( *(_BYTE *)a4 != 1 && (*(_DWORD *)(a4 + 4) == 3 || *(_BYTE *)(a4 + 24)) )
  {
    v23 = sub_403497(v25, v27, v26, &v29);
    errnum = *__errno_location();
  }
  if ( !v23 && *(_DWORD *)(a4 + 4) != 3 )
    goto LABEL_55;
  if ( v23 >= 0 && !v22 )
  {
    if ( (unsigned int)sub_4033F8(v25, v27, &v29, 256) )
    {
      v23 = -1;
      errnum = *__errno_location();
    }
    else if ( (v29.st_mode & 0xF000) == 40960 )
    {
      v22 = 10;
    }
    else if ( (v29.st_mode & 0xF000) == 0x4000 )
    {
      v22 = 4;
    }
  }
  if ( v23 >= 0 )
  {
    if ( v22 == 4 )
    {
      if ( *(_BYTE *)(a4 + 9) != 1 )
      {
        v23 = -1;
        errnum = 21;
      }
    }
    else if ( v22 == 10 && *(_DWORD *)(a4 + 4) != 3 )
    {
      return 2LL;
    }
  }
  v28 = sub_40D278(v26);
  if ( v23 < 0 )
  {
    v8 = gettext("cannot remove %s");
    error(0, errnum, v8, v28);
    return 4LL;
  }
  if ( a6 )
  {
    v21 = sub_403350(v25, v27);
    v9 = v21 ? 4 : 3;
    *a6 = v9;
  }
  else
  {
    v21 = 0;
  }
  if ( v22 == 4 && a5 == 2 && !v21 )
  {
    v10 = qword_61B860;
    v11 = v23 ? gettext("%s: descend into write-protected directory %s? ") : gettext("%s: descend into directory %s? ");
    fprintf(stderr, v11, v10, v28);
  }
  else
  {
    if ( (unsigned int)sub_4033F8(v25, v27, &v29, 256) )
    {
      v12 = gettext("cannot remove %s");
      v13 = __errno_location();
      error(0, *v13, v12, v28);
      return 4LL;
    }
    v14 = sub_40B0EB(&v29);
    v15 = qword_61B860;
    v16 = v23 ? gettext("%s: remove write-protected %s %s? ") : gettext("%s: remove %s %s? ");
    fprintf(stderr, v16, v15, v14, v28);
  }
  if ( (unsigned __int8)sub_4110A2() != 1 )
    result = 3LL;
  else
LABEL_55:
    result = 2LL;
  return result;
}

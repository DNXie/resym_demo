#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40382C(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // rbx
  __int64 v9; // rax
  const char *v10; // rbx
  const char *v11; // rbx
  const char *v12; // rbx
  int *v13; // rax
  __int64 v16; // [rsp+10h] [rbp-30h]
  unsigned __int8 v17; // [rsp+23h] [rbp-1Dh]
  int fd; // [rsp+24h] [rbp-1Ch]
  __int64 i; // [rsp+28h] [rbp-18h]

  v16 = a2;
  v17 = 0;
  if ( *(int *)(32 * a2 + a1 + 8) < 0 )
  {
    if ( a2 )
      v6 = a2 - 1;
    else
      v6 = a3 - 1;
    for ( i = v6; ; *(_DWORD *)(32 * i + a1 + 8) = -2 )
    {
      if ( *(_DWORD *)(32 * v16 + a1 + 8) == -1 )
      {
        fd = sub_4025B0(*(const char **)(32 * v16 + a1), a2, 32 * v16, a4, a5, a6);
      }
      else
      {
        a2 = 3073LL;
        fd = sub_4052B3(*(_QWORD *)(32 * v16 + a1), 3073, 32 * (int)v16, a4, a5, a6);
      }
      if ( fd >= 0 )
        break;
      if ( *__errno_location() != 24 && *__errno_location() != 23 )
      {
        v8 = *(const char **)(32 * v16 + a1);
        a2 = (unsigned int)*__errno_location();
        error(1, a2, "%s", v8);
      }
      v17 = 1;
      while ( *(int *)(32 * i + a1 + 8) < 0 )
      {
        if ( i )
          v9 = i - 1;
        else
          v9 = a3 - 1;
        i = v9;
        if ( v9 == v16 )
        {
          v10 = *(const char **)(32 * v16 + a1);
          a2 = (unsigned int)*__errno_location();
          error(1, a2, "%s", v10);
        }
      }
      if ( (unsigned int)sub_409583(*(_QWORD *)(32 * i + a1 + 16)) )
      {
        v11 = *(const char **)(32 * i + a1);
        a2 = (unsigned int)*__errno_location();
        error(1, a2, "%s", v11);
      }
      *(_QWORD *)(32 * i + a1 + 16) = 0LL;
    }
    *(_DWORD *)(a1 + 32 * v16 + 8) = fd;
    v7 = 32 * v16 + a1;
    *(_QWORD *)(v7 + 16) = fdopen(fd, &off_40D563[2]);
    if ( !*(_QWORD *)(v7 + 16) )
    {
      v12 = *(const char **)(32 * v16 + a1);
      v13 = __errno_location();
      error(1, *v13, "%s", v12);
    }
    *(_DWORD *)(a1 + 32 * v16 + 24) = dword_610548;
    dword_610548 = 0;
  }
  return v17;
}

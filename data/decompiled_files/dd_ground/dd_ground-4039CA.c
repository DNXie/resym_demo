#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4039CA(unsigned int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // r12
  char *v12; // rbx
  int *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  unsigned __int64 v18; // [rsp+18h] [rbp-D8h]
  __off_t v19; // [rsp+18h] [rbp-D8h]
  int errnum; // [rsp+3Ch] [rbp-B4h]
  unsigned __int64 v21; // [rsp+40h] [rbp-B0h]
  signed __int64 v22; // [rsp+48h] [rbp-A8h]
  struct stat stat_buf; // [rsp+50h] [rbp-A0h] BYREF

  v18 = a3;
  v21 = a4 * a3;
  *__errno_location() = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL / a4 < v18 || sub_4038B8(a2, a1, v21, 1) < 0 )
  {
    errnum = *__errno_location();
    if ( sub_4038B8(a2, a1, 0LL, 2) >= 0 )
    {
      if ( !errnum )
        errnum = 75;
      v9 = sub_40685B(a2);
      if ( a1 )
        v10 = gettext("%s: cannot seek");
      else
        v10 = gettext("%s: cannot skip");
      error(0, errnum, v10, v9);
      sub_402677(1);
    }
    do
    {
      v22 = qword_60E490(a1, a5, a4);
      if ( v22 >= 0 )
      {
        if ( !v22 )
          break;
        if ( !a1 )
          sub_403885(v22);
      }
      else
      {
        if ( a1 )
        {
          v14 = sub_40685B(a2);
          v15 = gettext("%s: cannot seek");
          error(0, errnum, v15, v14);
LABEL_24:
          sub_402677(1);
        }
        v11 = sub_40685B(a2);
        v12 = gettext("reading %s");
        v13 = __errno_location();
        error(0, *v13, v12, v11);
        if ( (dword_60E380 & 0x100) == 0 )
          goto LABEL_24;
        sub_4020A6();
      }
      --v18;
    }
    while ( v18 );
    result = v18;
  }
  else
  {
    if ( a1 )
    {
      v19 = 0LL;
    }
    else
    {
      if ( (unsigned int)sub_409AF0(0, &stat_buf) )
      {
        v5 = sub_40685B(a2);
        v6 = gettext("cannot fstat %s");
        v7 = __errno_location();
        error(1, *v7, v6, v5);
      }
      if ( (stat_buf.st_mode & 0xF000) == 0x8000 && stat_buf.st_size < qword_60E3D0 + v21 )
      {
        v19 = (v21 - stat_buf.st_size) / a4;
        sub_403885(stat_buf.st_size - qword_60E3D0);
      }
      else
      {
        v19 = 0LL;
        sub_403885(v21);
      }
    }
    result = v19;
  }
  return result;
}

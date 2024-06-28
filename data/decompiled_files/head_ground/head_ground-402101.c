#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402101(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  int v12; // [rsp+2Ch] [rbp-C4h]
  __off_t whence; // [rsp+30h] [rbp-C0h]
  __off_t v14; // [rsp+38h] [rbp-B8h]
  unsigned __int64 v15; // [rsp+48h] [rbp-A8h]
  struct stat stat_buf; // [rsp+50h] [rbp-A0h] BYREF

  if ( byte_609279 || (unsigned int)sub_406950(a2, &stat_buf) || (stat_buf.st_mode & 0xF000) != 0x8000 )
    return sub_401A4E(a1, a2, a3);
  whence = lseek(a2, 0LL, 1);
  if ( whence == -1 || (v14 = lseek(a2, 0LL, 2), v14 == -1) )
  {
    v4 = sub_403DCC(a1);
    v5 = gettext("cannot lseek %s");
    v6 = __errno_location();
    error(0, *v6, v5, v4);
    result = 0LL;
  }
  else
  {
    if ( v14 - whence < 0 )
      v7 = 0LL;
    else
      v7 = v14 - whence;
    v15 = v7;
    if ( v7 > a3 )
    {
      if ( lseek(a2, 0LL, whence) == -1 )
      {
        v8 = sub_403DCC(a1);
        v9 = gettext("%s: cannot lseek back to original position");
        v10 = __errno_location();
        error(0, *v10, v9, v8);
        result = 0LL;
      }
      else
      {
        v12 = sub_401930(a2, stdout, v15 - a3);
        if ( v12 )
        {
          sub_401800(v12, a1);
          result = 0LL;
        }
        else
        {
          result = 1LL;
        }
      }
    }
    else
    {
      result = 1LL;
    }
  }
  return result;
}

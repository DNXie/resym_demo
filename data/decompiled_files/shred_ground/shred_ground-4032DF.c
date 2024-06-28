#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4032DF(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char *v6; // rbx
  int *v7; // rax
  __int64 result; // rax
  char *v9; // rax
  int v12; // [rsp+2Ch] [rbp-14h]

  v12 = sub_409226(a1, 3, a3, a4, a5, a6);
  if ( v12 >= 0 )
  {
    if ( (v12 & 0x400) != 0 )
    {
      v9 = gettext("%s: cannot shred append-only file descriptor");
      error(0, 0, v9, a2);
      result = 0LL;
    }
    else
    {
      result = sub_402D8A(a1, a2, a3, a4);
    }
  }
  else
  {
    v6 = gettext("%s: fcntl failed");
    v7 = __errno_location();
    error(0, *v7, v6, a2);
    result = 0LL;
  }
  return result;
}

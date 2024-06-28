#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40453B(unsigned int *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // eax
  int v7; // eax

  v6 = *a1;
  if ( *a1 > 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 > 5 )
        __assert_fail("0", "../../src/lib/savewd.c", 0x59u, "savewd_save");
      return 0LL;
    }
    goto LABEL_13;
  }
  if ( !v6 )
  {
    v7 = sub_4058DE(4244326, 0, a3, a4, a5, a6);
    if ( v7 >= 0 )
    {
      *a1 = 1;
      a1[1] = v7;
      return 0LL;
    }
    if ( *__errno_location() != 13 && *__errno_location() != 116 )
    {
LABEL_11:
      *a1 = 4;
      a1[1] = *__errno_location();
      return 0LL;
    }
    *a1 = 3;
    a1[1] = -1;
LABEL_13:
    if ( (a1[1] & 0x80000000) == 0 )
      return 0LL;
    a1[1] = fork();
    if ( !a1[1] )
      return 0LL;
    if ( (int)a1[1] > 0 )
      return 1LL;
    goto LABEL_11;
  }
  return 0LL;
}

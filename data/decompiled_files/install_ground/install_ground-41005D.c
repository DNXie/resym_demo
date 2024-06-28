#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41005D(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // eax

  v3 = *a1;
  if ( *a1 > 2 )
  {
    if ( v3 != 3 )
    {
      if ( v3 > 5 )
        __assert_fail("0", "../../src/lib/savewd.c", 0x59u, "savewd_save");
      return 0LL;
    }
    goto LABEL_13;
  }
  if ( !v3 )
  {
    v4 = sub_40B44A(".", 0, a3);
    if ( v4 >= 0 )
    {
      *a1 = 1;
      a1[1] = v4;
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

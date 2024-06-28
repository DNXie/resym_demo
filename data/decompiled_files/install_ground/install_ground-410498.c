#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_410498(_DWORD *a1)
{
  int v1; // eax
  _DWORD *result; // rax

  v1 = *a1;
  if ( *a1 > 2u )
  {
    if ( v1 == 3 )
    {
      if ( (int)a1[1] >= 0 )
        __assert_fail("wd->val.child < 0", "../../src/lib/savewd.c", 0xEDu, "savewd_finish");
    }
    else if ( v1 != 4 )
    {
      __assert_fail("0", "../../src/lib/savewd.c", 0xF1u, "savewd_finish");
    }
  }
  else if ( v1 )
  {
    close(a1[1]);
  }
  result = a1;
  *a1 = 5;
  return result;
}

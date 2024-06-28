#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410338(unsigned int *a1, int a2)
{
  unsigned int v2; // eax
  int stat_loc; // [rsp+34h] [rbp-Ch] BYREF
  int v5; // [rsp+38h] [rbp-8h]
  __pid_t pid; // [rsp+3Ch] [rbp-4h]

  v2 = *a1;
  if ( *a1 == 2 )
  {
    if ( fchdir(a1[1]) )
    {
      v5 = *__errno_location();
      close(a1[1]);
      *a1 = 4;
      a1[1] = v5;
LABEL_9:
      *__errno_location() = a1[1];
      return 0xFFFFFFFFLL;
    }
    *a1 = 1;
    return 0LL;
  }
  if ( v2 < 2 )
    return 0LL;
  if ( v2 != 3 )
  {
    if ( v2 != 4 )
      __assert_fail("0", "../../src/lib/savewd.c", 0xD8u, "savewd_restore");
    goto LABEL_9;
  }
  pid = a1[1];
  if ( !pid )
    _exit(a2);
  if ( pid <= 0 )
    return 0LL;
  while ( waitpid(pid, &stat_loc, 0) < 0 )
  {
    if ( *__errno_location() != 4 )
      __assert_fail("(*__errno_location ()) == 4", "../../src/lib/savewd.c", 0xCEu, "savewd_restore");
  }
  a1[1] = -1;
  if ( (stat_loc & 0x7F) != 0 )
    raise(stat_loc & 0x7F);
  return (stat_loc & 0xFF00) >> 8;
}

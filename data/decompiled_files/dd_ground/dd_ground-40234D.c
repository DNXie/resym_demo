#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_40234D()
{
  int result; // eax
  bool v1; // [rsp+Fh] [rbp-A1h]
  struct sigaction v2; // [rsp+10h] [rbp-A0h] BYREF

  v1 = getenv("POSIXLY_CORRECT") == 0LL;
  sigemptyset(&set);
  if ( v1 )
  {
    sigaction(10, 0LL, &v2);
    if ( v2.sa_handler != (__sighandler_t)1 )
      sigaddset(&set, 10);
  }
  sigaction(2, 0LL, &v2);
  if ( v2.sa_handler != (__sighandler_t)1 )
    sigaddset(&set, 2);
  v2.sa_mask = set;
  if ( sigismember(&set, 10) )
  {
    v2.sa_handler = (__sighandler_t)sub_402335;
    v2.sa_flags = 0;
    sigaction(10, &v2, 0LL);
  }
  result = sigismember(&set, 2);
  if ( result )
  {
    v2.sa_handler = (__sighandler_t)sub_402323;
    v2.sa_flags = -1073741824;
    result = sigaction(2, &v2, 0LL);
  }
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402D78()
{
  __int64 result; // rax
  int sig; // [rsp+8h] [rbp-88h]
  sigset_t oset; // [rsp+10h] [rbp-80h] BYREF

  while ( 1 )
  {
    if ( !dword_61D7C0 )
    {
      result = (unsigned int)dword_61D7C4;
      if ( !dword_61D7C4 )
        break;
    }
    if ( byte_61D6C1 )
      sub_402CE3();
    fflush_unlocked(stdout);
    sigprocmask(0, &set, &oset);
    sig = dword_61D7C0;
    if ( dword_61D7C4 )
    {
      --dword_61D7C4;
      raise(19);
    }
    else
    {
      signal(dword_61D7C0, 0LL);
      raise(sig);
    }
    sigprocmask(2, &oset, 0LL);
  }
  return result;
}

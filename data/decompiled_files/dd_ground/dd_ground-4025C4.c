#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4025C4()
{
  __int64 result; // rax
  int sig; // [rsp+8h] [rbp-88h]
  sigset_t oset; // [rsp+10h] [rbp-80h] BYREF

  while ( 1 )
  {
    if ( !dword_60E480 )
    {
      result = (unsigned int)dword_60E484;
      if ( !dword_60E484 )
        break;
    }
    sigprocmask(0, &set, &oset);
    sig = dword_60E480;
    if ( dword_60E484 )
      --dword_60E484;
    sigprocmask(2, &oset, 0LL);
    if ( sig )
      sub_402522();
    sub_4020A6();
    if ( sig )
      raise(sig);
  }
  return result;
}

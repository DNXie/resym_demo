#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_401A34()
{
  __int64 result; // rax
  cpu_set_t cpuset; // [rsp+10h] [rbp-80h] BYREF

  if ( sched_getaffinity(0, 0x80uLL, &cpuset) || (LODWORD(result) = __sched_cpucount(0x80uLL, &cpuset), !(_DWORD)result) )
    result = 0LL;
  else
    result = (int)result;
  return result;
}

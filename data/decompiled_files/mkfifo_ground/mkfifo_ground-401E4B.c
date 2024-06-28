#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E4B(char *a1)
{
  __int64 result; // rax
  struct stat stat_buf; // [rsp+10h] [rbp-90h] BYREF

  if ( (unsigned int)sub_404740(a1, &stat_buf) )
    result = 0LL;
  else
    result = sub_401A9A(stat_buf.st_mode, 4095);
  return result;
}

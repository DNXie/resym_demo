#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403344(char *a1)
{
  __int64 result; // rax
  struct stat stat_buf; // [rsp+10h] [rbp-90h] BYREF

  if ( (unsigned int)sub_40AA50(a1, &stat_buf) )
    result = 0LL;
  else
    result = sub_402F93(stat_buf.st_mode, 4095);
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_406424()
{
  __int64 result; // rax

  if ( getenv("POSIXLY_CORRECT") )
    result = 512LL;
  else
    result = 1024LL;
  return result;
}

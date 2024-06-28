#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    result = (__int64 (**)(void))__gmon_start__();
  return result;
}

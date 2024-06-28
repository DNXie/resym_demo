#include "/share/binary_recovery/clang-parser/defs.hh"
void *init_proc()
{
  void *result; // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    result = (void *)__gmon_start__();
  return result;
}

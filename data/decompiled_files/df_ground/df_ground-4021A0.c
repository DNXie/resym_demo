#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4021A0()
{
  __int64 result; // rax

  result = 6390983LL - (_QWORD)&program_invocation_short_name;
  if ( (unsigned __int64)(6390983LL - (_QWORD)&program_invocation_short_name) > 0xE )
    result = 0LL;
  return result;
}

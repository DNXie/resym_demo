#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_408056()
{
  __int64 result; // rax
  unsigned __int64 i; // [rsp+0h] [rbp-8h]

  for ( i = 0LL; ; ++i )
  {
    result = qword_61D638;
    if ( i >= qword_61D638 )
      break;
    *((_QWORD *)qword_61D640 + i) = qword_61D628 + 192 * i;
  }
  return result;
}

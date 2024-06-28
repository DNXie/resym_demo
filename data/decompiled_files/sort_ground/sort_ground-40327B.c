#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40327B()
{
  __int64 result; // rax
  __int64 i; // [rsp+8h] [rbp-8h]

  result = qword_61DAA0;
  for ( i = qword_61DAA0; i; i = *(_QWORD *)i )
  {
    unlink((const char *)(i + 13));
    result = *(_QWORD *)i;
  }
  qword_61DAA0 = 0LL;
  return result;
}

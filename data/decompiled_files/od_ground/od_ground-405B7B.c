#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_405B7B(__int64 *a1, int a2)
{
  __int64 *result; // rax

  if ( a1 )
    result = a1;
  else
    result = &qword_612420;
  *(_DWORD *)result = a2;
  return result;
}

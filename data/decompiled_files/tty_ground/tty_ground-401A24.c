#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_401A24(__int64 *a1, int a2)
{
  __int64 *result; // rax

  if ( a1 )
    result = a1;
  else
    result = &qword_606240;
  *(_DWORD *)result = a2;
  return result;
}

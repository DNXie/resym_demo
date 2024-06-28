#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4075F2(__int64 a1)
{
  int result; // eax

  if ( *(int *)a1 < 0 )
    result = sub_40AE50(*(_QWORD *)(a1 + 8));
  else
    result = fchdir(*(_DWORD *)a1);
  return result;
}

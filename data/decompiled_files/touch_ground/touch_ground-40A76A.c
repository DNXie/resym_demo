#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40A76A(__int64 a1)
{
  int result; // eax

  if ( *(int *)a1 < 0 )
    result = sub_40B50D(*(_QWORD *)(a1 + 8));
  else
    result = fchdir(*(_DWORD *)a1);
  return result;
}

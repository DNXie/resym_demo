#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406E8A(_QWORD *a1, _QWORD *a2, __int64 (__fastcall *a3)(_QWORD, _QWORD))
{
  __int64 result; // rax

  if ( a2[8] < a1[8] )
    LODWORD(result) = -1;
  else
    LODWORD(result) = a2[8] > a1[8];
  if ( (_DWORD)result )
    result = (unsigned int)result;
  else
    result = a3(*a1, *a2);
  return result;
}

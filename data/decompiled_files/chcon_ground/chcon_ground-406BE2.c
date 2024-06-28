#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406BE2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(*(_QWORD *)a1 + 128LL) < *(_QWORD *)(*(_QWORD *)a2 + 128LL) )
    result = 0xFFFFFFFFLL;
  else
    result = *(_QWORD *)(*(_QWORD *)a2 + 128LL) < *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  return result;
}

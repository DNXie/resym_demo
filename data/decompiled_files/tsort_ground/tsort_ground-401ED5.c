#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401ED5(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( result )
    result = sub_401E1F(*(_QWORD *)(a1 + 16), a2);
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4033C4(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  if ( a2 && *a2 )
    result = (unsigned int)dword_40A0A0[sub_408600(a1, a2, off_40A040, dword_40A0A0, 4LL, off_60C268)];
  else
    result = 2LL;
  return result;
}

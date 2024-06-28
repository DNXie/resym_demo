#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403BAF(const char *a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 24) & 0xF000) != 24576 && (*(_DWORD *)(a2 + 24) & 0xF000) != 0x2000
    || !(unsigned __int8)sub_403645(a1) )
  {
    sub_40370B(a1, (_QWORD *)a2);
  }
}

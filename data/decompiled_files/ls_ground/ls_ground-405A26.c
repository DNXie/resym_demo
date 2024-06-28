#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_405A26(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // al

  v2 = dword_61D6E4 != 2
    && *(_BYTE *)a1 == 46
    && (!dword_61D6E4 || (*(_BYTE *)(a1 + 1) != 46 ? (v1 = 1LL) : (v1 = 2LL), !*(_BYTE *)(a1 + v1)))
    || !dword_61D6E4 && (unsigned __int8)sub_4059CC(qword_61D6F0, (const char *)a1)
    || (unsigned __int8)sub_4059CC(qword_61D6E8, (const char *)a1);
  return v2;
}

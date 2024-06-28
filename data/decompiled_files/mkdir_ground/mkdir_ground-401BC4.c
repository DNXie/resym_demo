#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_401BC4(int a1, int a2, __int64 a3)
{
  return (unsigned __int8)sub_402214(
                            a1,
                            a2,
                            *(_QWORD *)a3,
                            a3,
                            *(_DWORD *)(a3 + 12),
                            (unsigned int)sub_401B06,
                            *(_DWORD *)(a3 + 16),
                            -1,
                            -1,
                            1) == 0;
}

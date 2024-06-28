#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40193A(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  char *v4; // rax

  result = (unsigned int)dword_608268;
  if ( dword_608268 != 2 )
  {
    if ( dword_608268 == 1 || (result = (unsigned __int8)byte_608264, byte_608264) )
    {
      result = (unsigned __int8)byte_608265[a3 - 1] ^ 1u;
      if ( byte_608265[a3 - 1] != 1 )
      {
        if ( byte_608260 )
          result = sub_405168(
                     *(_QWORD *)(a1 + 16),
                     *(_QWORD *)(a1 + 8) - 1LL,
                     *(_QWORD *)(a2 + 16),
                     *(_QWORD *)(a2 + 8) - 1LL);
        else
          result = sub_402C0E(
                     *(_QWORD *)(a1 + 16),
                     *(_QWORD *)(a1 + 8) - 1LL,
                     *(_QWORD *)(a2 + 16),
                     *(_QWORD *)(a2 + 8) - 1LL);
        if ( (int)result > 0 )
        {
          v4 = gettext("file %d is not in sorted order");
          error(dword_608268 == 1, 0, v4, a3);
          result = (int)(a3 - 1);
          byte_608265[result] = 1;
        }
      }
    }
  }
  return result;
}

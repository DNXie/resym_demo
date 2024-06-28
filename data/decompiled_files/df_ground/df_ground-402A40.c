#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_402A40(unsigned __int8 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  __int64 v10; // [rsp+38h] [rbp-8h]

  if ( !sub_402A2E(a2) && a1 != 1 )
    return "-";
  if ( a1 )
    v6 = -(__int64)a2;
  else
    v6 = a2;
  v10 = sub_404FDE(v6, a1 + a3, (unsigned int)dword_618524, a4, a5);
  if ( a1 )
    *(_BYTE *)--v10 = 45;
  return (const char *)v10;
}

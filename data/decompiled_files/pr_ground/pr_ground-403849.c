#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403849(__int64 a1)
{
  __int64 result; // rax

  dword_6103E4 = *(_DWORD *)(a1 + 52);
  if ( dword_6103E4 - dword_6103DC > 0 )
  {
    sub_4040D2((unsigned int)(dword_6103E4 - dword_6103DC));
    dword_6103E4 = 0;
  }
  if ( byte_6103D9 )
    sub_40441D();
  result = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)result )
    result = sub_403F34(a1);
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402D3A(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned int)dword_61D7C0;
  if ( !dword_61D7C0 )
  {
    result = a1;
    dword_61D7C0 = a1;
  }
  return result;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405056(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( (_BYTE)a1 )
  {
    status = 2;
  }
  else
  {
    result = (unsigned int)status;
    if ( !status )
      status = 1;
  }
  return result;
}

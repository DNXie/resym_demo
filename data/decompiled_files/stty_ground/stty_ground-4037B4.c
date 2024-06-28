#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4037B4(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = a1;
  switch ( a1 )
  {
    case 1u:
      return sub_403B87(a2, a3);
    case 0u:
      return sub_40380D(a2);
    case 2u:
      result = sub_403F55(a2);
      break;
  }
  return result;
}

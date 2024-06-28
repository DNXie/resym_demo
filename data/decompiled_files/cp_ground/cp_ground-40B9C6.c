#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B9C6(__int16 a1)
{
  switch ( a1 & 0xF000 )
  {
    case 32768:
      return 45LL;
    case 16384:
      return 100LL;
    case 24576:
      return 98LL;
    case 8192:
      return 99LL;
    case 40960:
      return 108LL;
    case 4096:
      return 112LL;
    case 49152:
      return 115LL;
  }
  return 63LL;
}

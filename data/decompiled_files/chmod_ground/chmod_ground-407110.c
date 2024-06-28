#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407110(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // [rsp+18h] [rbp-4h]

  if ( a2 == 6 )
  {
    v3 = 24576;
  }
  else if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 0xAu:
        v3 = 40960;
        break;
      case 0xCu:
        v3 = 49152;
        break;
      case 8u:
        v3 = 0x8000;
        break;
      default:
        goto LABEL_18;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 2u:
        v3 = 0x2000;
        break;
      case 4u:
        v3 = 0x4000;
        break;
      case 1u:
        v3 = 4096;
        break;
      default:
LABEL_18:
        v3 = 0;
        break;
    }
  }
  result = a1;
  *(_DWORD *)(a1 + 24) = v3;
  return result;
}

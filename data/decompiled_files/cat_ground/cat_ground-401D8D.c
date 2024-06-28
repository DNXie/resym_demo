#include "/share/binary_recovery/clang-parser/defs.hh"
char *sub_401D8D()
{
  char *result; // rax
  _BYTE *v1; // rax
  _BYTE *v2; // [rsp+0h] [rbp-8h]

  v2 = off_60C288;
  while ( 1 )
  {
    result = (char *)(unsigned __int8)*v2;
    *v2 = (_BYTE)result + 1;
    if ( (char)result <= 56 )
      break;
    v1 = v2--;
    *v1 = 48;
    if ( v2 < off_60C280 )
    {
      if ( off_60C280 <= &byte_60C260 )
      {
        byte_60C260 = 62;
      }
      else
      {
        off_60C280 = (char *)off_60C280 - 1;
        *(_BYTE *)off_60C280 = 49;
      }
      result = src;
      if ( off_60C280 < src )
        result = --src;
      return result;
    }
  }
  return result;
}

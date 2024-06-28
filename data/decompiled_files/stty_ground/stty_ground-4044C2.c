#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_4044C2(unsigned __int8 a1)
{
  _BYTE *v2; // [rsp+Ch] [rbp-8h]
  _BYTE *v3; // [rsp+Ch] [rbp-8h]

  if ( !a1 )
    return "<undef>";
  if ( a1 <= 0x1Fu )
  {
    byte_6132CC[0] = 94;
    v2 = &byte_6132CC[2];
    byte_6132CC[1] = a1 + 64;
  }
  else if ( a1 > 0x7Eu )
  {
    if ( a1 == 127 )
    {
      byte_6132CC[0] = 94;
      v2 = &byte_6132CC[2];
      byte_6132CC[1] = 63;
    }
    else
    {
      byte_6132CC[0] = 77;
      v3 = &byte_6132CC[2];
      byte_6132CC[1] = 45;
      if ( a1 <= 0x9Fu )
      {
        *v3 = 94;
        v2 = &byte_6132CC[4];
        byte_6132CC[3] = a1 - 64;
      }
      else if ( a1 == 0xFF )
      {
        *v3 = 94;
        v2 = &byte_6132CC[4];
        byte_6132CC[3] = 63;
      }
      else
      {
        v2 = &byte_6132CC[3];
        byte_6132CC[2] = a1 + 0x80;
      }
    }
  }
  else
  {
    v2 = &byte_6132CC[1];
    byte_6132CC[0] = a1;
  }
  *v2 = 0;
  return byte_6132CC;
}

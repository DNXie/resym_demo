#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40B8C5(__int16 a1, _BYTE *a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  _BYTE *result; // rax

  *a2 = sub_40B81A(a1);
  if ( (a1 & 0x100) != 0 )
    v2 = 114;
  else
    v2 = 45;
  a2[1] = v2;
  if ( (a1 & 0x80) != 0 )
    v3 = 119;
  else
    v3 = 45;
  a2[2] = v3;
  if ( (a1 & 0x800) != 0 )
  {
    if ( (a1 & 0x40) != 0 )
      v4 = 115;
    else
      v4 = 83;
  }
  else if ( (a1 & 0x40) != 0 )
  {
    v4 = 120;
  }
  else
  {
    v4 = 45;
  }
  a2[3] = v4;
  if ( (a1 & 0x20) != 0 )
    v5 = 114;
  else
    v5 = 45;
  a2[4] = v5;
  if ( (a1 & 0x10) != 0 )
    v6 = 119;
  else
    v6 = 45;
  a2[5] = v6;
  if ( (a1 & 0x400) != 0 )
  {
    if ( (a1 & 8) != 0 )
      v7 = 115;
    else
      v7 = 83;
  }
  else if ( (a1 & 8) != 0 )
  {
    v7 = 120;
  }
  else
  {
    v7 = 45;
  }
  a2[6] = v7;
  if ( (a1 & 4) != 0 )
    v8 = 114;
  else
    v8 = 45;
  a2[7] = v8;
  if ( (a1 & 2) != 0 )
    v9 = 119;
  else
    v9 = 45;
  a2[8] = v9;
  if ( (a1 & 0x200) != 0 )
  {
    if ( (a1 & 1) != 0 )
      v10 = 116;
    else
      v10 = 84;
  }
  else if ( (a1 & 1) != 0 )
  {
    v10 = 120;
  }
  else
  {
    v10 = 45;
  }
  a2[9] = v10;
  a2[10] = 32;
  result = a2 + 11;
  a2[11] = 0;
  return result;
}

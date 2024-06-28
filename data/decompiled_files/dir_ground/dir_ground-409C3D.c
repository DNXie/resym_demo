#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409C3D(char a1, __int16 a2, int a3)
{
  bool v3; // al
  bool v4; // al
  bool v5; // al
  bool v6; // al
  bool v7; // al
  bool v8; // al
  unsigned __int8 v10; // [rsp+1Bh] [rbp-1h]

  if ( a1 )
    v3 = (a2 & 0xF000) == 0x8000;
  else
    v3 = a3 == 5;
  if ( v3 )
  {
    if ( a1 && dword_61D6BC == 3 && (a2 & 0x49) != 0 )
      v10 = 42;
    else
      v10 = 0;
  }
  else
  {
    if ( a1 )
    {
      v4 = (a2 & 0xF000) == 0x4000;
    }
    else
    {
      v5 = a3 == 3 || a3 == 9;
      v4 = v5;
    }
    if ( v4 )
    {
      v10 = 47;
    }
    else if ( dword_61D6BC == 1 )
    {
      v10 = 0;
    }
    else
    {
      if ( a1 )
        v6 = (a2 & 0xF000) == 40960;
      else
        v6 = a3 == 6;
      if ( v6 )
      {
        v10 = 64;
      }
      else
      {
        if ( a1 )
          v7 = (a2 & 0xF000) == 4096;
        else
          v7 = a3 == 1;
        if ( v7 )
        {
          v10 = 124;
        }
        else
        {
          if ( a1 )
            v8 = (a2 & 0xF000) == 49152;
          else
            v8 = a3 == 7;
          if ( v8 )
            v10 = 61;
          else
            v10 = 0;
        }
      }
    }
  }
  return v10;
}

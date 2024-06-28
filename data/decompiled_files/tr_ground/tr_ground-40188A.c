#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_40188A(unsigned int a1, unsigned __int8 a2)
{
  int v3; // [rsp+1Ch] [rbp-4h]

  if ( a1 == 5 )
  {
    v3 = (*__ctype_b_loc())[a2] & 0x8000;
  }
  else if ( a1 > 5 )
  {
    if ( a1 == 8 )
    {
      v3 = (*__ctype_b_loc())[a2] & 4;
    }
    else if ( a1 > 8 )
    {
      if ( a1 == 10 )
      {
        v3 = (*__ctype_b_loc())[a2] & 0x100;
      }
      else if ( a1 < 0xA )
      {
        v3 = (*__ctype_b_loc())[a2] & 0x2000;
      }
      else
      {
        if ( a1 != 11 )
          abort();
        v3 = (*__ctype_b_loc())[a2] & 0x1000;
      }
    }
    else if ( a1 == 6 )
    {
      v3 = (*__ctype_b_loc())[a2] & 0x200;
    }
    else
    {
      v3 = (*__ctype_b_loc())[a2] & 0x4000;
    }
  }
  else if ( a1 == 2 )
  {
    v3 = (*__ctype_b_loc())[a2] & 1;
  }
  else if ( a1 > 2 )
  {
    if ( a1 == 3 )
      v3 = (*__ctype_b_loc())[a2] & 2;
    else
      v3 = (*__ctype_b_loc())[a2] & 0x800;
  }
  else if ( a1 )
  {
    v3 = (*__ctype_b_loc())[a2] & 0x400;
  }
  else
  {
    v3 = (*__ctype_b_loc())[a2] & 8;
  }
  return v3 != 0;
}

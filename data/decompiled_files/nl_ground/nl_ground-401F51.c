#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F51(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  while ( 1 )
  {
    result = sub_402B5D(&unk_609720, a1);
    if ( !result )
      break;
    v1 = sub_401E58();
    if ( v1 == 1 )
    {
      sub_401C39();
    }
    else if ( v1 )
    {
      if ( v1 == 2 )
      {
        sub_401C62();
      }
      else if ( v1 == 3 )
      {
        sub_401C8B();
      }
    }
    else
    {
      sub_401BF7();
    }
  }
  return result;
}

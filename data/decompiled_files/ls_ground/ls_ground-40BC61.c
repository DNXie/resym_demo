#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40BC61(_BYTE **a1)
{
  char v2; // [rsp+17h] [rbp-9h]
  _BYTE *v3; // [rsp+18h] [rbp-8h]

  v3 = 0LL;
  v2 = 0;
  while ( **a1 )
  {
    if ( v2 )
    {
      v2 = 0;
      if ( (unsigned __int8)sub_4156D6((unsigned int)(char)**a1) != 1 && **a1 != 126 )
        v3 = 0LL;
    }
    else if ( **a1 == 46 )
    {
      v2 = 1;
      if ( !v3 )
        v3 = *a1;
    }
    else if ( (unsigned __int8)sub_41569C((unsigned int)(char)**a1) != 1 && **a1 != 126 )
    {
      v3 = 0LL;
    }
    ++*a1;
  }
  return v3;
}

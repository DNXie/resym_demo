#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4056F8(_BYTE *a1, _BYTE *a2, char a3)
{
  _BYTE *v4; // [rsp+4h] [rbp-10h]
  _BYTE *v5; // [rsp+Ch] [rbp-8h]

  v5 = a1;
  v4 = a2;
  if ( *a1 == a3 && *a2 == a3 )
  {
    while ( *++v5 == *++v4 )
    {
      if ( (unsigned int)((char)*v5 - 48) > 9 )
        return 0LL;
    }
    if ( (unsigned int)((char)*v5 - 48) <= 9 && (unsigned int)((char)*v4 - 48) <= 9 )
      return (unsigned int)((char)*v5 - (char)*v4);
    if ( (unsigned int)((char)*v5 - 48) > 9 )
    {
      if ( (unsigned int)((char)*v4 - 48) > 9 )
        return 0LL;
LABEL_21:
      while ( *v4 == 48 )
        ++v4;
      return (unsigned int)-((unsigned int)((char)*v4 - 48) <= 9);
    }
  }
  else
  {
    v5 = a1 + 1;
    if ( *a1 != a3 )
    {
      v4 = a2 + 1;
      if ( *a2 != a3 )
        return 0LL;
      goto LABEL_21;
    }
  }
  while ( *v5 == 48 )
    ++v5;
  return (unsigned int)((char)*v5 - 48) <= 9;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4052A7(_BYTE *a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int8 *v2; // rax
  __int64 result; // rax
  unsigned __int8 v4; // [rsp+16h] [rbp-12h]
  int v5; // [rsp+18h] [rbp-10h]
  unsigned int v6; // [rsp+1Ch] [rbp-Ch]
  unsigned __int8 *v7; // [rsp+20h] [rbp-8h]

  v7 = &a1[*a1 == 45];
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v1 = v7++;
      v4 = *v1;
      if ( (unsigned int)*v1 - 48 > 9 )
        break;
      v5 |= v4 - 48;
    }
  }
  while ( v4 == dword_61D5C4 );
  if ( v4 == dword_61D5C0 )
  {
    while ( 1 )
    {
      v2 = v7++;
      v4 = *v2;
      if ( (unsigned int)*v2 - 48 > 9 )
        break;
      v5 |= v4 - 48;
    }
  }
  if ( !v5 )
    return 0LL;
  v6 = byte_418AC0[v4];
  if ( *a1 == 45 )
    result = -v6;
  else
    result = v6;
  return result;
}

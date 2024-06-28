#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40544B(__int64 a1, char *a2, char *a3)
{
  int v6; // [rsp+2Ch] [rbp-14h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  char *v8; // [rsp+38h] [rbp-8h]

  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_QWORD *)(a1 + 16);
  do
  {
    strcpy(a3, a2);
    while ( 1 )
    {
      if ( sub_408B18(v7, a3) )
        return (v6 & 0x20000000) == 0;
      if ( (v6 & 8) == 0 )
        break;
      v8 = strrchr(a3, 47);
      if ( !v8 )
        break;
      *v8 = 0;
    }
    if ( (v6 & 0x40000000) != 0 )
      break;
    a2 = strchr(a2, 47);
    if ( a2 )
      ++a2;
  }
  while ( a2 );
  return (v6 & 0x20000000) != 0;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405536(__int64 *a1, char *a2)
{
  int v3; // eax
  size_t v4; // rax
  unsigned __int8 v5; // [rsp+1Eh] [rbp-12h]
  unsigned __int8 v6; // [rsp+1Fh] [rbp-11h]
  __int64 i; // [rsp+20h] [rbp-10h]
  char *ptr; // [rsp+28h] [rbp-8h]

  ptr = 0LL;
  if ( !*a1 )
    return 0LL;
  v5 = (*(_DWORD *)(*a1 + 12) & 0x20000000) != 0;
  for ( i = *a1; i; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 8);
    if ( v3 )
    {
      if ( v3 != 1 )
        abort();
      v6 = sub_405391(i, a2);
    }
    else
    {
      if ( !ptr )
      {
        v4 = strlen(a2);
        ptr = (char *)sub_40EB4C(v4 + 1);
      }
      v6 = sub_40544B(i, a2, ptr);
    }
    if ( v6 != v5 )
    {
      v5 = v6;
      break;
    }
  }
  free(ptr);
  return v5;
}

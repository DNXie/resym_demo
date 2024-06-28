#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4048C5(int a1, char *a2)
{
  unsigned int i; // [rsp+1Ch] [rbp-14h]
  int v4; // [rsp+20h] [rbp-10h]
  int v5; // [rsp+24h] [rbp-Ch]

  for ( i = 0; i <= 0x22; ++i )
  {
    if ( dword_607220[3 * i] == a1 )
    {
      strcpy(a2, (const char *)(12LL * i + 6320676));
      return 0LL;
    }
  }
  v4 = __libc_current_sigrtmin();
  v5 = __libc_current_sigrtmax();
  if ( v4 > a1 || a1 > v5 )
    return 0xFFFFFFFFLL;
  if ( (v5 - v4) / 2 + v4 < a1 )
  {
    if ( v5 == a1 )
      sprintf(a2, "RTMAX");
    else
      sprintf(a2, "RTMAX-%d", (unsigned int)(v5 - a1));
  }
  else if ( a1 == v4 )
  {
    sprintf(a2, "RTMIN");
  }
  else
  {
    sprintf(a2, "RTMIN+%d", (unsigned int)(a1 - v4));
  }
  return 0LL;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4072D5(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  time_t timer; // [rsp+20h] [rbp-10h] BYREF
  struct tm *v6; // [rsp+28h] [rbp-8h]

  if ( a3 == 1 )
  {
    *(_DWORD *)(a1 + 20) = *a2;
    if ( (int)*a2 <= 68 )
    {
      if ( (a4 & 0x10) != 0 )
        return 1LL;
      *(_DWORD *)(a1 + 20) += 100;
    }
  }
  else if ( a3 )
  {
    if ( a3 != 2 )
      abort();
    if ( (a4 & 4) == 0 )
      return 1LL;
    *(_DWORD *)(a1 + 20) = 100 * *a2 + a2[1] - 1900;
  }
  else
  {
    time(&timer);
    v6 = localtime(&timer);
    if ( !v6 )
      return 1LL;
    *(_DWORD *)(a1 + 20) = v6->tm_year;
  }
  return 0LL;
}

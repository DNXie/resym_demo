#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_415667(unsigned __int64 a1)
{
  _QWORD *i; // [rsp+18h] [rbp-18h]

  if ( a1 && *(_DWORD *)(a1 - 4) == 336984906 )
  {
    for ( i = (_QWORD *)(8 * (a1 % 0x101) + 6403584); *i; i = (_QWORD *)(*i - 16LL) )
    {
      if ( *i == a1 )
      {
        *i = *(_QWORD *)(a1 - 16);
        free((void *)(a1 - 16));
        return;
      }
    }
  }
}

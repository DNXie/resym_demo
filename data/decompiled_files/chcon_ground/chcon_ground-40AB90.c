#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40AB90(__int64 a1)
{
  if ( *(int *)a1 >= 0 )
    close(*(_DWORD *)a1);
  free(*(void **)(a1 + 8));
}

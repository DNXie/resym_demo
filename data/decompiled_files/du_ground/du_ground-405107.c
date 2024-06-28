#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_405107(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
  {
    if ( v1 == 1 )
      free(*(void **)(a1 + 16));
  }
  else
  {
    sub_4093BC(*(_QWORD *)(a1 + 16));
  }
  free((void *)a1);
}

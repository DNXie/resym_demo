#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402362(__int64 a1)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0LL; *(_QWORD *)(a1 + 8) > i; ++i )
  {
    sub_401CB6(*(_QWORD *)(8 * i + *(_QWORD *)(a1 + 16)));
    free(*(void **)(8 * i + *(_QWORD *)(a1 + 16)));
  }
  free(*(void **)(a1 + 16));
}

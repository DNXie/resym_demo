#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402592(__int64 a1)
{
  __int64 v1; // r12
  char *v2; // rbx
  int *v3; // rax

  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 9) = 1;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 5;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 25) = 0;
  *(_BYTE *)(a1 + 26) = 1;
  *(_QWORD *)(a1 + 16) = sub_414440(&unk_61B410);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v1 = sub_40D278(&unk_415840);
    v2 = gettext("failed to get attributes of %s");
    v3 = __errno_location();
    error(1, *v3, v2, v1);
  }
}

#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40989A(__int64 a1, FILE *a2, char *a3)
{
  int result; // eax

  if ( !byte_61DA02 )
    goto LABEL_5;
  if ( !qword_61DB80 || (result = sub_407AC9((unsigned __int8 **)a1, (unsigned __int8 **)&qword_61DB80)) != 0 )
  {
    qword_61DB80 = *(_QWORD *)a1;
    qword_61DB88 = *(_QWORD *)(a1 + 8);
    qword_61DB90 = *(_QWORD *)(a1 + 16);
    qword_61DB98 = *(_QWORD *)(a1 + 24);
LABEL_5:
    result = sub_407C0F((void **)a1, a2, a3);
  }
  return result;
}

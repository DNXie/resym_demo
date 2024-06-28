#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4022AD(unsigned __int8 *a1, __int64 a2, char *a3, __int64 a4)
{
  char *v4; // rbx
  char *v5; // rbx
  char v6; // r12
  char v7; // al
  char *v8; // rbx
  char v9; // r12
  char v10; // al
  char v11; // al
  char *v12; // rbx
  char v13; // al

  while ( a2 )
  {
    if ( !a4 )
      break;
    v4 = a3++;
    *v4 = byte_406240[(unsigned __int8)sub_40229E(*a1) >> 2];
    if ( !--a4 )
      break;
    v5 = a3++;
    v6 = 16 * sub_40229E(*a1);
    v7 = --a2 ? (unsigned __int8)sub_40229E(a1[1]) >> 4 : 0;
    *v5 = byte_406240[(v6 + v7) & 0x3F];
    if ( !--a4 )
      break;
    v8 = a3++;
    if ( a2 )
    {
      v9 = 4 * sub_40229E(a1[1]);
      v10 = --a2 ? (unsigned __int8)sub_40229E(a1[2]) >> 6 : 0;
      v11 = byte_406240[(v9 + v10) & 0x3F];
    }
    else
    {
      v11 = 61;
    }
    *v8 = v11;
    if ( !--a4 )
      break;
    v12 = a3++;
    v13 = a2 ? byte_406240[sub_40229E(a1[2]) & 0x3F] : 61;
    *v12 = v13;
    if ( !--a4 )
      break;
    if ( a2 )
      --a2;
    if ( a2 )
      a1 += 3;
  }
  if ( a4 )
    *a3 = 0;
}

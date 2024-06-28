#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405E6B(int a1, __int64 a2, _QWORD *a3)
{
  char *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  char *v8; // rax
  char v10; // [rsp+20h] [rbp-30h]
  char v11; // [rsp+21h] [rbp-2Fh]
  char v12; // [rsp+22h] [rbp-2Eh]
  bool v13; // [rsp+23h] [rbp-2Dh]
  int v14; // [rsp+24h] [rbp-2Ch]
  _BYTE *v15; // [rsp+28h] [rbp-28h]
  _BYTE *v16; // [rsp+30h] [rbp-20h]
  _BYTE *v17; // [rsp+38h] [rbp-18h]

  v14 = 10;
  v11 = 1;
  v12 = 0;
  if ( a1 != 2
    && (a1 != 3 || **(_BYTE **)(a2 + 16) == 45 && *(_BYTE *)(*(_QWORD *)(a2 + 16) + 1LL))
    && (a1 <= 2 || a1 > 4 || strcmp(*(const char **)(a2 + 16), "--")) )
  {
    return 0LL;
  }
  v13 = (int)sub_408E12() <= 200111;
  v4 = *(char **)(a2 + 8);
  v15 = v4 + 1;
  v5 = *v4;
  if ( v5 == 43 )
  {
    if ( !v13 )
      return 0LL;
    v10 = 1;
  }
  else
  {
    if ( v5 != 45 )
      return 0LL;
    if ( !v13 && !v15[*v15 == 99] )
      return 0LL;
    v10 = 0;
  }
  v16 = v15;
  while ( (unsigned int)((char)*v15 - 48) <= 9 )
    ++v15;
  v17 = v15;
  v6 = (char)*v15;
  switch ( v6 )
  {
    case 'c':
      goto LABEL_26;
    case 'l':
LABEL_27:
      ++v15;
      break;
    case 'b':
      v14 = 5120;
LABEL_26:
      v11 = 0;
      goto LABEL_27;
  }
  if ( *v15 == 102 )
  {
    v12 = 1;
    ++v15;
  }
  if ( *v15 )
    return 0LL;
  if ( v16 == v17 )
  {
    *a3 = v14;
  }
  else if ( (sub_40BA18(v16, 0LL, 10LL, a3, "b") & 0xFFFFFFFD) != 0 )
  {
    v7 = sub_408FA1(*(_QWORD *)(a2 + 8));
    v8 = gettext("number in %s is too large");
    error(1, 0, v8, v7);
  }
  byte_61031F = v10;
  byte_61031D = v11;
  byte_61031E = v12;
  return 1LL;
}

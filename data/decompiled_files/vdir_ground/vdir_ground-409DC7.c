#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409DC7(__int64 a1, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  unsigned int v7; // [rsp+14h] [rbp-2Ch]
  int v8; // [rsp+18h] [rbp-28h]
  int v9; // [rsp+1Ch] [rbp-24h]
  __int64 i; // [rsp+20h] [rbp-20h]
  char *s; // [rsp+28h] [rbp-18h]
  char *sa; // [rsp+28h] [rbp-18h]
  size_t v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+38h] [rbp-8h]

  if ( a2 )
  {
    s = *(char **)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 164);
    if ( *(_BYTE *)(a1 + 177) )
      v2 = 0;
    else
      v2 = -1;
    v9 = v2;
  }
  else
  {
    s = *(char **)a1;
    if ( byte_61D650 && *(_BYTE *)(a1 + 177) )
      v3 = *(_DWORD *)(a1 + 164);
    else
      v3 = *(_DWORD *)(a1 + 40);
    LOWORD(v8) = v3;
    v9 = *(unsigned __int8 *)(a1 + 177);
  }
  if ( v9 == -1 && qword_61D468 )
  {
    v7 = 12;
  }
  else if ( *(_BYTE *)(a1 + 176) != 1 )
  {
    v7 = dword_61D540[*(unsigned int *)(a1 + 160)];
  }
  else
  {
    switch ( v8 & 0xF000 )
    {
      case 32768:
        v7 = 5;
        if ( (v8 & 0x800) != 0 && sub_402C5C(0x10u) )
        {
          v7 = 16;
        }
        else if ( (v8 & 0x400) != 0 && sub_402C5C(0x11u) )
        {
          v7 = 17;
        }
        else if ( sub_402C5C(0x15u) && *(_BYTE *)(a1 + 184) )
        {
          v7 = 21;
        }
        else if ( (v8 & 0x49) != 0 && sub_402C5C(0xEu) )
        {
          v7 = 14;
        }
        else if ( *(_QWORD *)(a1 + 32) > 1uLL && sub_402C5C(0x16u) )
        {
          v7 = 22;
        }
        break;
      case 16384:
        v7 = 6;
        if ( (v8 & 0x200) != 0 && (v8 & 2) != 0 && sub_402C5C(0x14u) )
        {
          v7 = 20;
        }
        else if ( (v8 & 2) != 0 && sub_402C5C(0x13u) )
        {
          v7 = 19;
        }
        else if ( (v8 & 0x200) != 0 && sub_402C5C(0x12u) )
        {
          v7 = 18;
        }
        break;
      case 40960:
        if ( !v9 && (!strncmp(off_61D418, "target", 6uLL) || qword_61D478) )
          v4 = 13;
        else
          v4 = 7;
        v7 = v4;
        break;
      case 4096:
        v7 = 8;
        break;
      case 49152:
        v7 = 9;
        break;
      case 24576:
        v7 = 10;
        break;
      case 8192:
        v7 = 11;
        break;
      default:
        v7 = 13;
        break;
    }
  }
  i = 0LL;
  if ( v7 == 5 )
  {
    v13 = strlen(s);
    sa = &s[v13];
    for ( i = qword_61D6C8;
          i && (*(_QWORD *)i > v13 || strncmp(&sa[-*(_QWORD *)i], *(const char **)(i + 8), *(_QWORD *)i));
          i = *(_QWORD *)(i + 32) )
    {
      ;
    }
  }
  if ( i )
    v5 = i + 16;
  else
    v5 = 16LL * v7 + 6411168;
  v14 = v5;
  if ( !*(_QWORD *)(v5 + 8) )
    return 0LL;
  if ( sub_402C5C(4u) )
    sub_402CE3();
  sub_40A1D5(qword_61D3A0);
  sub_40A1D5(v14);
  sub_40A1D5(&qword_61D3B0);
  return 1LL;
}

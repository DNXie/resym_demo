#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4050E8(__int64 a1, const char *a2, unsigned int a3, _DWORD *a4, char a5, __int64 a6)
{
  int v6; // eax
  unsigned __int16 v7; // ax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  __int64 result; // rax
  __int64 v12; // r12
  char *v13; // rbx
  int *v14; // rax
  __uid_t owner; // [rsp+3Ch] [rbp-34h]
  __gid_t group; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+44h] [rbp-2Ch]
  unsigned int v19; // [rsp+4Ch] [rbp-24h]
  int v20; // [rsp+50h] [rbp-20h]
  int v21; // [rsp+58h] [rbp-18h]

  owner = a4[7];
  group = a4[8];
  if ( a5 != 1
    && (*(_BYTE *)(a1 + 29) || *(_BYTE *)(a1 + 24) || *(_BYTE *)(a1 + 40))
    && ((v18 = *(_DWORD *)(a6 + 24), !*(_BYTE *)(a1 + 29)) && !*(_BYTE *)(a1 + 24) ? (v6 = *(_DWORD *)(a1 + 16)) : (v6 = a4[6]),
        (v19 = (unsigned __int16)v18 & (unsigned __int16)v6 & 0x1C0,
         v7 = ~(_WORD)v6,
         HIBYTE(v7) |= 0xEu,
         ((unsigned __int16)v18 & v7 & 0xFFF) != 0)
     && (unsigned int)sub_40A092(a2, a3, v19)) )
  {
    if ( (unsigned __int8)sub_40965A(a1) != 1 )
    {
      v8 = sub_40D278(a2);
      v9 = gettext("clearing permissions for %s");
      v10 = __errno_location();
      error(0, *v10, v9, v8);
    }
    result = (unsigned int)-*(unsigned __int8 *)(a1 + 33);
  }
  else
  {
    if ( a3 == -1 )
    {
      if ( !lchown(a2, owner, group) )
        return 1LL;
      if ( *__errno_location() == 1 || *__errno_location() == 22 )
      {
        v21 = *__errno_location();
        lchown(a2, 0xFFFFFFFF, group);
        *__errno_location() = v21;
      }
    }
    else
    {
      if ( !fchown(a3, owner, group) )
        return 1LL;
      if ( *__errno_location() == 1 || *__errno_location() == 22 )
      {
        v20 = *__errno_location();
        fchown(a3, 0xFFFFFFFF, group);
        *__errno_location() = v20;
      }
    }
    if ( (unsigned __int8)sub_409616(a1) != 1
      && (v12 = sub_40D278(a2),
          v13 = gettext("failed to preserve ownership for %s"),
          v14 = __errno_location(),
          error(0, *v14, v13, v12),
          *(_BYTE *)(a1 + 33)) )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  return result;
}

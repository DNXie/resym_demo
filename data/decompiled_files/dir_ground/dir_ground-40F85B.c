#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40F85B(__int64 *a1, unsigned __int64 a2, _QWORD *a3, __int64 (__fastcall *a4)(__int64, __int64))
{
  int i; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *dest; // [rsp+8h] [rbp-58h]
  unsigned __int64 v10; // [rsp+20h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-38h]
  unsigned __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]

  dest = a3;
  v10 = 0LL;
  v11 = a2 >> 1;
  v12 = a2 >> 1;
  sub_40FA09(&a1[a2 >> 1], a2 - (a2 >> 1), a3, a4);
  sub_40FA09(a1, a2 >> 1, dest, a4);
  v13 = *a1;
  v14 = a1[a2 >> 1];
  for ( i = a4(*a1, v14); ; i = a4(v13, v14) )
  {
    while ( i > 0 )
    {
      v6 = dest++;
      *v6 = v14;
      if ( ++v12 == a2 )
        return memcpy(dest, &a1[v10], 8 * (v11 - v10));
      v14 = a1[v12];
      i = a4(v13, v14);
    }
    v5 = dest++;
    *v5 = v13;
    if ( ++v10 == v11 )
      break;
    v13 = a1[v10];
  }
  v10 = v12;
  v11 = a2;
  return memcpy(dest, &a1[v10], 8 * (v11 - v10));
}

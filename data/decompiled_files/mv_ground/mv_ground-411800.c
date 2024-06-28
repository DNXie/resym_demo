#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_411800(__int64 a1, __int64 a2)
{
  __int64 *v2; // [rsp+18h] [rbp-38h]
  void *ptr; // [rsp+20h] [rbp-30h]
  __int64 *v4; // [rsp+28h] [rbp-28h]
  __int64 v5[4]; // [rsp+30h] [rbp-20h] BYREF

  v2 = (__int64 *)(a2 + 120);
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    v5[0] = *v2;
    v5[1] = *(_QWORD *)(a2 + 128);
    ptr = (void *)sub_40CD27(*(_QWORD *)(a1 + 88), (__int64)v5);
    if ( !ptr )
      abort();
    free(ptr);
  }
  else
  {
    v4 = *(__int64 **)(a2 + 8);
    if ( v4 && v4[11] >= 0 )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) )
        abort();
      if ( **(_QWORD **)(a1 + 88) == *(_QWORD *)(a2 + 128) && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) == *v2 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) = v4[15];
        **(_QWORD **)(a1 + 88) = v4[16];
      }
    }
  }
}

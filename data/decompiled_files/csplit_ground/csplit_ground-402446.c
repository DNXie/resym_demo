#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402446()
{
  _QWORD *v1; // [rsp+0h] [rbp-10h]
  __int64 v2; // [rsp+8h] [rbp-8h]

  if ( ptr )
  {
    sub_402177((__int64)ptr);
    free(ptr);
    ptr = 0LL;
  }
  if ( !qword_60B320 && !sub_40224A() )
    return 0LL;
  if ( *(_QWORD *)(qword_60B320 + 24) > (unsigned __int64)qword_60B340 )
    qword_60B340 = *(_QWORD *)(qword_60B320 + 24);
  ++*(_QWORD *)(qword_60B320 + 24);
  v1 = *(_QWORD **)(qword_60B320 + 56);
  v2 = (__int64)&v1[2 * ++v1[2] + 1];
  if ( v1[2] == *v1 )
  {
    *(_QWORD *)(qword_60B320 + 56) = v1[163];
    if ( !*(_QWORD *)(qword_60B320 + 56) || !**(_QWORD **)(qword_60B320 + 56) )
    {
      ptr = (void *)qword_60B320;
      qword_60B320 = *(_QWORD *)(qword_60B320 + 64);
    }
  }
  return v2;
}

#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_413E7E(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  _obstack_begin((struct obstack *)(a1 + 24), 0, 0, (void *(*)(__int64))malloc, free);
  _obstack_begin((struct obstack *)(a1 + 112), 0, 0, (void *(*)(__int64))malloc, free);
  return _obstack_begin((struct obstack *)(a1 + 200), 0, 0, (void *(*)(__int64))malloc, free);
}

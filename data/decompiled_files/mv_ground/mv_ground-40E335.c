#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40E335()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_61B390;
  for ( i = 1; i < dword_61B370; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_61B8C0 )
  {
    free(ptr[1]);
    qword_61B380 = 256LL;
    off_61B388 = &unk_61B8C0;
  }
  if ( ptr != (void **)&qword_61B380 )
  {
    free(ptr);
    off_61B390 = (__int64)&qword_61B380;
  }
  dword_61B370 = 1;
}

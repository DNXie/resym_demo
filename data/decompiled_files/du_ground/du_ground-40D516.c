#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40D516()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_61B370;
  for ( i = 1; i < dword_61B350; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_61B4E0 )
  {
    free(ptr[1]);
    qword_61B360 = 256LL;
    off_61B368 = &unk_61B4E0;
  }
  if ( ptr != (void **)&qword_61B360 )
  {
    free(ptr);
    off_61B370 = &qword_61B360;
  }
  dword_61B350 = 1;
}

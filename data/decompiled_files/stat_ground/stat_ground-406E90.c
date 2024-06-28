#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_406E90()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_616330;
  for ( i = 1; i < dword_616310; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6164A0 )
  {
    free(ptr[1]);
    qword_616320 = 256LL;
    off_616328 = &unk_6164A0;
  }
  if ( ptr != (void **)&qword_616320 )
  {
    free(ptr);
    off_616330 = &qword_616320;
  }
  dword_616310 = 1;
}

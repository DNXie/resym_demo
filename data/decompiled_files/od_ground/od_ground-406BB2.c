#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_406BB2()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_612260;
  for ( i = 1; i < dword_612240; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_612460 )
  {
    free(ptr[1]);
    qword_612250 = 256LL;
    off_612258 = &unk_612460;
  }
  if ( ptr != (void **)&qword_612250 )
  {
    free(ptr);
    off_612260 = &qword_612250;
  }
  dword_612240 = 1;
}

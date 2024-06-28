#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40421B()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_610280;
  for ( i = 1; i < dword_610260; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6103C0 )
  {
    free(ptr[1]);
    qword_610270 = 256LL;
    off_610278 = &unk_6103C0;
  }
  if ( ptr != (void **)&qword_610270 )
  {
    free(ptr);
    off_610280 = &qword_610270;
  }
  dword_610260 = 1;
}

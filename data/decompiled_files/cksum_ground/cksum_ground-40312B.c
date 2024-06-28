#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40312B()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6071D0;
  for ( i = 1; i < dword_6071B0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_607280 )
  {
    free(ptr[1]);
    qword_6071C0 = 256LL;
    off_6071C8 = &unk_607280;
  }
  if ( ptr != (void **)&qword_6071C0 )
  {
    free(ptr);
    off_6071D0 = &qword_6071C0;
  }
  dword_6071B0 = 1;
}

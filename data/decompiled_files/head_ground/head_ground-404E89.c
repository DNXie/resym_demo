#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_404E89()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_609210;
  for ( i = 1; i < dword_6091F0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6092E0 )
  {
    free(ptr[1]);
    qword_609200 = 256LL;
    off_609208 = &unk_6092E0;
  }
  if ( ptr != (void **)&qword_609200 )
  {
    free(ptr);
    off_609210 = &qword_609200;
  }
  dword_6091F0 = 1;
}

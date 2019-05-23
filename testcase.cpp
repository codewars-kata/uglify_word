#include <string.h>
#include <criterion/criterion.h>

char * uglify_word(const char *);

Test(add_test, should_add_integers) {
	cr_assert_eq(strcmp(uglify_word("aaa"), "AaA"), 0);
	cr_assert_eq(strcmp(uglify_word("AAA"), "AaA"), 0);
	cr_assert_eq(strcmp(uglify_word("BbB"), "BbB"), 0);
	cr_assert_eq(strcmp(uglify_word("aaa-bbb-ccc"), "AaA-BbB-CcC"), 0);
	cr_assert_eq(strcmp(uglify_word("AaA-BbB-CcC"), "AaA-BbB-CcC"), 0);
	cr_assert_eq(strcmp(uglify_word("eeee-ffff-gggg"), "EeEe-FfFf-GgGg"), 0);
	cr_assert_eq(strcmp(uglify_word("EeEe-FfFf-GgGg"), "EeEe-FfFf-GgGg"), 0);
	cr_assert_eq(strcmp(uglify_word("qwe123asdf456zxc"), "QwE123AsDf456ZxC"), 0);
	cr_assert_eq(strcmp(uglify_word("Hello World"), "HeLlO WoRlD"), 0);
}

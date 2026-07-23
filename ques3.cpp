// Summary
// Declaration	Can modify characters?	Valid in modern C++?
// const char *str = "Hello";	❌ No	✅ Yes
// char *str = "Hello";	Claims yes, but actually no	❌ No (ill-formed in modern C++)
// char str[] = "Hello";	✅ Yes	✅ Yes
// Rule to remember
// String literal → use const char* (or, better yet, std::string in modern C++).
// Need to modify the text → use char[] or std::string.
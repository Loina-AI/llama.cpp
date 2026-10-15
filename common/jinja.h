#ifndef LLAMA_JINJA_H
#define LLAMA_JINJA_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct llama_jinja llama_jinja;

/* Borrowed source for llama.cpp's default ChatML formatter. */
const char * llama_jinja_default_template(void);

/* Errors are copied into the caller's buffer. Rendered strings use malloc(),
 * so C callers release them with free(). Templates may be reused. */
llama_jinja * llama_jinja_create(const char * source, char * error, size_t capacity);
char * llama_jinja_render(const llama_jinja * tmpl, const char * context_json, char * error, size_t capacity);
void llama_jinja_free(llama_jinja * tmpl);

#ifdef __cplusplus
}
#endif
#endif

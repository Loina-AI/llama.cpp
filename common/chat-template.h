#ifndef LLAMA_CHAT_TEMPLATE_H
#define LLAMA_CHAT_TEMPLATE_H

#define LLAMA_CHATML_TEMPLATE_SRC                                                       \
    "{%- for message in messages -%}\n"                                                \
    "  {{- '<|im_start|>' + message.role + '\n' + message.content + '<|im_end|>\n' -}}\n" \
    "{%- endfor -%}\n"                                                                 \
    "{%- if add_generation_prompt -%}\n"                                               \
    "  {{- '<|im_start|>assistant\n' -}}\n"                                              \
    "{%- endif -%}"

#endif

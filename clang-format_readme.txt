# format all c files
clang-format -style=file -i */*.c

# generate config
clang-format -style=Microsoft -dump-config > .clang-format

# format all, not verified yet
#!/bin/sh
find . -iname *.h -o -iname *.c -o -iname *.cpp -o -iname *.hpp \
    | xargs clang-format -style=file -i -fallback-style=none
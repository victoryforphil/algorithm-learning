cmake_minimum_required (VERSION 2.8.11)
project (alg-learning)

# Recurse into the "Hello" and "Demo" subdirectories. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (lib)
add_subdirectory (chapters)
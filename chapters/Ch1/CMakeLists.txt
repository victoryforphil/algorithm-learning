# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
add_executable (CH1_Stats Stats.c)
add_executable (CH1_QueueTest QueueTest.c)
# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
target_link_libraries (CH1_Stats LINK_PUBLIC ALGLib)
target_link_libraries (CH1_QueueTest LINK_PUBLIC ALGLib)
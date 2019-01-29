enable_testing()

add_executable(catch catch.cpp)
add_test(NAME catch COMMAND $<TARGET_FILE:catch> --reporter=xml -s --out=${CMAKE_CURRENT_BINARY_DIR}/catch_log.xml)

add_executable(catch2 catch2.cpp)
add_test(NAME catch2 COMMAND $<TARGET_FILE:catch> --reporter=xml -s --out=${CMAKE_CURRENT_BINARY_DIR}/catch2_log.xml)

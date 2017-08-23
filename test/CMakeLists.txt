project(test)

add_subdirectory(Lista)
add_subdirectory(01_Invierte)
add_subdirectory(02_Insertar)
add_subdirectory(03_Eliminar)
add_subdirectory(04_Union)
add_subdirectory(05_CircList)
add_subdirectory(06_insertAfter)

add_subdirectory(lib/gtest-1.8.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(run_test
        ${Lista_SOURCE_FILES}
        ${01_Invierte_SOURCE_FILES}
        ${02_Insertar_SOURCE_FILES}
        ${03_Eliminar_SOURCE_FILES}
        ${04_Union_SOURCE_FILES}
        ${05_CircList_SOURCE_FILES}
        ${06_insertAfter_SOURCE_FILES}
        )

target_link_libraries(run_test gtest gtest_main)
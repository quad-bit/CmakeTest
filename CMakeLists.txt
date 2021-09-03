cmake_minimum_required ( VERSION 3.12)
project (CmakeIntro)


message ("using c++ 14")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "../install" CACHE PATH "..." FORCE)
endif()

add_subdirectory(src/Toolkit Projects/Toolkit)
add_subdirectory(src/MainApp Projects/MainApp)

add_custom_command(
    OUTPUT
        "${CMAKE_CURRENT_BINARY_DIR}/generated_file.txt"
    COMMENT
        "This is generating my custom command"
    COMMAND
        ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_BINARY_DIR}/generated_file.txt
    #DEPENDS
    #    ${CMAKE_CURRENT_SOURCE_DIR}/source_file
)

#install(PROGRAMS "./test.bat" DESTINATION ${CMAKE_INSTALL_PREFIX})
set(MAKE_CMD "C:\\Program Files\\Microsoft VS Code\\code.exe")
install(CODE "execute_process(COMMAND ${MAKE_CMD})")

# add_custom_target(my_custom_target ALL
#     DEPENDS
#         "${CMAKE_CURRENT_BINARY_DIR}/generated_file.txt"
# )

# set(MAKE_CMD "C:\\Program Files\\Microsoft VS Code\\code.exe")
# MESSAGE("COMMAND: ${MAKE_CMD} ${CMAKE_CURRENT_BINARY_DIR}/generated_file.txt")
# execute_process(COMMAND ${MAKE_CMD} ${CMAKE_CURRENT_BINARY_DIR}/generated_file.txt
#    RESULT_VARIABLE CMD_ERROR
#       OUTPUT_FILE CMD_OUTPUT)

# MESSAGE( STATUS "CMD_ERROR:" ${CMD_ERROR})
# MESSAGE( STATUS "CMD_OUTPUT:" ${CMD_OUTPUT})




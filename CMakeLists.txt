cmake_minimum_required(VERSION 3.15)
project(ABFarm)

find_package(PkgConfig REQUIRED)
#pkg_check_modules(ALPACA REQUIRED alpaca)
#pkg_check_modules(BANDICOOT REQUIRED bandicoot)
pkg_check_modules(ABCOUNT REQUIRED abcount)

add_executable(abfarm main.cpp)
#target_include_directories(abfarm PUBLIC ${ALPACA_INCLUDE_DIRS} ${BANDICOOT_INCLUDE_DIRS} ${ABCOUNT_INCLUDE_DIRS})
#target_link_libraries(abfarm LINK_PUBLIC abcount ${ALPACA_LIBRARIES} ${BANDICOOT_LIBRARIES} ${ABCOUNT_LIBRARIES})

target_include_directories(abfarm PUBLIC ${ABCOUNT_INCLUDE_DIRS})
target_link_libraries(abfarm LINK_PUBLIC abcount ${ABCOUNT_LIBRARIES})

include(GNUInstallDirs)
install(TARGETS abfarm
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

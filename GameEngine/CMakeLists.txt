# YourGameProject/GameEngine/CMakeLists.txt

add_library(GameEngine STATIC
	src/Engine.cpp
)

target_include_directories(GameEngine
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include/GameEngine
)
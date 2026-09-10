# YourGameProject/Game/CMakeLists.txt

add_executable(Game
	src/Main.cpp
)

target_link_libraries(Game
	PRIVATE
		GameEngine
)
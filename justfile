
[working-directory: "build"]
build:
	cmake --build .


[working-directory: "build/bin"]
run:
	./trash-cli delete hi

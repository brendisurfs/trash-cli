
[working-directory: "build"]
build:
	cmake --build .


[working-directory: "build/bin"]
run:
	./trash-cli delete hi

# Rebuild to make sure our tests work for our implementation.
[working-directory: "build"]
test: build
	./test_trashutil

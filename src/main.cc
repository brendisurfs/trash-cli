#include "CLI11.hpp"
#include "trashutil.hpp"

#include <cstdlib>
#include <filesystem>
#include <iostream>

using std::cout;
using std::endl;
using std::filesystem::current_path;

// So a few main things:
// 1. Need a directory that stores all our trashed data.
// 2. Need some way to reference that data, whether it be a kv of the hash of a
// file, or something
// 3. Need to store the directory that the user trashed from.
// If that directory no longer exists, restore to the current directory.
// 4. Need basic commands: put, restore, empty

int main(int argc, char *argv[]) {
  CLI::App app;

  CLI11_PARSE(app, argc, argv);

  // Get the file name from the input
  if (argc < 3) {
    cout << "Not enough arguments provided" << endl;
    return EXIT_FAILURE;
  }

  TrashUtil *tp = new TrashUtil();

  char *arg_call = argv[1];
  char *file_path = argv[2];

  // this is just a lil test for now
  if (strcmp(arg_call, "trash") == 0) {
    path cwd = current_path();
    cwd.append(file_path);
    cout << "got trash call" << cwd << endl;
  }

  return EXIT_SUCCESS;
};

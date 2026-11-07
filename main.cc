#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <string>

using namespace std;

// So a few main things:
// 1. Need a directory that stores all our trashed data.
// 2. Need some way to reference that data, whether it be a kv of the hash of a
// file, or something
// 3. Need to store the directory that the user trashed from.
// If that directory no longer exists, restore to the current directory.
// 4. Need basic commands: put, restore, empty

class TrashItem {
public:
  string root_directory;
  string hash;

  TrashItem(string abs_file_path) {
    // todo: we hash the absolute file path to store so that we know which item
    // to restore.
  }
};

class TrashUtil {

public:
  void restoreItem(string item_name) {
    cout << "TODO: restore item" << endl;
    throw;
  }

  void trashitem(filesystem::path item_name) {
    string full_path_item = filesystem::absolute(item_name);

    cout << "TODO: restore item" << full_path_item << endl;
    throw;
  }
};

int main(int argc, char *argv[]) {
  // Get the file name from the input
  if (argc < 2) {
    cout << "Not enough arguments provided" << endl;
    return EXIT_FAILURE;
  }

  char *file = argv[1];
  std::cout << file << endl;

  return EXIT_SUCCESS;
};

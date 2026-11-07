#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <optional>
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
  // Returns an item, given its filename, to the original directory it was
  // stored in, if it exists. if the directory does not exist anymore, or the
  // file does not exist, it returns None. Otherwise, it returns the full path
  // to the restored file.
  std::optional<filesystem::path> restoreItem(string item_name) {
    cout << "TODO: restore item" << endl;
    throw;
  }

  // Put an item in the trash directory, wherever that is stored.
  void trashItem(filesystem::path item_name) {
    string full_path_item = filesystem::absolute(item_name);

    cout << "TODO: restore item" << full_path_item << endl;
    throw;
  }

  ~TrashUtil() { cout << "Cleaning up is fun" << endl; }
};

int main(int argc, char *argv[]) {
  // Get the file name from the input
  if (argc < 3) {
    cout << "Not enough arguments provided" << endl;
    return EXIT_FAILURE;
  }

  TrashUtil *tp = new TrashUtil();

  char *arg_call = argv[1];
  char *file_path = argv[2];

  if (strcmp(arg_call, "trash") == 0) {
    filesystem::path cwd = filesystem::current_path();
    cwd.append(file_path);
    cout << "got trash call" << cwd << endl;
  }

  return EXIT_SUCCESS;
};

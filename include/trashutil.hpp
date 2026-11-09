#include "filesystem"
#include "iostream"

#include "string"
#include <optional>

using std::cout;
using std::endl;
using std::optional;
using std::string;
using std::filesystem::path;

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
private:
  void hashPath(path item_path) {
    cout << "Not yet implemented: hashPath" << endl;
    throw;
  }

public:
  // Returns an item, given its filename, to the original directory it was
  // stored in, if it exists. if the directory does not exist anymore, or the
  // file does not exist, it returns None. Otherwise, it returns the full path
  // to the restored file.
  optional<path> restoreItem(string item_name) {
    cout << "TODO: restore item" << endl;
    throw;
  }

  // Put an item in the trash directory, wherever that is stored.
  void trashItem(path item_name) {
    string full_path_item = absolute(item_name);

    cout << "TODO: restore item" << full_path_item << endl;
    throw;
  }

  ~TrashUtil() { cout << "Cleaning up is fun" << endl; }
};
